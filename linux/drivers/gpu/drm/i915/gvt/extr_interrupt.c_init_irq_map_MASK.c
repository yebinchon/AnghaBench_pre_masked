
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_irq_map {int up_irq_bit; size_t up_irq_group; size_t down_irq_group; int down_irq_bitmask; } ;
struct intel_gvt_irq_info {int has_upstream_irq; int group; int downstream_irq_bitmap; } ;
struct intel_gvt_irq {struct intel_gvt_irq_info** info; struct intel_gvt_irq_map* irq_map; } ;


 int FUNC_0 (char*,int ,int,int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_gvt_irq *VAR_0)
{
 struct intel_gvt_irq_map *VAR_1;
 struct intel_gvt_irq_info *VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_1 = VAR_0->irq_map; VAR_1->up_irq_bit != -1; VAR_1++) {
  VAR_2 = VAR_0->info[VAR_1->up_irq_group];
  VAR_4 = VAR_1->up_irq_bit;
  VAR_3 = VAR_0->info[VAR_1->down_irq_group];

  FUNC_1(VAR_4, VAR_2->downstream_irq_bitmap);
  VAR_3->has_upstream_irq = 1;

  FUNC_0("[up] grp %d bit %d -> [down] grp %d bitmask %x\n",
   VAR_2->group, VAR_4,
   VAR_3->group, VAR_1->down_irq_bitmask);
 }
}
