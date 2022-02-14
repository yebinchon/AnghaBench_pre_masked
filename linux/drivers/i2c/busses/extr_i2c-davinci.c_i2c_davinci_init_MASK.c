
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_i2c_platform_data {int bus_delay; int bus_freq; } ;
struct davinci_i2c_dev {int dev; struct davinci_i2c_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ) ;
 int FUNC_1 (struct davinci_i2c_dev*,int) ;
 int FUNC_2 (struct davinci_i2c_dev*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct davinci_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct davinci_i2c_dev *VAR_7)
{
 struct davinci_i2c_platform_data *VAR_8 = VAR_7->pdata;


 FUNC_1(VAR_7, 0);


 FUNC_4(VAR_7);




 FUNC_2(VAR_7, VAR_3, VAR_4);

 FUNC_3(VAR_7->dev, "PSC  = %d\n",
  FUNC_0(VAR_7, VAR_5));
 FUNC_3(VAR_7->dev, "CLKL = %d\n",
  FUNC_0(VAR_7, VAR_1));
 FUNC_3(VAR_7->dev, "CLKH = %d\n",
  FUNC_0(VAR_7, VAR_0));
 FUNC_3(VAR_7->dev, "bus_freq = %dkHz, bus_delay = %d\n",
  VAR_8->bus_freq, VAR_8->bus_delay);



 FUNC_1(VAR_7, 1);


 FUNC_2(VAR_7, VAR_2, VAR_6);

 return 0;
}
