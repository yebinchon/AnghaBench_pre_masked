
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_kbc {int mmio; TYPE_1__* pin_cfg; } ;
struct TYPE_2__ {int type; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct tegra_kbc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_5 = 5 * (VAR_4 % 6);
  u32 VAR_6 = 4 * (VAR_4 % 8);
  u32 VAR_7 = 0x1f << VAR_5;
  u32 VAR_8 = 0x0f << VAR_6;
  u32 VAR_9 = (VAR_4 / 6) * 4 + VAR_2;
  u32 VAR_10 = (VAR_4 / 8) * 4 + VAR_0;
  u32 VAR_11 = FUNC_0(VAR_3->mmio + VAR_9);
  u32 VAR_12 = FUNC_0(VAR_3->mmio + VAR_10);

  VAR_11 &= ~VAR_7;
  VAR_12 &= ~VAR_8;

  switch (VAR_3->pin_cfg[VAR_4].type) {
  case 128:
   VAR_11 |= ((VAR_3->pin_cfg[VAR_4].num << 1) | 1) << VAR_5;
   break;

  case 130:
   VAR_12 |= ((VAR_3->pin_cfg[VAR_4].num << 1) | 1) << VAR_6;
   break;

  case 129:
   break;
  }

  FUNC_1(VAR_11, VAR_3->mmio + VAR_9);
  FUNC_1(VAR_12, VAR_3->mmio + VAR_10);
 }
}
