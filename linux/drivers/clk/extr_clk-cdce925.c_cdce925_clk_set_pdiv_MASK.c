
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct clk_cdce925_output {int index; TYPE_1__* chip; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct clk_cdce925_output *VAR_1, u16 VAR_2)
{
 switch (VAR_1->index) {
 case 0:
  FUNC_0(VAR_1->chip->regmap,
   VAR_0,
   0x03, (VAR_2 >> 8) & 0x03);
  FUNC_1(VAR_1->chip->regmap, 0x03, VAR_2 & 0xFF);
  break;
 case 1:
  FUNC_0(VAR_1->chip->regmap, 0x16, 0x7F, VAR_2);
  break;
 case 2:
  FUNC_0(VAR_1->chip->regmap, 0x17, 0x7F, VAR_2);
  break;
 case 3:
  FUNC_0(VAR_1->chip->regmap, 0x26, 0x7F, VAR_2);
  break;
 case 4:
  FUNC_0(VAR_1->chip->regmap, 0x27, 0x7F, VAR_2);
  break;
 case 5:
  FUNC_0(VAR_1->chip->regmap, 0x36, 0x7F, VAR_2);
  break;
 case 6:
  FUNC_0(VAR_1->chip->regmap, 0x37, 0x7F, VAR_2);
  break;
 case 7:
  FUNC_0(VAR_1->chip->regmap, 0x46, 0x7F, VAR_2);
  break;
 case 8:
  FUNC_0(VAR_1->chip->regmap, 0x47, 0x7F, VAR_2);
  break;
 }
}
