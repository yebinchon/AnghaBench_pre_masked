
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtcon_softc {int vsc_nports; struct pci_vtcon_port* vsc_ports; } ;
struct pci_vtcon_port {int vsp_id; char const* vsp_name; int vsp_txq; int vsp_rxq; int vsp_enabled; void* vsp_arg; int * vsp_cb; struct pci_vtcon_softc* vsp_sc; } ;
typedef int pci_vtcon_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct pci_vtcon_port *
FUNC_0(struct pci_vtcon_softc *VAR_3, const char *VAR_4,
    pci_vtcon_cb_t *VAR_5, void *VAR_6)
{
 struct pci_vtcon_port *VAR_7;

 if (VAR_3->vsc_nports == VAR_1) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 VAR_7 = &VAR_3->vsc_ports[VAR_3->vsc_nports++];
 VAR_7->vsp_id = VAR_3->vsc_nports - 1;
 VAR_7->vsp_sc = VAR_3;
 VAR_7->vsp_name = VAR_4;
 VAR_7->vsp_cb = VAR_5;
 VAR_7->vsp_arg = VAR_6;

 if (VAR_7->vsp_id == 0) {

  VAR_7->vsp_txq = 0;
  VAR_7->vsp_rxq = 1;
 } else {
  VAR_7->vsp_txq = VAR_3->vsc_nports * 2;
  VAR_7->vsp_rxq = VAR_7->vsp_txq + 1;
 }

 VAR_7->vsp_enabled = 1;
 return (VAR_7);
}
