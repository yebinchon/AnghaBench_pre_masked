
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int vq_msix_idx; } ;
struct virtio_softc {int vs_pi; int vs_isr; } ;


 int FUNC_0 (struct virtio_softc*) ;
 int FUNC_1 (struct virtio_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void
FUNC_6(struct virtio_softc *VAR_1, struct vqueue_info *VAR_2)
{

 if (FUNC_5(VAR_1->vs_pi))
  FUNC_3(VAR_1->vs_pi, VAR_2->vq_msix_idx);
 else {
  FUNC_0(VAR_1);
  VAR_1->vs_isr |= VAR_0;
  FUNC_2(VAR_1->vs_pi, 0);
  FUNC_4(VAR_1->vs_pi);
  FUNC_1(VAR_1);
 }
}
