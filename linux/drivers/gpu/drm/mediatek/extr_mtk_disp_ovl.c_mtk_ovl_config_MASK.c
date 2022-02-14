
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_ddp_comp *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5, unsigned int VAR_6,
      unsigned int VAR_7)
{
 if (VAR_4 != 0 && VAR_5 != 0)
  FUNC_1(VAR_5 << 16 | VAR_4, VAR_3->regs + VAR_1);
 FUNC_1(0x0, VAR_3->regs + VAR_0);

 FUNC_0(0x1, VAR_3->regs + VAR_2);
 FUNC_0(0x0, VAR_3->regs + VAR_2);
}
