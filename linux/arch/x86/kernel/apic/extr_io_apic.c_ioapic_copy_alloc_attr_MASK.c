
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_alloc_info {int ioapic_pin; int ioapic_valid; int ioapic_trigger; int ioapic_polarity; int ioapic_node; int ioapic_id; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (struct irq_alloc_info*,struct irq_alloc_info*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct irq_alloc_info *VAR_4,
       struct irq_alloc_info *VAR_5,
       u32 VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_1(VAR_4, VAR_5);
 VAR_4->type = VAR_3;
 VAR_4->ioapic_id = FUNC_2(VAR_7);
 VAR_4->ioapic_pin = VAR_8;
 VAR_4->ioapic_valid = 1;
 if (VAR_5 && VAR_5->ioapic_valid) {
  VAR_4->ioapic_node = VAR_5->ioapic_node;
  VAR_4->ioapic_trigger = VAR_5->ioapic_trigger;
  VAR_4->ioapic_polarity = VAR_5->ioapic_polarity;
 } else {
  VAR_4->ioapic_node = VAR_2;
  if (FUNC_0(VAR_6, &VAR_9, &VAR_10) >= 0) {
   VAR_4->ioapic_trigger = VAR_9;
   VAR_4->ioapic_polarity = VAR_10;
  } else {




   VAR_4->ioapic_trigger = VAR_0;
   VAR_4->ioapic_polarity = VAR_1;
  }
 }
}
