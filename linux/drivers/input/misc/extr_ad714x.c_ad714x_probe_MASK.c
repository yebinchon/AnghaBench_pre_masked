
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_4__ {int version; int product; void* bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; TYPE_1__ id; int keybit; int evbit; int absbit; } ;
struct device {int dummy; } ;
struct ad714x_wheel_plat {int max_coord; } ;
struct ad714x_wheel_drv {struct input_dev* input; } ;
struct ad714x_touchpad_plat {int y_max_coord; int x_max_coord; } ;
struct ad714x_touchpad_drv {struct input_dev* input; } ;
struct ad714x_slider_plat {int max_coord; } ;
struct ad714x_slider_drv {struct input_dev* input; } ;
struct ad714x_platform_data {int slider_num; int wheel_num; int touchpad_num; int button_num; long irqflags; struct ad714x_button_plat* button; struct ad714x_touchpad_plat* touchpad; struct ad714x_wheel_plat* wheel; struct ad714x_slider_plat* slider; } ;
struct ad714x_chip {int irq; int version; int product; struct ad714x_platform_data* hw; int mutex; struct device* dev; int write; int read; TYPE_3__* sw; } ;
struct ad714x_button_plat {int keycode; } ;
struct ad714x_button_drv {struct input_dev* input; } ;
typedef int ad714x_write_t ;
typedef int ad714x_read_t ;
struct TYPE_6__ {struct ad714x_button_drv* button; struct ad714x_touchpad_drv* touchpad; struct ad714x_wheel_drv* wheel; struct ad714x_slider_drv* slider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ad714x_chip* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ad714x_chip*) ;
 int FUNC_3 (struct ad714x_chip*) ;
 int VAR_11 ;
 int FUNC_4 (struct device*,char*,...) ;
 struct ad714x_platform_data* FUNC_5 (struct device*) ;
 struct input_dev* FUNC_6 (struct device*) ;
 struct ad714x_chip* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int *,int ,unsigned long,char*,struct ad714x_chip*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;

struct ad714x_chip *FUNC_12(struct device *VAR_12, u16 VAR_13, int VAR_14,
     ad714x_read_t VAR_15, ad714x_write_t VAR_16)
{
 int VAR_17;
 int VAR_18;
 struct input_dev *VAR_19;

 struct ad714x_platform_data *VAR_20 = FUNC_5(VAR_12);
 struct ad714x_chip *VAR_21;
 void *VAR_22;
 unsigned long VAR_23;

 struct ad714x_button_drv *VAR_24;
 struct ad714x_slider_drv *VAR_25;
 struct ad714x_wheel_drv *VAR_26;
 struct ad714x_touchpad_drv *VAR_27;


 if (VAR_14 <= 0) {
  FUNC_4(VAR_12, "IRQ not configured!\n");
  VAR_18 = -VAR_4;
  return FUNC_0(VAR_18);
 }

 if (FUNC_5(VAR_12) == ((void*)0)) {
  FUNC_4(VAR_12, "platform data for ad714x doesn't exist\n");
  VAR_18 = -VAR_4;
  return FUNC_0(VAR_18);
 }

 VAR_21 = FUNC_7(VAR_12, sizeof(*VAR_21) + sizeof(*VAR_21->sw) +
       sizeof(*VAR_25) * VAR_20->slider_num +
       sizeof(*VAR_26) * VAR_20->wheel_num +
       sizeof(*VAR_27) * VAR_20->touchpad_num +
       sizeof(*VAR_24) * VAR_20->button_num,
         VAR_8);
 if (!VAR_21) {
  VAR_18 = -VAR_5;
  return FUNC_0(VAR_18);
 }
 VAR_21->hw = VAR_20;

 VAR_22 = VAR_21 + 1;
 VAR_21->sw = VAR_22;
 VAR_22 += sizeof(*VAR_21->sw);
 VAR_21->sw->slider = VAR_25 = VAR_22;
 VAR_22 += sizeof(*VAR_25) * VAR_21->hw->slider_num;
 VAR_21->sw->wheel = VAR_26 = VAR_22;
 VAR_22 += sizeof(*VAR_26) * VAR_21->hw->wheel_num;
 VAR_21->sw->touchpad = VAR_27 = VAR_22;
 VAR_22 += sizeof(*VAR_27) * VAR_21->hw->touchpad_num;
 VAR_21->sw->button = VAR_24 = VAR_22;
 VAR_22 += sizeof(*VAR_24) * VAR_21->hw->button_num;

 VAR_21->read = VAR_15;
 VAR_21->write = VAR_16;
 VAR_21->irq = VAR_14;
 VAR_21->dev = VAR_12;

 VAR_18 = FUNC_2(VAR_21);
 if (VAR_18)
  return FUNC_0(VAR_18);



 FUNC_3(VAR_21);
 FUNC_11(&VAR_21->mutex);


 if (VAR_21->hw->slider_num > 0) {
  struct ad714x_slider_plat *VAR_28 = VAR_21->hw->slider;

  for (VAR_17 = 0; VAR_17 < VAR_21->hw->slider_num; VAR_17++) {
   VAR_19 = FUNC_6(VAR_12);
   if (!VAR_19)
    return FUNC_0(-VAR_5);

   FUNC_1(VAR_6, VAR_19->evbit);
   FUNC_1(VAR_7, VAR_19->evbit);
   FUNC_1(VAR_1, VAR_19->absbit);
   FUNC_1(VAR_3, VAR_19->keybit);
   FUNC_10(VAR_19,
    VAR_1, 0, VAR_28->max_coord, 0, 0);

   VAR_19->id.bustype = VAR_13;
   VAR_19->id.product = VAR_21->product;
   VAR_19->id.version = VAR_21->version;
   VAR_19->name = "ad714x_captouch_slider";
   VAR_19->dev.parent = VAR_12;

   VAR_18 = FUNC_9(VAR_19);
   if (VAR_18)
    return FUNC_0(VAR_18);

   VAR_25[VAR_17].input = VAR_19;
  }
 }


 if (VAR_21->hw->wheel_num > 0) {
  struct ad714x_wheel_plat *VAR_29 = VAR_21->hw->wheel;

  for (VAR_17 = 0; VAR_17 < VAR_21->hw->wheel_num; VAR_17++) {
   VAR_19 = FUNC_6(VAR_12);
   if (!VAR_19)
    return FUNC_0(-VAR_5);

   FUNC_1(VAR_7, VAR_19->evbit);
   FUNC_1(VAR_6, VAR_19->evbit);
   FUNC_1(VAR_0, VAR_19->absbit);
   FUNC_1(VAR_3, VAR_19->keybit);
   FUNC_10(VAR_19,
    VAR_0, 0, VAR_29->max_coord, 0, 0);

   VAR_19->id.bustype = VAR_13;
   VAR_19->id.product = VAR_21->product;
   VAR_19->id.version = VAR_21->version;
   VAR_19->name = "ad714x_captouch_wheel";
   VAR_19->dev.parent = VAR_12;

   VAR_18 = FUNC_9(VAR_19);
   if (VAR_18)
    return FUNC_0(VAR_18);

   VAR_26[VAR_17].input = VAR_19;
  }
 }


 if (VAR_21->hw->touchpad_num > 0) {
  struct ad714x_touchpad_plat *VAR_30 = VAR_21->hw->touchpad;

  for (VAR_17 = 0; VAR_17 < VAR_21->hw->touchpad_num; VAR_17++) {
   VAR_19 = FUNC_6(VAR_12);
   if (!VAR_19)
    return FUNC_0(-VAR_5);

   FUNC_1(VAR_6, VAR_19->evbit);
   FUNC_1(VAR_7, VAR_19->evbit);
   FUNC_1(VAR_1, VAR_19->absbit);
   FUNC_1(VAR_2, VAR_19->absbit);
   FUNC_1(VAR_3, VAR_19->keybit);
   FUNC_10(VAR_19,
    VAR_1, 0, VAR_30->x_max_coord, 0, 0);
   FUNC_10(VAR_19,
    VAR_2, 0, VAR_30->y_max_coord, 0, 0);

   VAR_19->id.bustype = VAR_13;
   VAR_19->id.product = VAR_21->product;
   VAR_19->id.version = VAR_21->version;
   VAR_19->name = "ad714x_captouch_pad";
   VAR_19->dev.parent = VAR_12;

   VAR_18 = FUNC_9(VAR_19);
   if (VAR_18)
    return FUNC_0(VAR_18);

   VAR_27[VAR_17].input = VAR_19;
  }
 }


 if (VAR_21->hw->button_num > 0) {
  struct ad714x_button_plat *VAR_31 = VAR_21->hw->button;

  VAR_19 = FUNC_6(VAR_12);
  if (!VAR_19) {
   VAR_18 = -VAR_5;
   return FUNC_0(VAR_18);
  }

  FUNC_1(VAR_7, VAR_19->evbit);
  for (VAR_17 = 0; VAR_17 < VAR_21->hw->button_num; VAR_17++) {
   VAR_24[VAR_17].input = VAR_19;
   FUNC_1(VAR_31[VAR_17].keycode, VAR_19->keybit);
  }

  VAR_19->id.bustype = VAR_13;
  VAR_19->id.product = VAR_21->product;
  VAR_19->id.version = VAR_21->version;
  VAR_19->name = "ad714x_captouch_button";
  VAR_19->dev.parent = VAR_12;

  VAR_18 = FUNC_9(VAR_19);
  if (VAR_18)
   return FUNC_0(VAR_18);
 }

 VAR_23 = VAR_20->irqflags ?: VAR_10;
 VAR_23 |= VAR_9;

 VAR_18 = FUNC_8(VAR_12, VAR_21->irq, ((void*)0),
       VAR_11,
       VAR_23, "ad714x_captouch", VAR_21);
 if (VAR_18) {
  FUNC_4(VAR_12, "can't allocate irq %d\n", VAR_21->irq);
  return FUNC_0(VAR_18);
 }

 return VAR_21;
}
