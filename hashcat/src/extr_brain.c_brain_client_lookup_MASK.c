
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int status_ctx_t ;
typedef int out_size ;
typedef int operation ;
typedef int in_size ;
struct TYPE_3__ {int pws_pre_cnt; int brain_link_client_fd; scalar_t__ size_brain_link_in; scalar_t__ brain_link_out_buf; scalar_t__ brain_link_in_buf; } ;
typedef TYPE_1__ hc_device_param_t ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,...) ;
 int FUNC_1 (int const,...) ;

bool FUNC_2 (hc_device_param_t *VAR_3, const status_ctx_t *VAR_4)
{
  if (VAR_3->pws_pre_cnt == 0) return 1;

  const int VAR_5 = VAR_3->brain_link_client_fd;

  if (VAR_5 == -1) return 0;

  char *VAR_6 = (char *) VAR_3->brain_link_in_buf;
  char *VAR_7 = (char *) VAR_3->brain_link_out_buf;

  int VAR_8 = 0;
  int VAR_9 = VAR_3->pws_pre_cnt * VAR_0;

  u8 VAR_10 = VAR_1;

  if (FUNC_1 (VAR_5, &VAR_10, sizeof (VAR_10), VAR_2, VAR_3, VAR_4) == 0) return 0;
  if (FUNC_1 (VAR_5, &VAR_9, sizeof (VAR_9), VAR_2, VAR_3, VAR_4) == 0) return 0;
  if (FUNC_1 (VAR_5, VAR_7, VAR_9, VAR_2, VAR_3, VAR_4) == 0) return 0;

  if (FUNC_0 (VAR_5, &VAR_8, sizeof (VAR_8), 0, VAR_3, VAR_4) == 0) return 0;

  if (VAR_8 > (int) VAR_3->size_brain_link_in) return 0;

  if (FUNC_0 (VAR_5, VAR_6, (size_t) VAR_8, 0, VAR_3, VAR_4) == 0) return 0;

  return 1;
}
