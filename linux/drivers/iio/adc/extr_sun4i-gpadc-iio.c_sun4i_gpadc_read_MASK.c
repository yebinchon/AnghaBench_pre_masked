
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_gpadc_iio {unsigned int fifo_data_irq; int adc_data; int temp_data; int mutex; int completion; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct sun4i_gpadc_iio* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct iio_dev*,int,unsigned int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_1, int VAR_2, int *VAR_3,
       unsigned int VAR_4)
{
 struct sun4i_gpadc_iio *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 FUNC_4(&VAR_5->mutex);

 VAR_6 = FUNC_8(VAR_1, VAR_2, VAR_4);
 if (VAR_6)
  goto err;

 FUNC_1(VAR_4);







 if (!FUNC_9(&VAR_5->completion,
      FUNC_3(1000))) {
  VAR_6 = -VAR_0;
  goto err;
 }

 if (VAR_4 == VAR_5->fifo_data_irq)
  *VAR_3 = VAR_5->adc_data;
 else
  *VAR_3 = VAR_5->temp_data;

 VAR_6 = 0;
 FUNC_6(VAR_1->dev.parent);

err:
 FUNC_7(VAR_1->dev.parent);
 FUNC_0(VAR_4);
 FUNC_5(&VAR_5->mutex);

 return VAR_6;
}
