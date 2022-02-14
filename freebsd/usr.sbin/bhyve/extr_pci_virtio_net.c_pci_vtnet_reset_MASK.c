
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_rxhdr {int dummy; } ;
struct pci_vtnet_softc {int resetting; int rx_merge; int rx_vhdrlen; int rx_mtx; int tx_mtx; int vsc_vs; scalar_t__ tx_in_progress; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct pci_vtnet_softc *VAR_1 = VAR_0;

 FUNC_0(("vtnet: device reset requested !\n"));


 FUNC_1(&VAR_1->rx_mtx);


 FUNC_1(&VAR_1->tx_mtx);
 VAR_1->resetting = 1;
 while (VAR_1->tx_in_progress) {
  FUNC_2(&VAR_1->tx_mtx);
  FUNC_3(10000);
  FUNC_1(&VAR_1->tx_mtx);
 }

 VAR_1->rx_merge = 1;
 VAR_1->rx_vhdrlen = sizeof(struct virtio_net_rxhdr);






 FUNC_4(&VAR_1->vsc_vs);

 VAR_1->resetting = 0;
 FUNC_2(&VAR_1->tx_mtx);
 FUNC_2(&VAR_1->rx_mtx);
}
