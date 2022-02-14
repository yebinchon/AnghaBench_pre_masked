
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z188_adc {int mem; int base; } ;
struct mcb_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct z188_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (struct mcb_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mcb_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);
 struct z188_adc *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2->base);
 FUNC_4(VAR_2->mem);
}
