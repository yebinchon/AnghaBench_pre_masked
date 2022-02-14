
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ccu_sdm_internal {unsigned int table_size; int tuning_enable; int enable; scalar_t__ tuning_reg; TYPE_1__* table; } ;
struct ccu_common {int features; int lock; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_2__ {unsigned long rate; int pattern; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ccu_common *VAR_1,
      struct ccu_sdm_internal *VAR_2,
      unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 if (!(VAR_1->features & VAR_0))
  return;


 for (VAR_5 = 0; VAR_5 < VAR_2->table_size; VAR_5++)
  if (VAR_2->table[VAR_5].rate == VAR_3)
   FUNC_3(VAR_2->table[VAR_5].pattern,
          VAR_1->base + VAR_2->tuning_reg);


 FUNC_1(VAR_1->lock, VAR_4);
 VAR_6 = FUNC_0(VAR_1->base + VAR_2->tuning_reg);
 FUNC_3(VAR_6 | VAR_2->tuning_enable, VAR_1->base + VAR_2->tuning_reg);
 FUNC_2(VAR_1->lock, VAR_4);

 FUNC_1(VAR_1->lock, VAR_4);
 VAR_6 = FUNC_0(VAR_1->base + VAR_1->reg);
 FUNC_3(VAR_6 | VAR_2->enable, VAR_1->base + VAR_1->reg);
 FUNC_2(VAR_1->lock, VAR_4);
}
