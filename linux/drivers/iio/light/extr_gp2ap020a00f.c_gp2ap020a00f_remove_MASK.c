
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct i2c_client {int irq; } ;
struct gp2ap020a00f_data {int vled_reg; int trig; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct iio_dev*) ;
 int FUNC_2 (struct gp2ap020a00f_data*,int ) ;
 struct iio_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct gp2ap020a00f_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_3(VAR_1);
 struct gp2ap020a00f_data *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3,
     VAR_0);
 if (VAR_4 < 0)
  FUNC_0(&VAR_2->dev, "Failed to power off the device.\n");

 FUNC_4(VAR_2);
 FUNC_6(VAR_3->trig);
 FUNC_1(VAR_1->irq, VAR_2);
 FUNC_7(VAR_2);
 FUNC_8(VAR_3->vled_reg);

 return 0;
}
