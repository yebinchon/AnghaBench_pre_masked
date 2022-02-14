
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtblk_softc {int vbsc_vs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct pci_vtblk_softc *VAR_1 = VAR_0;

 FUNC_0(("vtblk: device reset requested !\n"));
 FUNC_1(&VAR_1->vbsc_vs);
}
