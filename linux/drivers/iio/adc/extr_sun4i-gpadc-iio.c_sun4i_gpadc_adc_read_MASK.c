
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_gpadc_iio {int fifo_data_irq; } ;
struct iio_dev {int dummy; } ;


 struct sun4i_gpadc_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0, int VAR_1,
    int *VAR_2)
{
 struct sun4i_gpadc_iio *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->fifo_data_irq);
}
