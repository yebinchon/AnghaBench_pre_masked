
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int trig; } ;
struct at91_adc_state {int done; int wq_data_avail; int chnb; int last_value; } ;


 int FUNC_0 (struct at91_adc_state*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct at91_adc_state*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(int VAR_1, struct iio_dev *VAR_2)
{
 struct at91_adc_state *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_3(VAR_2)) {
  FUNC_2(VAR_1);
  FUNC_5(VAR_2->trig);
 } else {
  VAR_3->last_value = FUNC_1(VAR_3, FUNC_0(VAR_3, VAR_3->chnb));

  FUNC_1(VAR_3, VAR_0);
  VAR_3->done = 1;
  FUNC_6(&VAR_3->wq_data_avail);
 }
}
