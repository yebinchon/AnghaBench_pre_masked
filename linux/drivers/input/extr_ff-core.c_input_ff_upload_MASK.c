
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int event_lock; int dev; int ffbit; int evbit; struct ff_device* ff; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ waveform; } ;
struct TYPE_4__ {TYPE_1__ periodic; } ;
struct ff_effect {scalar_t__ type; int id; TYPE_2__ u; } ;
struct ff_device {int max_effects; int (* upload ) (struct input_dev*,struct ff_effect*,struct ff_effect*) ;int mutex; struct file** effect_owners; struct ff_effect* effects; int ffbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ff_device*,int,struct file*) ;
 int FUNC_1 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_2 (struct ff_device*,struct ff_effect*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct input_dev*,struct ff_effect*,struct ff_effect*) ;
 int FUNC_9 (scalar_t__,int ) ;

int FUNC_10(struct input_dev *VAR_9, struct ff_effect *VAR_10,
      struct file *VAR_11)
{
 struct ff_device *VAR_12 = VAR_9->ff;
 struct ff_effect *VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (!FUNC_9(VAR_3, VAR_9->evbit))
  return -VAR_2;

 if (VAR_10->type < VAR_5 || VAR_10->type > VAR_4 ||
     !FUNC_9(VAR_10->type, VAR_9->ffbit)) {
  FUNC_3(&VAR_9->dev, "invalid or not supported effect type in upload\n");
  return -VAR_0;
 }

 if (VAR_10->type == VAR_6 &&
     (VAR_10->u.periodic.waveform < VAR_8 ||
      VAR_10->u.periodic.waveform > VAR_7 ||
      !FUNC_9(VAR_10->u.periodic.waveform, VAR_9->ffbit))) {
  FUNC_3(&VAR_9->dev, "invalid or not supported wave form in upload\n");
  return -VAR_0;
 }

 if (!FUNC_9(VAR_10->type, VAR_12->ffbit)) {
  VAR_14 = FUNC_2(VAR_12, VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_4(&VAR_12->mutex);

 if (VAR_10->id == -1) {
  for (VAR_15 = 0; VAR_15 < VAR_12->max_effects; VAR_15++)
   if (!VAR_12->effect_owners[VAR_15])
    break;

  if (VAR_15 >= VAR_12->max_effects) {
   VAR_14 = -VAR_1;
   goto out;
  }

  VAR_10->id = VAR_15;
  VAR_13 = ((void*)0);

 } else {
  VAR_15 = VAR_10->id;

  VAR_14 = FUNC_0(VAR_12, VAR_15, VAR_11);
  if (VAR_14)
   goto out;

  VAR_13 = &VAR_12->effects[VAR_15];

  if (!FUNC_1(VAR_10, VAR_13)) {
   VAR_14 = -VAR_0;
   goto out;
  }
 }

 VAR_14 = VAR_12->upload(VAR_9, VAR_10, VAR_13);
 if (VAR_14)
  goto out;

 FUNC_6(&VAR_9->event_lock);
 VAR_12->effects[VAR_15] = *VAR_10;
 VAR_12->effect_owners[VAR_15] = VAR_11;
 FUNC_7(&VAR_9->event_lock);

 out:
 FUNC_5(&VAR_12->mutex);
 return VAR_14;
}
