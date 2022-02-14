
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char* name; int flags; } ;
struct pci_dev {int class; int bus; } ;
struct pci_bus_region {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 struct resource* FUNC_2 (struct pci_dev*,struct resource*) ;
 int FUNC_3 (struct pci_dev*,char*,struct resource*,...) ;
 int FUNC_4 (int ,struct resource*,struct pci_bus_region*) ;
 struct resource* FUNC_5 (struct resource*,struct resource*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_4)
{
 struct pci_bus_region VAR_5;
 struct resource *VAR_6, *VAR_7, *VAR_8;

 if ((VAR_4->class >> 8) != VAR_3)
  return;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_6->name = "Video RAM area";
 VAR_6->flags = VAR_2 | VAR_1;

 VAR_5.start = 0xa0000UL;
 VAR_5.end = VAR_5.start + 0x1ffffUL;
 FUNC_4(VAR_4->bus, VAR_6, &VAR_5);

 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (!VAR_7) {
  FUNC_3(VAR_4, "can't claim VGA legacy %pR: no compatible bridge window\n", VAR_6);
  goto err;
 }

 VAR_8 = FUNC_5(VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_4, "can't claim VGA legacy %pR: address conflict with %s %pR\n",
    VAR_6, VAR_8->name, VAR_8);
  goto err;
 }

 FUNC_3(VAR_4, "VGA legacy framebuffer %pR\n", VAR_6);
 return;

err:
 FUNC_0(VAR_6);
}
