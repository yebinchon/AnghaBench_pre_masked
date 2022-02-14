
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si5341_reg_default {int value; int address; } ;
struct clk_si5341 {TYPE_1__* i2c_client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_si5341 *VAR_0,
 const struct si5341_reg_default *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_4 = FUNC_1(VAR_0->regmap,
   VAR_1[VAR_3].address, VAR_1[VAR_3].value);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_0->i2c_client->dev,
    "Failed to write %#x:%#x\n",
    VAR_1[VAR_3].address, VAR_1[VAR_3].value);
   return VAR_4;
  }
 }

 return 0;
}
