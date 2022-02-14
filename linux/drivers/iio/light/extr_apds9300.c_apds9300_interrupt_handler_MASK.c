
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct apds9300_data {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct apds9300_data*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct apds9300_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct iio_dev *VAR_6 = VAR_5;
 struct apds9300_data *VAR_7 = FUNC_3(VAR_6);

 FUNC_4(VAR_6,
         FUNC_0(VAR_2, 0,
         VAR_1,
         VAR_0),
         FUNC_2(VAR_6));

 FUNC_1(VAR_7);

 return VAR_3;
}
