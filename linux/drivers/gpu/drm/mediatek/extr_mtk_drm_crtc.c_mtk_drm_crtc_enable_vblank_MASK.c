
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_crtc {int base; struct mtk_ddp_comp** ddp_comp; } ;
struct mtk_ddp_comp {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct mtk_ddp_comp*,int *) ;
 struct mtk_drm_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0)
{
 struct mtk_drm_crtc *VAR_1 = FUNC_1(VAR_0);
 struct mtk_ddp_comp *VAR_2 = VAR_1->ddp_comp[0];

 FUNC_0(VAR_2, &VAR_1->base);

 return 0;
}
