
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_gpadc_iio {TYPE_1__* data; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int temp_scale; } ;


 struct sun4i_gpadc_iio* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0, int *VAR_1)
{
 struct sun4i_gpadc_iio *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->data->temp_scale;

 return 0;
}
