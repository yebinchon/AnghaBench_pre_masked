
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct virtio_net_rxhdr {int dummy; } ;
struct pci_vtnet_softc {int vsc_features; int rx_vhdrlen; int vsc_be; scalar_t__ rx_merge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, uint64_t VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_1;

 VAR_3->vsc_features = VAR_2;

 if (!(VAR_2 & VAR_0)) {
  VAR_3->rx_merge = 0;


  VAR_3->rx_vhdrlen = sizeof(struct virtio_net_rxhdr) - 2;
 }


 FUNC_0(VAR_3->vsc_be, VAR_2, VAR_3->rx_vhdrlen);
}
