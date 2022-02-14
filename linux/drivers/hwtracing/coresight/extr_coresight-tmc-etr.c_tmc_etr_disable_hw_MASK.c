
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int * etr_buf; int base; } ;


 int FUNC_0 (struct tmc_drvdata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tmc_drvdata*) ;

__attribute__((used)) static void FUNC_3(struct tmc_drvdata *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->base);

 VAR_0->etr_buf = ((void*)0);
}
