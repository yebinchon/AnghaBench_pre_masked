
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_ovl {int * crtc; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 struct mtk_disp_ovl* FUNC_0 (struct mtk_ddp_comp*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_1)
{
 struct mtk_disp_ovl *VAR_2 = FUNC_0(VAR_1);

 VAR_2->crtc = ((void*)0);
 FUNC_1(0x0, VAR_1->regs + VAR_0);
}
