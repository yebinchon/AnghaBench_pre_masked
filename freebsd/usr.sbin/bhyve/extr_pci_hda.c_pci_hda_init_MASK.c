
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct pci_devinst {struct hda_softc* pi_arg; } ;
struct hda_softc {struct pci_devinst* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 struct hda_softc* FUNC_1 (char*) ;
 int FUNC_2 (struct pci_devinst*,int ,int ,int ) ;
 int FUNC_3 (struct pci_devinst*) ;
 int FUNC_4 (struct pci_devinst*,int ,int ) ;
 int FUNC_5 (struct pci_devinst*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_11, struct pci_devinst *VAR_12, char *VAR_13)
{
 struct hda_softc *VAR_14 = ((void*)0);

 FUNC_0(VAR_11 != ((void*)0));
 FUNC_0(VAR_12 != ((void*)0));

 FUNC_4(VAR_12, VAR_9, VAR_2);
 FUNC_4(VAR_12, VAR_6, VAR_0);

 FUNC_5(VAR_12, VAR_8, VAR_10);
 FUNC_5(VAR_12, VAR_5, VAR_4);


 FUNC_5(VAR_12, VAR_7, 0x01);


 FUNC_2(VAR_12, 0, VAR_3, VAR_1);


 FUNC_3(VAR_12);

 VAR_14 = FUNC_1(VAR_13);
 if (!VAR_14)
  return (-1);

 VAR_14->pci_dev = VAR_12;
 VAR_12->pi_arg = VAR_14;

 return (0);
}
