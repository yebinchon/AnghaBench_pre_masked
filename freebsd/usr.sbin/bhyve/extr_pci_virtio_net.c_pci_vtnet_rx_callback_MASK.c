
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtnet_softc {int rx_mtx; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int FUNC_0 (struct pci_vtnet_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, enum ev_type VAR_1, void *VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->rx_mtx);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->rx_mtx);

}
