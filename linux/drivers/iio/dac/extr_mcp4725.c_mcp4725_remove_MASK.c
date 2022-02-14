
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp4725_data {scalar_t__ vdd_reg; scalar_t__ vref_reg; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct mcp4725_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct mcp4725_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 if (VAR_2->vref_reg)
  FUNC_3(VAR_2->vref_reg);
 FUNC_3(VAR_2->vdd_reg);

 return 0;
}
