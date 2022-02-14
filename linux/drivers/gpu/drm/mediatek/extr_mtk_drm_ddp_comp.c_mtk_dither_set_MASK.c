
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_6 (int,scalar_t__) ;

void FUNC_7(struct mtk_ddp_comp *VAR_8, unsigned int VAR_9,
      unsigned int VAR_10)
{

 if (VAR_9 == 0)
  return;

 if (VAR_9 >= VAR_7) {
  FUNC_6(0, VAR_8->regs + VAR_3);
  FUNC_6(0, VAR_8->regs + VAR_4);
  FUNC_6(FUNC_5(VAR_6 - VAR_9) |
         FUNC_2(VAR_6 - VAR_9) |
         VAR_5,
         VAR_8->regs + VAR_1);
  FUNC_6(FUNC_3(VAR_6 - VAR_9) |
         FUNC_0(VAR_6 - VAR_9) |
         FUNC_4(VAR_6 - VAR_9) |
         FUNC_1(VAR_6 - VAR_9),
         VAR_8->regs + VAR_2);
  FUNC_6(VAR_0, VAR_8->regs + VAR_10);
 }
}
