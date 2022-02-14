
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_color {int dummy; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mtk_disp_color*) ;
 struct mtk_disp_color* FUNC_1 (struct mtk_ddp_comp*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_ddp_comp *VAR_3)
{
 struct mtk_disp_color *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_0 | VAR_1,
        VAR_3->regs + VAR_2);
 FUNC_2(0x1, VAR_3->regs + FUNC_0(VAR_4));
}
