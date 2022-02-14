
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int base; } ;


 int FUNC_0 (struct tmc_drvdata*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tmc_drvdata *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->base);

 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0);
 return 0;
}
