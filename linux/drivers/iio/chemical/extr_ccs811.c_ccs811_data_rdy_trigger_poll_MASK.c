
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ccs811_data {int drdy_trig; scalar_t__ drdy_trig_on; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct ccs811_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct ccs811_data *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->drdy_trig_on)
  FUNC_1(VAR_4->drdy_trig);

 return VAR_0;
}
