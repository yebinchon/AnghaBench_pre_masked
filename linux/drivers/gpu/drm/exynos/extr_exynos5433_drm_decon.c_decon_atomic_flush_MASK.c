
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int vblank_lock; int frame_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct decon_context*,int) ;
 int FUNC_1 (struct decon_context*,int ,int ,int ) ;
 int FUNC_2 (struct decon_context*,int) ;
 int FUNC_3 (struct exynos_drm_crtc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct exynos_drm_crtc *VAR_2)
{
 struct decon_context *VAR_3 = VAR_2->ctx;
 unsigned long VAR_4;

 FUNC_4(&VAR_3->vblank_lock, VAR_4);

 FUNC_2(VAR_3, 0);

 FUNC_1(VAR_3, VAR_0, VAR_1, ~0);

 VAR_3->frame_id = FUNC_0(VAR_3, 1);

 FUNC_3(VAR_2);

 FUNC_5(&VAR_3->vblank_lock, VAR_4);
}
