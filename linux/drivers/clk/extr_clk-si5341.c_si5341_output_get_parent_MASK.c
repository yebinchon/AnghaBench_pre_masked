
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


 int FUNC_0 (struct clk_si5341_output*) ;
 int FUNC_1 (int ,int ,int*) ;
 struct clk_si5341_output* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_si5341_output *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_1->data->regmap,
   FUNC_0(VAR_1), &VAR_3);

 return VAR_3 & 0x7;
}
