
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_ddp_comp*,unsigned int,int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        unsigned int VAR_6)
{
 FUNC_1(VAR_4 << 16 | VAR_3, VAR_2->regs + VAR_1);
 FUNC_0(VAR_2, VAR_6, VAR_0);
}
