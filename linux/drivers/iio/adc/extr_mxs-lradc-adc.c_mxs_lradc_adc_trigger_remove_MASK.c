
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_adc {int trig; } ;
struct iio_dev {int dummy; } ;


 struct mxs_lradc_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0)
{
 struct mxs_lradc_adc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->trig);
}
