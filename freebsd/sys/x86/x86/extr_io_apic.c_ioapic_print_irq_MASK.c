
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioapic_intsrc {int io_irq; int io_bus; } ;






 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct ioapic_intsrc *VAR_0)
{

 switch (VAR_0->io_irq) {
 case 131:
  FUNC_1("disabled");
  break;
 case 130:
  FUNC_1("ExtINT");
  break;
 case 129:
  FUNC_1("NMI");
  break;
 case 128:
  FUNC_1("SMI");
  break;
 default:
  FUNC_1("%s IRQ %d", FUNC_0(VAR_0->io_bus),
      VAR_0->io_irq);
 }
}
