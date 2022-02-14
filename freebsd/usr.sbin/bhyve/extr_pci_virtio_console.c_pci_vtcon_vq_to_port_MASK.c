
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vqueue_info {int vq_num; } ;
struct pci_vtcon_port {int dummy; } ;
struct pci_vtcon_softc {struct pci_vtcon_port* vsc_ports; struct pci_vtcon_port vsc_control_port; } ;



__attribute__((used)) static inline struct pci_vtcon_port *
FUNC_0(struct pci_vtcon_softc *VAR_0, struct vqueue_info *VAR_1)
{
 uint16_t VAR_2 = VAR_1->vq_num;

 if (VAR_2 == 0 || VAR_2 == 1)
  return (&VAR_0->vsc_ports[0]);

 if (VAR_2 == 2 || VAR_2 == 3)
  return (&VAR_0->vsc_control_port);

 return (&VAR_0->vsc_ports[(VAR_2 / 2) - 1]);
}
