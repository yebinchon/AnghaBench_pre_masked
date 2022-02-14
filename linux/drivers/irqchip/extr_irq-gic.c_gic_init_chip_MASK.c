
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int irq_set_affinity; int irq_set_vcpu_affinity; int irq_eoi; int irq_mask; struct device* parent_device; } ;
struct gic_chip_data {TYPE_1__ chip; } ;
struct device {int dummy; } ;


 TYPE_1__ VAR_0 ;
 struct gic_chip_data* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct gic_chip_data *VAR_6, struct device *VAR_7,
     const char *VAR_8, bool VAR_9)
{

 VAR_6->chip = VAR_0;
 VAR_6->chip.name = VAR_8;
 VAR_6->chip.parent_device = VAR_7;

 if (VAR_9) {
  VAR_6->chip.irq_mask = VAR_3;
  VAR_6->chip.irq_eoi = VAR_2;
  VAR_6->chip.irq_set_vcpu_affinity = VAR_4;
 }





}
