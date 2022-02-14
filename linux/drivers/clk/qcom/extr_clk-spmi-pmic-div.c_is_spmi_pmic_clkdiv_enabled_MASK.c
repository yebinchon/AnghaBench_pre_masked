
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct clkdiv *VAR_2)
{
 unsigned int VAR_3 = 0;

 FUNC_0(VAR_2->regmap, VAR_2->base + VAR_0, &VAR_3);

 return VAR_3 & VAR_1;
}
