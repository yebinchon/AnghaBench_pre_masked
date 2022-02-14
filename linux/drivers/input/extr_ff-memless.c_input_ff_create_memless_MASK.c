
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ml_device {int (* play_effect ) (struct input_dev*,void*,struct ff_effect*) ;int gain; TYPE_1__* states; int timer; void* private; struct input_dev* dev; } ;
struct input_dev {int ffbit; struct ff_device* ff; } ;
struct ff_device {int * effects; int ffbit; int destroy; int set_gain; int playback; int upload; struct ml_device* private; } ;
struct TYPE_2__ {int * effect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct input_dev*,int) ;
 int FUNC_1 (struct ml_device*) ;
 struct ml_device* FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct input_dev *VAR_14, void *VAR_15,
  int (*VAR_16)(struct input_dev *, void *, struct ff_effect *))
{
 struct ml_device *VAR_17;
 struct ff_device *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = FUNC_2(sizeof(struct ml_device), VAR_8);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->dev = VAR_14;
 VAR_17->private = VAR_15;
 VAR_17->play_effect = VAR_16;
 VAR_17->gain = 0xffff;
 FUNC_5(&VAR_17->timer, VAR_9, 0);

 FUNC_3(VAR_1, VAR_14->ffbit);

 VAR_19 = FUNC_0(VAR_14, VAR_2);
 if (VAR_19) {
  FUNC_1(VAR_17);
  return VAR_19;
 }

 VAR_18 = VAR_14->ff;
 VAR_18->private = VAR_17;
 VAR_18->upload = VAR_13;
 VAR_18->playback = VAR_11;
 VAR_18->set_gain = VAR_12;
 VAR_18->destroy = VAR_10;


 if (FUNC_4(VAR_4, VAR_18->ffbit)) {
  FUNC_3(VAR_3, VAR_14->ffbit);
  FUNC_3(VAR_5, VAR_14->ffbit);
  FUNC_3(VAR_7, VAR_14->ffbit);
  FUNC_3(VAR_6, VAR_14->ffbit);
 }

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
  VAR_17->states[VAR_20].effect = &VAR_18->effects[VAR_20];

 return 0;
}
