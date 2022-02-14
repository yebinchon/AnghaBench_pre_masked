
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int enc_spinlock; scalar_t__ crtc; } ;
struct dpu_encoder_phys {int vsync_cnt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct dpu_encoder_virt* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_0,
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_encoder_virt *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 if (!VAR_0 || !VAR_1)
  return;

 FUNC_0("encoder_vblank_callback");
 VAR_2 = FUNC_6(VAR_0);

 FUNC_4(&VAR_2->enc_spinlock, VAR_3);
 if (VAR_2->crtc)
  FUNC_3(VAR_2->crtc);
 FUNC_5(&VAR_2->enc_spinlock, VAR_3);

 FUNC_2(&VAR_1->vsync_cnt);
 FUNC_1("encoder_vblank_callback");
}
