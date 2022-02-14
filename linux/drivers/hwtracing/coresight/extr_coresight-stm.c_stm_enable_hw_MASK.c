
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {int traceid; scalar_t__ base; scalar_t__ stmheer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct stm_drvdata*) ;
 int FUNC_3 (struct stm_drvdata*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct stm_drvdata *VAR_2)
{
 if (VAR_2->stmheer)
  FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 FUNC_1(VAR_2->base);


 FUNC_4(0xFFF, VAR_2->base + VAR_0);
 FUNC_4((VAR_2->traceid << 16 |
   0x02 |
   0x01),
   VAR_2->base + VAR_1);

 FUNC_0(VAR_2->base);
}
