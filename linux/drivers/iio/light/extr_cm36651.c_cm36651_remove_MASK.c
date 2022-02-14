
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int irq; } ;
struct cm36651_data {int ara_client; int ps_client; int vled_reg; } ;


 int FUNC_0 (int ,struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct cm36651_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct cm36651_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 FUNC_5(VAR_2->vled_reg);
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_2(VAR_2->ps_client);
 FUNC_2(VAR_2->ara_client);

 return 0;
}
