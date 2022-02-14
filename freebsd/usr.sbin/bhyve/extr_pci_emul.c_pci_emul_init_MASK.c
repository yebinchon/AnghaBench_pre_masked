
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ ioapic_irq; scalar_t__ pirq_pin; int state; scalar_t__ pin; int lock; } ;
struct pci_devinst {int pi_bus; int pi_slot; int pi_func; int pi_name; struct pci_devemu* pi_d; TYPE_1__ pi_lintr; struct vmctx* pi_vmctx; } ;
struct pci_devemu {char* pe_emu; int (* pe_init ) (struct vmctx*,struct pci_devinst*,int ) ;} ;
struct funcinfo {struct pci_devinst* fi_devi; int fi_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_devinst* FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (struct pci_devinst*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;
 int FUNC_5 (struct vmctx*,struct pci_devinst*,int ) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_6, struct pci_devemu *VAR_7, int VAR_8, int VAR_9,
    int VAR_10, struct funcinfo *VAR_11)
{
 struct pci_devinst *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(1, sizeof(struct pci_devinst));

 VAR_12->pi_vmctx = VAR_6;
 VAR_12->pi_bus = VAR_8;
 VAR_12->pi_slot = VAR_9;
 VAR_12->pi_func = VAR_10;
 FUNC_3(&VAR_12->pi_lintr.lock, ((void*)0));
 VAR_12->pi_lintr.pin = 0;
 VAR_12->pi_lintr.state = VAR_0;
 VAR_12->pi_lintr.pirq_pin = 0;
 VAR_12->pi_lintr.ioapic_irq = 0;
 VAR_12->pi_d = VAR_7;
 FUNC_4(VAR_12->pi_name, VAR_5, "%s-pci-%d", VAR_7->pe_emu, VAR_9);


 FUNC_2(VAR_12, VAR_3, 255);
 FUNC_2(VAR_12, VAR_4, 0);

 FUNC_2(VAR_12, VAR_2, VAR_1);

 VAR_13 = (*VAR_7->pe_init)(VAR_6, VAR_12, VAR_11->fi_param);
 if (VAR_13 == 0)
  VAR_11->fi_devi = VAR_12;
 else
  FUNC_1(VAR_12);

 return (VAR_13);
}
