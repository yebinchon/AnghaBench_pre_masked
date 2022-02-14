
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0->regs + VAR_1);

 VAR_4 = (VAR_4 & ~VAR_2) | (VAR_3 & VAR_2);
 FUNC_1(VAR_4, VAR_0->regs + VAR_1);
}
