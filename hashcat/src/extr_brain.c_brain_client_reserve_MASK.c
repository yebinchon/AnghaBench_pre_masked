
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int work ;
typedef int words_off ;
typedef int u8 ;
typedef int u64 ;
typedef int status_ctx_t ;
typedef int operation ;
struct TYPE_5__ {int brain_link_client_fd; } ;
typedef TYPE_1__ hc_device_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int *,int,int ,TYPE_1__*,int const*) ;
 int FUNC_1 (int const,int *,int,int ,TYPE_1__*,int const*) ;

bool FUNC_2 (hc_device_param_t *VAR_2, const status_ctx_t *VAR_3, u64 VAR_4, u64 VAR_5, u64 *VAR_6)
{
  const int VAR_7 = VAR_2->brain_link_client_fd;

  if (VAR_7 == -1) return 0;

  u8 VAR_8 = VAR_0;

  if (FUNC_1 (VAR_7, &VAR_8, sizeof (VAR_8), VAR_1, VAR_2, VAR_3) == 0) return 0;
  if (FUNC_1 (VAR_7, &VAR_4, sizeof (VAR_4), 0, VAR_2, VAR_3) == 0) return 0;
  if (FUNC_1 (VAR_7, &VAR_5, sizeof (VAR_5), 0, VAR_2, VAR_3) == 0) return 0;

  if (FUNC_0 (VAR_7, VAR_6, sizeof (u64), 0, VAR_2, VAR_3) == 0) return 0;

  return 1;
}
