
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {int dummy; } ;
struct pci_vtcon_port {int vsp_txq; int vsp_rxq; TYPE_1__* vsp_sc; } ;
struct TYPE_2__ {struct vqueue_info* vsc_queues; } ;



__attribute__((used)) static inline struct vqueue_info *
FUNC_0(struct pci_vtcon_port *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1 ? VAR_0->vsp_txq : VAR_0->vsp_rxq;
 return (&VAR_0->vsp_sc->vsc_queues[VAR_2]);
}
