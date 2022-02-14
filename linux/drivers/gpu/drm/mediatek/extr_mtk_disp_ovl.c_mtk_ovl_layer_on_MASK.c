
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mtk_ddp_comp *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 FUNC_4(0x1, VAR_2->regs + FUNC_1(VAR_3));
 FUNC_4(VAR_1, VAR_2->regs + FUNC_2(VAR_3));

 VAR_4 = FUNC_3(VAR_2->regs + VAR_0);
 VAR_4 = VAR_4 | FUNC_0(VAR_3);
 FUNC_4(VAR_4, VAR_2->regs + VAR_0);
}
