
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_trigger {TYPE_2__* ops; } ;
struct iio_dev {scalar_t__ currentmode; int modes; int pollfunc_event; struct iio_trigger* trig; TYPE_1__* info; int mlock; scalar_t__ trig_readonly; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int (* validate_device ) (struct iio_trigger*,struct iio_dev*) ;} ;
struct TYPE_3__ {int (* validate_trigger ) (struct iio_dev*,struct iio_trigger*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct iio_trigger* FUNC_1 (char const*) ;
 int FUNC_2 (struct iio_trigger*,int ) ;
 int FUNC_3 (struct iio_trigger*,int ) ;
 int FUNC_4 (struct iio_trigger*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iio_dev*,struct iio_trigger*) ;
 int FUNC_8 (struct iio_trigger*,struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6,
      size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_0(VAR_4);
 struct iio_trigger *VAR_9 = VAR_8->trig;
 struct iio_trigger *VAR_10;
 int VAR_11;

 FUNC_5(&VAR_8->mlock);
 if (VAR_8->currentmode == VAR_2) {
  FUNC_6(&VAR_8->mlock);
  return -VAR_0;
 }
 if (VAR_8->trig_readonly) {
  FUNC_6(&VAR_8->mlock);
  return -VAR_1;
 }
 FUNC_6(&VAR_8->mlock);

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_9 == VAR_10) {
  VAR_11 = VAR_7;
  goto out_trigger_put;
 }

 if (VAR_10 && VAR_8->info->validate_trigger) {
  VAR_11 = VAR_8->info->validate_trigger(VAR_8, VAR_10);
  if (VAR_11)
   goto out_trigger_put;
 }

 if (VAR_10 && VAR_10->ops && VAR_10->ops->validate_device) {
  VAR_11 = VAR_10->ops->validate_device(VAR_10, VAR_8);
  if (VAR_11)
   goto out_trigger_put;
 }

 VAR_8->trig = VAR_10;

 if (VAR_9) {
  if (VAR_8->modes & VAR_3)
   FUNC_3(VAR_9,
           VAR_8->pollfunc_event);
  FUNC_4(VAR_9);
 }
 if (VAR_8->trig) {
  if (VAR_8->modes & VAR_3)
   FUNC_2(VAR_8->trig,
           VAR_8->pollfunc_event);
 }

 return VAR_7;

out_trigger_put:
 if (VAR_10)
  FUNC_4(VAR_10);
 return VAR_11;
}
