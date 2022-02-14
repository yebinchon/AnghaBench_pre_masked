
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys** phys_encs; int enc_spinlock; struct drm_crtc* crtc; } ;
struct TYPE_2__ {int (* control_vblank_irq ) (struct dpu_encoder_phys*,int) ;} ;
struct dpu_encoder_phys {TYPE_1__ ops; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct dpu_encoder_phys*,int) ;
 struct dpu_encoder_virt* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct drm_encoder *VAR_0,
     struct drm_crtc *VAR_1, bool VAR_2)
{
 struct dpu_encoder_virt *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_5(FUNC_0(VAR_0), VAR_2);

 FUNC_1(&VAR_3->enc_spinlock, VAR_4);
 if (VAR_3->crtc != VAR_1) {
  FUNC_2(&VAR_3->enc_spinlock, VAR_4);
  return;
 }
 FUNC_2(&VAR_3->enc_spinlock, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_phys_encs; VAR_5++) {
  struct dpu_encoder_phys *VAR_6 = VAR_3->phys_encs[VAR_5];

  if (VAR_6 && VAR_6->ops.control_vblank_irq)
   VAR_6->ops.control_vblank_irq(VAR_6, VAR_2);
 }
}
