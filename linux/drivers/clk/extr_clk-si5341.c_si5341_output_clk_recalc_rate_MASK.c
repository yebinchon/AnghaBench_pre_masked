
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct clk_si5341_output {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_si5341_output*) ;
 int FUNC_1 (struct clk_si5341_output*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*) ;
 struct clk_si5341_output* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct clk_si5341_output *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u8 VAR_7[3];

 VAR_4 = FUNC_2(VAR_3->data->regmap,
   FUNC_1(VAR_3), VAR_7, 3);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_6 = VAR_7[2] << 16 | VAR_7[1] << 8 | VAR_7[0];


 if (!VAR_6)
  return 0;


 VAR_6 += 1;
 VAR_6 <<= 1;

 VAR_4 = FUNC_3(VAR_3->data->regmap,
   FUNC_0(VAR_3), &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_5 & VAR_0)
  VAR_6 = 2;

 return VAR_2 / VAR_6;
}
