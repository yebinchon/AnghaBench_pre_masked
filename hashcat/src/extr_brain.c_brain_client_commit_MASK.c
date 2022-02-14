
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int status_ctx_t ;
typedef int operation ;
struct TYPE_4__ {scalar_t__ pws_cnt; int brain_link_client_fd; } ;
typedef TYPE_1__ hc_device_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int *,int,int ,TYPE_1__*,int const*) ;

bool FUNC_1 (hc_device_param_t *VAR_2, const status_ctx_t *VAR_3)
{
  if (VAR_2->pws_cnt == 0) return 1;

  const int VAR_4 = VAR_2->brain_link_client_fd;

  if (VAR_4 == -1) return 0;

  u8 VAR_5 = VAR_0;

  if (FUNC_0 (VAR_4, &VAR_5, sizeof (VAR_5), VAR_1, VAR_2, VAR_3) == 0) return 0;

  return 1;
}
