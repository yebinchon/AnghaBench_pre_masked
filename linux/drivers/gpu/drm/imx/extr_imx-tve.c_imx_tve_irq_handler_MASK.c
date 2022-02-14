
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_tve {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct imx_tve *VAR_4 = VAR_3;
 unsigned int VAR_5;

 FUNC_0(VAR_4->regmap, VAR_1, &VAR_5);


 FUNC_1(VAR_4->regmap, VAR_1, 0xffffffff);

 return VAR_0;
}
