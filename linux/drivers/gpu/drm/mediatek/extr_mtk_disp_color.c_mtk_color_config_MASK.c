
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_color {int dummy; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (struct mtk_disp_color*) ;
 scalar_t__ FUNC_1 (struct mtk_disp_color*) ;
 struct mtk_disp_color* FUNC_2 (struct mtk_ddp_comp*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mtk_ddp_comp *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct mtk_disp_color *VAR_5 = FUNC_2(VAR_0);

 FUNC_3(VAR_1, VAR_0->regs + FUNC_1(VAR_5));
 FUNC_3(VAR_2, VAR_0->regs + FUNC_0(VAR_5));
}
