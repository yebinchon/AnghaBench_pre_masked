
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si5341 {int regmap; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_si5341 *VAR_1)
{
 int VAR_2;
 u8 VAR_3[4];


 VAR_2 = FUNC_2(VAR_1->regmap, VAR_0,
   VAR_3, FUNC_0(VAR_3));
 if (VAR_2 < 0)
  return VAR_2;

 return !!FUNC_1(VAR_3);
}
