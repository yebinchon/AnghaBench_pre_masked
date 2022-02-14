
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_rdma {struct drm_crtc* crtc; } ;
struct mtk_ddp_comp {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_disp_rdma* FUNC_0 (struct mtk_ddp_comp*) ;
 int FUNC_1 (struct mtk_ddp_comp*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_2,
       struct drm_crtc *VAR_3)
{
 struct mtk_disp_rdma *VAR_4 = FUNC_0(VAR_2);

 VAR_4->crtc = VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_1,
    VAR_1);
}
