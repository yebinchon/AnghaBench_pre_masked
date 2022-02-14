
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mxs_i2c_dev {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct mxs_i2c_dev*,int) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct mxs_i2c_dev *VAR_0)
{
 uint32_t VAR_1;
 struct device *VAR_2 = VAR_0->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, "clock-frequency", &VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_2, "No I2C speed selected, using 100kHz\n");
  VAR_1 = 100000;
 }

 FUNC_1(VAR_0, VAR_1);

 return 0;
}
