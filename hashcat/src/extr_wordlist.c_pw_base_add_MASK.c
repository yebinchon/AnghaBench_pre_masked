
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pw_pre_t ;
struct TYPE_3__ {scalar_t__ pws_base_cnt; scalar_t__ kernel_power; scalar_t__ pws_base_buf; } ;
typedef TYPE_1__ hc_device_param_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int VAR_0 ;

void FUNC_2 (hc_device_param_t *VAR_1, pw_pre_t *VAR_2)
{
  if (VAR_1->pws_base_cnt < VAR_1->kernel_power)
  {
    FUNC_1 (VAR_1->pws_base_buf + VAR_1->pws_base_cnt, VAR_2, sizeof (pw_pre_t));

    VAR_1->pws_base_cnt++;
  }
  else
  {
    FUNC_0 (VAR_0, "BUG pw_base_add()!!\n");

    return;
  }
}
