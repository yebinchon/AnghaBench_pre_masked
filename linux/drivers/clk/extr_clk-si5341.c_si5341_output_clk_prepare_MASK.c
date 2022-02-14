
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_si5341_output {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_si5341_output*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct clk_si5341_output* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_si5341_output *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->data->regmap,
   FUNC_0(VAR_3),
   VAR_1, 0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_3->data->regmap,
   FUNC_0(VAR_3),
   VAR_0, VAR_0);
}
