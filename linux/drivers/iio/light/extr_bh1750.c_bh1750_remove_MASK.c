
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct bh1750_data {int lock; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct bh1750_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_1);
 struct bh1750_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_4(&VAR_3->lock);
 FUNC_1(VAR_1, VAR_0);
 FUNC_5(&VAR_3->lock);

 return 0;
}
