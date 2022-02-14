
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_sdm_internal {int enable; int tuning_enable; scalar_t__ tuning_reg; } ;
struct ccu_common {int features; int lock; scalar_t__ base; scalar_t__ reg; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ccu_common *VAR_1,
       struct ccu_sdm_internal *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 if (!(VAR_1->features & VAR_0))
  return;

 FUNC_1(VAR_1->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1->base + VAR_1->reg);
 FUNC_3(VAR_4 & ~VAR_2->enable, VAR_1->base + VAR_1->reg);
 FUNC_2(VAR_1->lock, VAR_3);

 FUNC_1(VAR_1->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1->base + VAR_2->tuning_reg);
 FUNC_3(VAR_4 & ~VAR_2->tuning_enable, VAR_1->base + VAR_2->tuning_reg);
 FUNC_2(VAR_1->lock, VAR_3);
}
