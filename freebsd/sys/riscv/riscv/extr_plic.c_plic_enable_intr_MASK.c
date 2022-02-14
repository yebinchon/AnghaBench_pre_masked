
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plic_softc {int dummy; } ;
struct plic_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct plic_softc*,int ,int) ;
 struct plic_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct plic_softc *VAR_2;
 struct plic_irqsrc *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = (struct plic_irqsrc *)VAR_1;

 FUNC_1(VAR_2, FUNC_0(VAR_3->irq), 1);
}
