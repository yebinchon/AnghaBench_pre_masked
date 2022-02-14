
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtcon_port {int * vsp_name; int vsp_sc; int vsp_id; } ;
struct pci_vtcon_control {int value; int event; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pci_vtcon_control*,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct pci_vtcon_port *VAR_2)
{
 struct pci_vtcon_control VAR_3;

 VAR_3.id = VAR_2->vsp_id;
 VAR_3.event = VAR_0;
 VAR_3.value = 1;
 FUNC_0(VAR_2->vsp_sc, &VAR_3, ((void*)0), 0);

 VAR_3.event = VAR_1;
 FUNC_0(VAR_2->vsp_sc, &VAR_3, VAR_2->vsp_name,
     FUNC_1(VAR_2->vsp_name));
}
