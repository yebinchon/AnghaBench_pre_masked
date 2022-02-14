
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {int suspended; int lock; } ;
struct exynos_drm_crtc {int base; struct vidi_context* ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct exynos_drm_crtc *VAR_0)
{
 struct vidi_context *VAR_1 = VAR_0->ctx;

 FUNC_0(&VAR_0->base);

 FUNC_1(&VAR_1->lock);

 VAR_1->suspended = 1;

 FUNC_2(&VAR_1->lock);
}
