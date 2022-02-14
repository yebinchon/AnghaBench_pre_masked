
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {scalar_t__ base; int regmap; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct clkdiv*,int,unsigned int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct clkdiv *VAR_2, bool VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(VAR_2->regmap, VAR_2->base + VAR_1, &VAR_4);
 VAR_4 &= VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
