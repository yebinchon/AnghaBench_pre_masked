
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4035_data {int drdy_trigger0; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iio_dev*) ;
 struct vcnl4035_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct vcnl4035_data*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct iio_dev *VAR_7 = VAR_6;
 struct vcnl4035_data *VAR_8 = FUNC_2(VAR_7);

 if (FUNC_5(VAR_8)) {
  FUNC_3(VAR_7, FUNC_0(VAR_2,
       0,
       VAR_1,
       VAR_0),
    FUNC_1(VAR_7));
  FUNC_4(VAR_8->drdy_trigger0);
  return VAR_3;
 }

 return VAR_4;
}
