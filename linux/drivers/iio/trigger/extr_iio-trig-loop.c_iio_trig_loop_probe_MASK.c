
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iio_sw_trigger {TYPE_1__* trigger; } ;
struct iio_loop_info {struct iio_sw_trigger swt; } ;
struct TYPE_5__ {int * ops; } ;


 int VAR_0 ;
 struct iio_sw_trigger* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iio_sw_trigger*,char const*,int *) ;
 TYPE_1__* FUNC_2 (char*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct iio_loop_info*) ;
 int FUNC_6 (struct iio_loop_info*) ;
 struct iio_loop_info* FUNC_7 (int,int ) ;

__attribute__((used)) static struct iio_sw_trigger *FUNC_8(const char *VAR_4)
{
 struct iio_loop_info *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->swt.trigger = FUNC_2("%s", VAR_4);
 if (!VAR_5->swt.trigger) {
  VAR_6 = -VAR_0;
  goto err_free_trig_info;
 }

 FUNC_5(VAR_5->swt.trigger, VAR_5);
 VAR_5->swt.trigger->ops = &VAR_2;

 VAR_6 = FUNC_4(VAR_5->swt.trigger);
 if (VAR_6)
  goto err_free_trigger;

 FUNC_1(&VAR_5->swt, VAR_4, &VAR_3);

 return &VAR_5->swt;

err_free_trigger:
 FUNC_3(VAR_5->swt.trigger);
err_free_trig_info:
 FUNC_6(VAR_5);

 return FUNC_0(VAR_6);
}
