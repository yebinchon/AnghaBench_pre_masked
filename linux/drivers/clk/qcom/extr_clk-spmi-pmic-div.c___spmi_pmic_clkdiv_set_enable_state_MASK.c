
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {unsigned int cxo_period_ns; scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct clkdiv *VAR_2, bool VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = VAR_2->cxo_period_ns;
 unsigned int VAR_7 = FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_2->regmap, VAR_2->base + VAR_0,
     VAR_1, VAR_3 ? VAR_1 : 0);
 if (VAR_5)
  return VAR_5;

 if (VAR_3)
  FUNC_1((2 + 3 * VAR_7) * VAR_6);
 else
  FUNC_1(3 * VAR_7 * VAR_6);

 return 0;
}
