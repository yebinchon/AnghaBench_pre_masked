
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct mtk_ddp_comp*,unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, unsigned int VAR_6,
     unsigned int VAR_7)
{
 FUNC_1(VAR_4 << 16 | VAR_5, VAR_3->regs + VAR_1);
 FUNC_1(VAR_2, VAR_3->regs + VAR_0);
 FUNC_0(VAR_3, VAR_7, VAR_0);
}
