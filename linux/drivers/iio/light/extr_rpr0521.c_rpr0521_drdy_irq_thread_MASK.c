
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpr0521_data {int drdy_trigger0; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpr0521_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rpr0521_data*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_3;
 struct rpr0521_data *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_5->drdy_trigger0);
  return VAR_0;
 }

 return VAR_1;
}
