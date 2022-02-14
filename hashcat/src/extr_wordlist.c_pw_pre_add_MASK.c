
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pw_len; int base_len; int rule_idx; int base_buf; int pw_buf; } ;
typedef TYPE_1__ pw_pre_t ;
struct TYPE_5__ {scalar_t__ pws_pre_cnt; scalar_t__ kernel_power; TYPE_1__* pws_pre_buf; } ;
typedef TYPE_2__ hc_device_param_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int const*,int const) ;
 int VAR_0 ;

void FUNC_2 (hc_device_param_t *VAR_1, const u8 *VAR_2, const int VAR_3, const u8 *VAR_4, const int VAR_5, const int VAR_6)
{
  if (VAR_1->pws_pre_cnt < VAR_1->kernel_power)
  {
    pw_pre_t *VAR_7 = VAR_1->pws_pre_buf + VAR_1->pws_pre_cnt;

    FUNC_1 (VAR_7->pw_buf, VAR_2, VAR_3);

    VAR_7->pw_len = VAR_3;

    if (VAR_4 != ((void*)0))
    {
      FUNC_1 (VAR_7->base_buf, VAR_4, VAR_5);

      VAR_7->base_len = VAR_5;
    }

    VAR_7->rule_idx = VAR_6;

    VAR_1->pws_pre_cnt++;
  }
  else
  {
    FUNC_0 (VAR_0, "BUG pw_pre_add()!!\n");

    return;
  }
}
