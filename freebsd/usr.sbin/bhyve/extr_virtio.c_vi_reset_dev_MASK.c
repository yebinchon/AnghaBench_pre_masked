
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {void* vq_msix_idx; scalar_t__ vq_pfn; scalar_t__ vq_save_used; scalar_t__ vq_next_used; scalar_t__ vq_last_avail; scalar_t__ vq_flags; } ;
struct virtio_softc {void* vs_msix_cfg_idx; scalar_t__ vs_isr; int vs_pi; scalar_t__ vs_curq; scalar_t__ vs_negotiated_caps; struct vqueue_info* vs_queues; TYPE_1__* vs_vc; scalar_t__ vs_mtx; } ;
struct TYPE_2__ {int vc_nvq; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(struct virtio_softc *VAR_1)
{
 struct vqueue_info *VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1->vs_mtx)
  FUNC_0(FUNC_2(VAR_1->vs_mtx));

 VAR_4 = VAR_1->vs_vc->vc_nvq;
 for (VAR_2 = VAR_1->vs_queues, VAR_3 = 0; VAR_3 < VAR_4; VAR_2++, VAR_3++) {
  VAR_2->vq_flags = 0;
  VAR_2->vq_last_avail = 0;
  VAR_2->vq_next_used = 0;
  VAR_2->vq_save_used = 0;
  VAR_2->vq_pfn = 0;
  VAR_2->vq_msix_idx = VAR_0;
 }
 VAR_1->vs_negotiated_caps = 0;
 VAR_1->vs_curq = 0;

 if (VAR_1->vs_isr)
  FUNC_1(VAR_1->vs_pi);
 VAR_1->vs_isr = 0;
 VAR_1->vs_msix_cfg_idx = VAR_0;
}
