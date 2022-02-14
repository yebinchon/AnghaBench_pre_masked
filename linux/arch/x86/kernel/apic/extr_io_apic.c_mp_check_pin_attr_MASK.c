
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trigger; scalar_t__ polarity; } ;
struct mp_chip_data {int count; scalar_t__ trigger; scalar_t__ polarity; TYPE_1__ entry; } ;
struct irq_alloc_info {scalar_t__ ioapic_trigger; scalar_t__ ioapic_polarity; } ;


 struct mp_chip_data* FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(int VAR_0, struct irq_alloc_info *VAR_1)
{
 struct mp_chip_data *VAR_2 = FUNC_0(VAR_0);






 if (VAR_0 < FUNC_2() && VAR_2->count == 1) {
  if (VAR_1->ioapic_trigger != VAR_2->trigger)
   FUNC_1(VAR_0, VAR_1->ioapic_trigger);
  VAR_2->entry.trigger = VAR_2->trigger = VAR_1->ioapic_trigger;
  VAR_2->entry.polarity = VAR_2->polarity = VAR_1->ioapic_polarity;
 }

 return VAR_2->trigger == VAR_1->ioapic_trigger &&
        VAR_2->polarity == VAR_1->ioapic_polarity;
}
