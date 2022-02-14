
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uv_irq_2_mmr_pnode {int offset; int pnode; } ;
struct uv_IO_APIC_route_entry {int dest; scalar_t__ mask; scalar_t__ trigger; scalar_t__ polarity; int dest_mode; int delivery_mode; int vector; } ;
struct irq_cfg {int dest_apicid; int vector; } ;
struct TYPE_2__ {int irq_dest_mode; int irq_delivery_mode; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct irq_cfg *VAR_1, struct uv_irq_2_mmr_pnode *VAR_2)
{
 unsigned long VAR_3;
 struct uv_IO_APIC_route_entry *VAR_4;

 FUNC_0(sizeof(struct uv_IO_APIC_route_entry) !=
       sizeof(unsigned long));

 VAR_3 = 0;
 VAR_4 = (struct uv_IO_APIC_route_entry *)&VAR_3;
 VAR_4->vector = VAR_1->vector;
 VAR_4->delivery_mode = VAR_0->irq_delivery_mode;
 VAR_4->dest_mode = VAR_0->irq_dest_mode;
 VAR_4->polarity = 0;
 VAR_4->trigger = 0;
 VAR_4->mask = 0;
 VAR_4->dest = VAR_1->dest_apicid;

 FUNC_1(VAR_2->pnode, VAR_2->offset, VAR_3);
}
