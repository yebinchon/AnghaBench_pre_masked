
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct at91_adc_state {int trigger_number; int ** trig; TYPE_1__* trigger_list; int use_external; } ;
struct TYPE_2__ {scalar_t__ is_external; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct iio_dev*,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int) ;
 int ** FUNC_2 (int *,int,int,int ) ;
 struct at91_adc_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2)
{
 struct at91_adc_state *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5;

 VAR_3->trig = FUNC_2(&VAR_2->dev,
    VAR_3->trigger_number, sizeof(*VAR_3->trig),
    VAR_1);

 if (VAR_3->trig == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto error_ret;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->trigger_number; VAR_4++) {
  if (VAR_3->trigger_list[VAR_4].is_external && !(VAR_3->use_external))
   continue;

  VAR_3->trig[VAR_4] = FUNC_0(VAR_2,
       VAR_3->trigger_list + VAR_4);
  if (VAR_3->trig[VAR_4] == ((void*)0)) {
   FUNC_1(&VAR_2->dev,
    "Could not allocate trigger %d\n", VAR_4);
   VAR_5 = -VAR_0;
   goto error_trigger;
  }
 }

 return 0;

error_trigger:
 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  FUNC_5(VAR_3->trig[VAR_4]);
  FUNC_4(VAR_3->trig[VAR_4]);
 }
error_ret:
 return VAR_5;
}
