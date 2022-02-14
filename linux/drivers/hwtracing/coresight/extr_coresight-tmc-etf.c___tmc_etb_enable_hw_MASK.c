
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int trigger_cntr; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct tmc_drvdata*) ;
 int FUNC_3 (struct tmc_drvdata*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tmc_drvdata *VAR_9)
{
 FUNC_1(VAR_9->base);


 FUNC_3(VAR_9);

 FUNC_4(VAR_7, VAR_9->base + VAR_6);
 FUNC_4(VAR_1 | VAR_2 |
         VAR_3 | VAR_4 |
         VAR_5,
         VAR_9->base + VAR_0);

 FUNC_4(VAR_9->trigger_cntr, VAR_9->base + VAR_8);
 FUNC_2(VAR_9);

 FUNC_0(VAR_9->base);
}
