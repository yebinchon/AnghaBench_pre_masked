
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int * setup_ops; int dev; } ;
struct at91_adc_state {TYPE_1__* selected_trig; } ;
struct TYPE_2__ {scalar_t__ hw_trig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct iio_dev*,int *,int *,int *) ;
 int VAR_2 ;
 struct at91_adc_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3)
{
 struct at91_adc_state *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->selected_trig->hw_trig) {
  return FUNC_0(&VAR_3->dev, VAR_3,
   &VAR_2,
   &VAR_0, &VAR_1);
 }




 VAR_3->setup_ops = &VAR_1;

 return 0;
}
