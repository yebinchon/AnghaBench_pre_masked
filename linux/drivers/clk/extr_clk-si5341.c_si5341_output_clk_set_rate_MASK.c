
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct clk_si5341_output*) ;
 int FUNC_2 (struct clk_si5341_output*) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct clk_si5341_output* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct clk_si5341_output *VAR_4 = FUNC_5(VAR_1);

 u32 VAR_5 = (VAR_3 / VAR_2) >> 1;
 int VAR_6;
 u8 VAR_7[3];

 if (VAR_5 <= 1)
  VAR_5 = 0;
 else if (VAR_5 >= FUNC_0(24))
  VAR_5 = FUNC_0(24) - 1;
 else
  --VAR_5;


 VAR_6 = FUNC_4(VAR_4->data->regmap,
   FUNC_1(VAR_4),
   VAR_0,
   (VAR_5 == 0) ? VAR_0 : 0);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_7[0] = VAR_5 ? (VAR_5 & 0xff) : 1;
 VAR_7[1] = (VAR_5 >> 8) & 0xff;
 VAR_7[2] = (VAR_5 >> 16) & 0xff;
 VAR_6 = FUNC_3(VAR_4->data->regmap,
   FUNC_2(VAR_4), VAR_7, 3);

 return 0;
}
