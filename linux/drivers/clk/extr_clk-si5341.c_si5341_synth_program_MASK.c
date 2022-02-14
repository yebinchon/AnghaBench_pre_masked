
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct clk_si5341_synth {TYPE_1__* data; int index; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_si5341_synth *VAR_1,
 u64 VAR_2, u32 VAR_3, bool VAR_4)
{
 int VAR_5;
 u8 VAR_6 = VAR_1->index;

 VAR_5 = FUNC_5(VAR_1->data->regmap,
   FUNC_1(VAR_6), VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_1->data->regmap,
  VAR_0, FUNC_0(VAR_6), VAR_4 ? FUNC_0(VAR_6) : 0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_4(VAR_1->data->regmap,
  FUNC_2(VAR_6), 0x01);
}
