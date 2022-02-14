
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int dummy; } ;
struct pci_vtcon_softc {int dummy; } ;
struct pci_vtcon_port {int vsp_rx_ready; } ;


 struct pci_vtcon_port* FUNC_0 (struct pci_vtcon_softc*,struct vqueue_info*) ;
 int FUNC_1 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct pci_vtcon_softc *VAR_2;
 struct pci_vtcon_port *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (!VAR_3->vsp_rx_ready) {
  VAR_3->vsp_rx_ready = 1;
  FUNC_1(VAR_1);
 }
}
