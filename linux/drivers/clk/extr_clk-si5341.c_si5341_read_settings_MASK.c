
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct clk_si5341 {size_t num_synth; size_t num_outputs; int * reg_rdiv_offset; int regmap; int * reg_output_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,size_t*,int) ;

__attribute__((used)) static int FUNC_2(struct clk_si5341 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 u8 VAR_6[10];

 VAR_4 = FUNC_1(VAR_3->regmap, VAR_0, VAR_6, 10);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->regmap,
    VAR_2, VAR_6, 3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->regmap,
    VAR_1, VAR_6, 1);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_synth; ++VAR_5) {
  VAR_4 = FUNC_1(VAR_3->regmap,
     FUNC_0(VAR_5), VAR_6, 10);
  if (VAR_4 < 0)
   return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_outputs; ++VAR_5) {
  VAR_4 = FUNC_1(VAR_3->regmap,
     VAR_3->reg_output_offset[VAR_5], VAR_6, 4);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_1(VAR_3->regmap,
     VAR_3->reg_rdiv_offset[VAR_5], VAR_6, 3);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
