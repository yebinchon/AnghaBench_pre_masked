
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_drvdata {scalar_t__ stmheer; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct stm_drvdata*) ;
 int FUNC_4 (struct stm_drvdata*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct stm_drvdata *VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_1->base);

 VAR_2 = FUNC_2(VAR_1->base + VAR_0);
 VAR_2 &= ~0x1;
 FUNC_5(VAR_2, VAR_1->base + VAR_0);

 FUNC_0(VAR_1->base);

 FUNC_4(VAR_1);
 if (VAR_1->stmheer)
  FUNC_3(VAR_1);
}
