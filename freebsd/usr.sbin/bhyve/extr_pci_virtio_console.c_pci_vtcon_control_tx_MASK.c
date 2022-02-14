
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtcon_softc {int vsc_ready; size_t vsc_nports; struct pci_vtcon_port* vsc_ports; } ;
struct pci_vtcon_port {int vsp_console; int vsp_open; int vsp_enabled; struct pci_vtcon_softc* vsp_sc; } ;
struct pci_vtcon_control {int event; size_t id; int value; } ;
struct iovec {scalar_t__ iov_base; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_vtcon_port*) ;
 int FUNC_3 (struct pci_vtcon_softc*,struct pci_vtcon_control*,int *,int ) ;
 int FUNC_4 (struct pci_vtcon_port*,int) ;

__attribute__((used)) static void
FUNC_5(struct pci_vtcon_port *VAR_2, void *VAR_3, struct iovec *VAR_4,
    int VAR_5)
{
 struct pci_vtcon_softc *VAR_6;
 struct pci_vtcon_port *VAR_7;
 struct pci_vtcon_control VAR_8, *VAR_9;
 int VAR_10;

 FUNC_1(VAR_5 == 1);

 VAR_6 = VAR_2->vsp_sc;
 VAR_9 = (struct pci_vtcon_control *)VAR_4->iov_base;

 switch (VAR_9->event) {
 case 129:
  VAR_6->vsc_ready = 1;

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   VAR_7 = &VAR_6->vsc_ports[VAR_10];
   if (VAR_7->vsp_enabled)
    FUNC_2(VAR_7);

   if (VAR_7->vsp_open)
    FUNC_4(VAR_7, 1);
  }
  break;

 case 128:
  if (VAR_9->id >= VAR_6->vsc_nports) {
   FUNC_0(("VTCON_PORT_READY event for unknown port %d\n",
       VAR_9->id));
   return;
  }

  VAR_7 = &VAR_6->vsc_ports[VAR_9->id];
  if (VAR_7->vsp_console) {
   VAR_8.event = VAR_0;
   VAR_8.id = VAR_9->id;
   VAR_8.value = 1;
   FUNC_3(VAR_6, &VAR_8, ((void*)0), 0);
  }
  break;
 }
}
