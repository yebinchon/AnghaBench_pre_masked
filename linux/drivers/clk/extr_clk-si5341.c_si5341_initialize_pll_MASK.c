
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct clk_si5341 {int regmap; int pxtal; TYPE_1__* i2c_client; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct clk_si5341 *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->i2c_client->dev.of_node;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 if (FUNC_2(VAR_2, "silabs,pll-m-num", &VAR_3)) {
  FUNC_1(&VAR_1->i2c_client->dev,
   "PLL configuration requires silabs,pll-m-num\n");
 }
 if (FUNC_2(VAR_2, "silabs,pll-m-den", &VAR_4)) {
  FUNC_1(&VAR_1->i2c_client->dev,
   "PLL configuration requires silabs,pll-m-den\n");
 }

 if (!VAR_3 || !VAR_4) {
  FUNC_1(&VAR_1->i2c_client->dev,
   "PLL configuration invalid, assume 14GHz\n");
  VAR_4 = FUNC_0(VAR_1->pxtal) / 10;
  VAR_3 = 1400000000;
 }

 return FUNC_3(VAR_1->regmap,
   VAR_0, VAR_3, VAR_4);
}
