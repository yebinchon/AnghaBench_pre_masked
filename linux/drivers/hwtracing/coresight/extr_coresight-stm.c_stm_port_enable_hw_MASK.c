
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {int stmspscr; int stmsper; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm_drvdata *VAR_3)
{
 FUNC_1(VAR_3->base);

 FUNC_2(0x10,
         VAR_3->base + VAR_2);
 FUNC_2(VAR_3->stmspscr, VAR_3->base + VAR_1);
 FUNC_2(VAR_3->stmsper, VAR_3->base + VAR_0);

 FUNC_0(VAR_3->base);
}
