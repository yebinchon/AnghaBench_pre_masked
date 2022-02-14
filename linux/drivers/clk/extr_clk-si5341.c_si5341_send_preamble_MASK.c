
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_si5341 {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_1 ;
 int FUNC_4 (struct clk_si5341*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_si5341 *VAR_2)
{
 int VAR_3;
 u32 VAR_4;


 VAR_3 = FUNC_2(VAR_2->regmap, VAR_0, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_3(VAR_2->regmap, 0xB24, VAR_4 < 2 ? 0xD8 : 0xC0);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_4(VAR_2,
  VAR_1, FUNC_0(VAR_1));
 if (VAR_3 < 0)
  return VAR_3;


 FUNC_1(300);

 return 0;
}
