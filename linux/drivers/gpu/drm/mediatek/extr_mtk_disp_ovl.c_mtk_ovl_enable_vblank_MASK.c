
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_ovl {struct drm_crtc* crtc; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mtk_disp_ovl* FUNC_0 (struct mtk_ddp_comp*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_ddp_comp *VAR_3,
      struct drm_crtc *VAR_4)
{
 struct mtk_disp_ovl *VAR_5 = FUNC_0(VAR_3);

 VAR_5->crtc = VAR_4;
 FUNC_1(0x0, VAR_3->regs + VAR_1);
 FUNC_2(VAR_2, VAR_3->regs + VAR_0);
}
