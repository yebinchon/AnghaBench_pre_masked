
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int trig; int cb_buffer; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct lmp91000_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct lmp91000_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);

 FUNC_2(VAR_2->cb_buffer);
 FUNC_1(VAR_2->cb_buffer);

 FUNC_6(VAR_1);
 FUNC_5(VAR_2->trig);

 return 0;
}
