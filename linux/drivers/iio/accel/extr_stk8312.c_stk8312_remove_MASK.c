
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk8312_data {scalar_t__ dready_trig; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct stk8312_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct stk8312_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_1);
 struct stk8312_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);

 if (VAR_3->dready_trig)
  FUNC_3(VAR_3->dready_trig);

 return FUNC_5(VAR_3, VAR_0);
}
