
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct device_node {int dummy; } ;
struct davinci_i2c_platform_data {int bus_freq; } ;
struct davinci_i2c_dev {TYPE_1__* dev; int clk; struct davinci_i2c_platform_data* pdata; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct davinci_i2c_dev*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_4(struct davinci_i2c_dev *VAR_3)
{
 struct davinci_i2c_platform_data *VAR_4 = VAR_3->pdata;
 u16 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10 = FUNC_0(VAR_3->clk);
 struct device_node *VAR_11 = VAR_3->dev->of_node;
 VAR_5 = (VAR_10 / 12000000) - 1;
 if ((VAR_10 / (VAR_5 + 1)) > 12000000)
  VAR_5++;
 VAR_7 = (VAR_5 >= 2) ? 5 : 7 - VAR_5;

 if (VAR_11 && FUNC_3(VAR_11, "ti,keystone-i2c"))
  VAR_7 = 6;

 VAR_6 = ((VAR_10 / (VAR_5 + 1)) / (VAR_4->bus_freq * 1000));

 if (VAR_10 / (VAR_5 + 1) / VAR_6 > VAR_4->bus_freq * 1000)
  VAR_6++;





 if (VAR_4->bus_freq > 100)
  VAR_9 = (VAR_6 << 1) / 3;
 else
  VAR_9 = (VAR_6 >> 1);
 if (VAR_6 > VAR_9 + VAR_7) {
  VAR_8 = VAR_6 - VAR_9 - VAR_7;
  VAR_9 -= VAR_7;
 } else {
  VAR_8 = 1;
  VAR_9 = VAR_6 - (VAR_7 << 1);
 }

 FUNC_1(VAR_3, VAR_2, VAR_5);
 FUNC_1(VAR_3, VAR_0, VAR_8);
 FUNC_1(VAR_3, VAR_1, VAR_9);

 FUNC_2(VAR_3->dev, "input_clock = %d, CLK = %d\n", VAR_10, VAR_6);
}
