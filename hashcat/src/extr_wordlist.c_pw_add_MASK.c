
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int cnt; int len; int off; } ;
typedef TYPE_1__ pw_idx_t ;
struct TYPE_5__ {scalar_t__ pws_cnt; scalar_t__ kernel_power; int pws_comp; TYPE_1__* pws_idx; } ;
typedef TYPE_2__ hc_device_param_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int const*,int const) ;
 int FUNC_2 (int *,int ,int const) ;
 int VAR_0 ;

void FUNC_3 (hc_device_param_t *VAR_1, const u8 *VAR_2, const int VAR_3)
{
  if (VAR_1->pws_cnt < VAR_1->kernel_power)
  {
    pw_idx_t *VAR_4 = VAR_1->pws_idx + VAR_1->pws_cnt;

    const u32 VAR_5 = (VAR_3 + 3) & ~3;

    const u32 VAR_6 = VAR_5 / 4;

    VAR_4->cnt = VAR_6;
    VAR_4->len = VAR_3;

    u8 *VAR_7 = (u8 *) (VAR_1->pws_comp + VAR_4->off);

    FUNC_1 (VAR_7, VAR_2, VAR_3);

    FUNC_2 (VAR_7 + VAR_3, 0, VAR_5 - VAR_3);



    pw_idx_t *VAR_8 = VAR_4 + 1;

    VAR_8->off = VAR_4->off + VAR_4->cnt;

    VAR_1->pws_cnt++;
  }
  else
  {
    FUNC_0 (VAR_0, "BUG pw_add()!!\n");

    return;
  }
}
