
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xive_irq_data {int * trig_mmio; int * eoi_mmio; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct xive_irq_data *VAR_0)
{
 if (VAR_0->eoi_mmio) {
  FUNC_0(VAR_0->eoi_mmio);
  if (VAR_0->eoi_mmio == VAR_0->trig_mmio)
   VAR_0->trig_mmio = ((void*)0);
  VAR_0->eoi_mmio = ((void*)0);
 }
 if (VAR_0->trig_mmio) {
  FUNC_0(VAR_0->trig_mmio);
  VAR_0->trig_mmio = ((void*)0);
 }
}
