
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iio_sw_trigger {TYPE_2__* trigger; } ;
struct TYPE_9__ {int function; } ;
struct iio_hrtimer_info {int sampling_frequency; int period; struct iio_sw_trigger swt; TYPE_6__ timer; } ;
struct TYPE_7__ {int groups; } ;
struct TYPE_8__ {TYPE_1__ dev; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_sw_trigger* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct iio_sw_trigger*,char const*,int *) ;
 TYPE_2__* FUNC_3 (char*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct iio_hrtimer_info*) ;
 int FUNC_7 (struct iio_hrtimer_info*) ;
 struct iio_hrtimer_info* FUNC_8 (int,int ) ;

__attribute__((used)) static struct iio_sw_trigger *FUNC_9(const char *VAR_10)
{
 struct iio_hrtimer_info *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->swt.trigger = FUNC_3("%s", VAR_10);
 if (!VAR_11->swt.trigger) {
  VAR_12 = -VAR_1;
  goto err_free_trig_info;
 }

 FUNC_6(VAR_11->swt.trigger, VAR_11);
 VAR_11->swt.trigger->ops = &VAR_8;
 VAR_11->swt.trigger->dev.groups = VAR_6;

 FUNC_1(&VAR_11->timer, VAR_0, VAR_4);
 VAR_11->timer.function = VAR_7;

 VAR_11->sampling_frequency = VAR_3;
 VAR_11->period = VAR_5 / VAR_11->sampling_frequency;

 VAR_12 = FUNC_5(VAR_11->swt.trigger);
 if (VAR_12)
  goto err_free_trigger;

 FUNC_2(&VAR_11->swt, VAR_10, &VAR_9);
 return &VAR_11->swt;
err_free_trigger:
 FUNC_4(VAR_11->swt.trigger);
err_free_trig_info:
 FUNC_7(VAR_11);

 return FUNC_0(VAR_12);
}
