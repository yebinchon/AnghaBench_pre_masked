
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int vq_num; struct virtio_softc* vq_vs; } ;
struct virtio_softc {struct vqueue_info* vs_queues; struct pci_devinst* vs_pi; struct virtio_consts* vs_vc; } ;
struct virtio_consts {int vc_nvq; } ;
struct pci_devinst {struct virtio_softc* pi_arg; } ;


 int FUNC_0 (int) ;

void
FUNC_1(struct virtio_softc *VAR_0, struct virtio_consts *VAR_1,
  void *VAR_2, struct pci_devinst *VAR_3,
  struct vqueue_info *VAR_4)
{
 int VAR_5;


 FUNC_0((void *)VAR_0 == VAR_2);
 VAR_0->vs_vc = VAR_1;
 VAR_0->vs_pi = VAR_3;
 VAR_3->pi_arg = VAR_0;

 VAR_0->vs_queues = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_1->vc_nvq; VAR_5++) {
  VAR_4[VAR_5].vq_vs = VAR_0;
  VAR_4[VAR_5].vq_num = VAR_5;
 }
}
