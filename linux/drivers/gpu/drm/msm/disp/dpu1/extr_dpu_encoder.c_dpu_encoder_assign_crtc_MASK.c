
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct dpu_encoder_virt {int enc_spinlock; struct drm_crtc* crtc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct dpu_encoder_virt* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_0, struct drm_crtc *VAR_1)
{
 struct dpu_encoder_virt *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->enc_spinlock, VAR_3);

 FUNC_0(VAR_1 && VAR_2->crtc);
 VAR_2->crtc = VAR_1;
 FUNC_2(&VAR_2->enc_spinlock, VAR_3);
}
