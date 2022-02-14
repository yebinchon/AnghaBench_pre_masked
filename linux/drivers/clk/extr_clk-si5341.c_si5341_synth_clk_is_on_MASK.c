
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct clk_si5341_synth {TYPE_1__* data; int index; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 struct clk_si5341_synth* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
{
 struct clk_si5341_synth *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 u32 VAR_6;
 u8 VAR_7 = VAR_4->index;

 VAR_5 = FUNC_1(VAR_4->data->regmap,
   VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return 0;

 if (!(VAR_6 & FUNC_0(VAR_7)))
  return 0;

 VAR_5 = FUNC_1(VAR_4->data->regmap, VAR_2, &VAR_6);
 if (VAR_5 < 0)
  return 0;

 if (!(VAR_6 & FUNC_0(VAR_7)))
  return 0;


 VAR_5 = FUNC_1(VAR_4->data->regmap, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return 0;

 return !(VAR_6 & FUNC_0(VAR_7));
}
