
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_3__ {int mask_low; } ;
typedef TYPE_1__ pp_atomctrl_voltage_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,TYPE_1__*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3)
{
 pp_atomctrl_voltage_table VAR_4;
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_3,
            VAR_2, VAR_1,
            &VAR_4);
 if (VAR_5 == 0) {
  int VAR_7, VAR_8;
  u32 VAR_9 = VAR_4.mask_low;

  for (VAR_7 = 0, VAR_8 = 0; VAR_7 < 32; VAR_7++) {
   if (VAR_9 & 1) {
    VAR_6 |= (VAR_7 << (8 * VAR_8));
    if (++VAR_8 >= 3)
     break;
   }
   VAR_9 >>= 1;
  }
 }
 if (VAR_6)
  FUNC_1(VAR_3,
          VAR_0,
          VAR_6);
 return 0;
}
