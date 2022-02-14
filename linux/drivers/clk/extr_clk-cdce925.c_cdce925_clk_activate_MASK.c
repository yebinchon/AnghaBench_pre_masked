
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_cdce925_output {int index; TYPE_1__* chip; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct clk_cdce925_output *VAR_1)
{
 switch (VAR_1->index) {
 case 0:
  FUNC_0(VAR_1->chip->regmap,
   VAR_0, 0x0c, 0x0c);
  break;
 case 1:
 case 2:
  FUNC_0(VAR_1->chip->regmap, 0x14, 0x03, 0x03);
  break;
 case 3:
 case 4:
  FUNC_0(VAR_1->chip->regmap, 0x24, 0x03, 0x03);
  break;
 case 5:
 case 6:
  FUNC_0(VAR_1->chip->regmap, 0x34, 0x03, 0x03);
  break;
 case 7:
 case 8:
  FUNC_0(VAR_1->chip->regmap, 0x44, 0x03, 0x03);
  break;
 }
}
