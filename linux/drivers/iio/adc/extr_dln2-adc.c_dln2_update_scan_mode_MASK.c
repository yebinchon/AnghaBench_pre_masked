
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int num_channels; } ;
struct dln2_adc {int mutex; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct dln2_adc*,int,int) ;
 int FUNC_2 (struct dln2_adc*) ;
 struct dln2_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,unsigned long const*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_1,
     const unsigned long *VAR_2)
{
 struct dln2_adc *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_1->num_channels - 1;
 int VAR_5, VAR_6, VAR_7;

 FUNC_4(&VAR_3->mutex);

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  VAR_5 = FUNC_1(VAR_3, VAR_6,
      FUNC_6(VAR_6, VAR_2));
  if (VAR_5 < 0) {
   for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
    FUNC_1(VAR_3, VAR_7, 0);
   FUNC_5(&VAR_3->mutex);
   FUNC_0(&VAR_3->pdev->dev,
    "Unable to enable ADC channel %d\n", VAR_6);
   return -VAR_0;
  }
 }

 FUNC_2(VAR_3);

 FUNC_5(&VAR_3->mutex);

 return 0;
}
