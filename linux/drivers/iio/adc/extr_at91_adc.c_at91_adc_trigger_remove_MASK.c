
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct at91_adc_state {int trigger_number; int * trig; } ;


 struct at91_adc_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_0)
{
 struct at91_adc_state *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->trigger_number; VAR_2++) {
  FUNC_2(VAR_1->trig[VAR_2]);
  FUNC_1(VAR_1->trig[VAR_2]);
 }
}
