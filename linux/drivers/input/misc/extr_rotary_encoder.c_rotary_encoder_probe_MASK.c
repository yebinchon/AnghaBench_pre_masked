
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct rotary_encoder {int steps; int axis; int * irq; TYPE_3__* gpios; void* last_stable; void* relative_axis; struct input_dev* input; int encoding; void* rollover; int access_mutex; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_6__ {int bustype; } ;
struct input_dev {TYPE_2__ dev; TYPE_1__ id; int name; } ;
typedef int * irq_handler_t ;
struct TYPE_8__ {int ndescs; int * desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,void*) ;
 int FUNC_5 (struct device*,char*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,int*) ;
 TYPE_3__* FUNC_9 (struct device*,int *,int ) ;
 struct input_dev* FUNC_10 (struct device*) ;
 int * FUNC_11 (struct device*,int,int,int ) ;
 struct rotary_encoder* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,int *,int *,int,int ,struct rotary_encoder*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,int,int ,int,int ,int) ;
 int FUNC_17 (struct input_dev*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,struct rotary_encoder*) ;
 void* FUNC_20 (struct rotary_encoder*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct rotary_encoder *VAR_18;
 struct input_dev *VAR_19;
 irq_handler_t VAR_20;
 u32 VAR_21;
 unsigned int VAR_22;
 int VAR_23;

 VAR_18 = FUNC_12(VAR_17, sizeof(struct rotary_encoder), VAR_6);
 if (!VAR_18)
  return -VAR_3;

 FUNC_18(&VAR_18->access_mutex);

 FUNC_8(VAR_17, "rotary-encoder,steps", &VAR_18->steps);

 VAR_23 = FUNC_8(VAR_17, "rotary-encoder,steps-per-period",
           &VAR_21);
 if (VAR_23) {







  VAR_21 = FUNC_7(VAR_17,
     "rotary-encoder,half-period") ? 2 : 1;
 }

 VAR_18->rollover =
  FUNC_7(VAR_17, "rotary-encoder,rollover");

 if (!FUNC_6(VAR_17, "rotary-encoder,encoding") ||
     !FUNC_5(VAR_17, "rotary-encoder,encoding",
       "gray")) {
  FUNC_3(VAR_17, "gray");
  VAR_18->encoding = VAR_12;
 } else if (!FUNC_5(VAR_17, "rotary-encoder,encoding",
       "binary")) {
  FUNC_3(VAR_17, "binary");
  VAR_18->encoding = VAR_11;
 } else {
  FUNC_2(VAR_17, "unknown encoding setting\n");
  return -VAR_2;
 }

 FUNC_8(VAR_17, "linux,axis", &VAR_18->axis);
 VAR_18->relative_axis =
  FUNC_7(VAR_17, "rotary-encoder,relative-axis");

 VAR_18->gpios = FUNC_9(VAR_17, ((void*)0), VAR_7);
 if (FUNC_0(VAR_18->gpios)) {
  VAR_23 = FUNC_1(VAR_18->gpios);
  if (VAR_23 != -VAR_4)
   FUNC_2(VAR_17, "unable to get gpios: %d\n", VAR_23);
  return VAR_23;
 }
 if (VAR_18->gpios->ndescs < 2) {
  FUNC_2(VAR_17, "not enough gpios found\n");
  return -VAR_2;
 }

 VAR_19 = FUNC_10(VAR_17);
 if (!VAR_19)
  return -VAR_3;

 VAR_18->input = VAR_19;

 VAR_19->name = VAR_16->name;
 VAR_19->id.bustype = VAR_0;
 VAR_19->dev.parent = VAR_17;

 if (VAR_18->relative_axis)
  FUNC_17(VAR_19, VAR_5, VAR_18->axis);
 else
  FUNC_16(VAR_19,
         VAR_18->axis, 0, VAR_18->steps, 0, 1);

 switch (VAR_21 >> (VAR_18->gpios->ndescs - 2)) {
 case 4:
  VAR_20 = &VAR_15;
  VAR_18->last_stable = FUNC_20(VAR_18);
  break;
 case 2:
  VAR_20 = &VAR_13;
  VAR_18->last_stable = FUNC_20(VAR_18);
  break;
 case 1:
  VAR_20 = &VAR_14;
  break;
 default:
  FUNC_2(VAR_17, "'%d' is not a valid steps-per-period value\n",
   VAR_21);
  return -VAR_2;
 }

 VAR_18->irq =
  FUNC_11(VAR_17,
        VAR_18->gpios->ndescs, sizeof(*VAR_18->irq),
        VAR_6);
 if (!VAR_18->irq)
  return -VAR_3;

 for (VAR_22 = 0; VAR_22 < VAR_18->gpios->ndescs; ++VAR_22) {
  VAR_18->irq[VAR_22] = FUNC_14(VAR_18->gpios->desc[VAR_22]);

  VAR_23 = FUNC_13(VAR_17, VAR_18->irq[VAR_22],
    ((void*)0), VAR_20,
    VAR_10 | VAR_9 |
    VAR_8,
    VAR_1, VAR_18);
  if (VAR_23) {
   FUNC_2(VAR_17, "unable to request IRQ %d (gpio#%d)\n",
    VAR_18->irq[VAR_22], VAR_22);
   return VAR_23;
  }
 }

 VAR_23 = FUNC_15(VAR_19);
 if (VAR_23) {
  FUNC_2(VAR_17, "failed to register input device\n");
  return VAR_23;
 }

 FUNC_4(VAR_17,
      FUNC_7(VAR_17, "wakeup-source"));

 FUNC_19(VAR_16, VAR_18);

 return 0;
}
