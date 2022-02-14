
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clk_si5341_synth {TYPE_1__* data; int index; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int freq_vco; int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int*,int*) ;
 struct clk_si5341_synth* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_si5341_synth *VAR_2 = FUNC_3(VAR_0);
 u64 VAR_3;
 u64 VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->data->regmap,
   FUNC_0(VAR_2->index), &VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;





 VAR_3 = VAR_2->data->freq_vco;
 VAR_3 *= VAR_5 >> 4;



 VAR_3 = FUNC_1(VAR_3, (VAR_4 >> 4));

 return VAR_3;
}
