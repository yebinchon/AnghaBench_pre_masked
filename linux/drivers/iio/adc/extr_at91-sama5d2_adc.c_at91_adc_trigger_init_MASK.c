
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct at91_adc_state {int trig; TYPE_1__* selected_trig; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*,int ) ;
 int FUNC_3 (int *,char*) ;
 struct at91_adc_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0)
{
 struct at91_adc_state *VAR_1 = FUNC_4(VAR_0);

 VAR_1->trig = FUNC_2(VAR_0, VAR_1->selected_trig->name);
 if (FUNC_0(VAR_1->trig)) {
  FUNC_3(&VAR_0->dev,
   "could not allocate trigger\n");
  return FUNC_1(VAR_1->trig);
 }

 return 0;
}
