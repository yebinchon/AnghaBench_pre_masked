
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_vtcon_port {int vsp_open; TYPE_1__* vsp_sc; int vsp_id; } ;
struct pci_vtcon_control {int value; int event; int id; } ;
struct TYPE_2__ {int vsc_ready; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct pci_vtcon_control*,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct pci_vtcon_port *VAR_1, bool VAR_2)
{
 struct pci_vtcon_control VAR_3;

 if (!VAR_1->vsp_sc->vsc_ready) {
  VAR_1->vsp_open = 1;
  return;
 }

 VAR_3.id = VAR_1->vsp_id;
 VAR_3.event = VAR_0;
 VAR_3.value = (int)VAR_2;
 FUNC_0(VAR_1->vsp_sc, &VAR_3, ((void*)0), 0);
}
