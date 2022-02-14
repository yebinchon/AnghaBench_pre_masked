
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rmii_reset_reg {int mask; scalar_t__ reg; } ;
struct TYPE_2__ {int lock; scalar_t__ base; struct rmii_reset_reg* rmii_resets; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(int VAR_2, int VAR_3)
{
 struct rmii_reset_reg *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return;

 VAR_4 = &VAR_1.rmii_resets[VAR_2];
 if (VAR_4->mask == 0)
  return;

 FUNC_2(&VAR_1.lock, VAR_5);

 VAR_6 = FUNC_1(VAR_1.base + VAR_4->reg);
 if (VAR_3)
  FUNC_0(VAR_4->reg, VAR_6 | VAR_4->mask);
 else
  FUNC_0(VAR_4->reg, VAR_6 & ~(VAR_4->mask));

 FUNC_3(&VAR_1.lock, VAR_5);
}
