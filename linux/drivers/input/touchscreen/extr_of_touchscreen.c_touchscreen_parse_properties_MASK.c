
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct touchscreen_properties {void* swap_x_y; void* invert_y; void* invert_x; void* max_y; void* max_x; } ;
struct TYPE_2__ {struct device* parent; } ;
struct input_dev {struct input_absinfo* absinfo; TYPE_1__ dev; } ;
struct input_absinfo {scalar_t__ minimum; int maximum; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct input_dev*,unsigned int) ;
 void* FUNC_2 (struct input_dev*,unsigned int) ;
 void* FUNC_3 (struct input_dev*,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_absinfo,struct input_absinfo) ;
 int FUNC_6 (struct device*,char*,void*,unsigned int*) ;
 int FUNC_7 (struct input_dev*,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_8(struct input_dev *VAR_6, bool VAR_7,
      struct touchscreen_properties *VAR_8)
{
 struct device *VAR_9 = VAR_6->dev.parent;
 struct input_absinfo *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 bool VAR_15;

 FUNC_4(VAR_6);
 if (!VAR_6->absinfo)
  return;

 VAR_11 = VAR_7 ? VAR_0 : VAR_4;
 VAR_15 = FUNC_6(VAR_9, "touchscreen-min-x",
      FUNC_3(VAR_6, VAR_11),
      &VAR_12) |
         FUNC_6(VAR_9, "touchscreen-size-x",
      FUNC_2(VAR_6,
          VAR_11) + 1,
      &VAR_13) |
         FUNC_6(VAR_9, "touchscreen-fuzz-x",
      FUNC_1(VAR_6, VAR_11),
      &VAR_14);
 if (VAR_15)
  FUNC_7(VAR_6, VAR_11, VAR_12, VAR_13 - 1, VAR_14);

 VAR_11 = VAR_7 ? VAR_1 : VAR_5;
 VAR_15 = FUNC_6(VAR_9, "touchscreen-min-y",
      FUNC_3(VAR_6, VAR_11),
      &VAR_12) |
         FUNC_6(VAR_9, "touchscreen-size-y",
      FUNC_2(VAR_6,
          VAR_11) + 1,
      &VAR_13) |
         FUNC_6(VAR_9, "touchscreen-fuzz-y",
      FUNC_1(VAR_6, VAR_11),
      &VAR_14);
 if (VAR_15)
  FUNC_7(VAR_6, VAR_11, VAR_12, VAR_13 - 1, VAR_14);

 VAR_11 = VAR_7 ? VAR_2 : VAR_3;
 VAR_15 = FUNC_6(VAR_9,
      "touchscreen-max-pressure",
      FUNC_2(VAR_6, VAR_11),
      &VAR_13) |
         FUNC_6(VAR_9,
      "touchscreen-fuzz-pressure",
      FUNC_1(VAR_6, VAR_11),
      &VAR_14);
 if (VAR_15)
  FUNC_7(VAR_6, VAR_11, 0, VAR_13, VAR_14);

 if (!VAR_8)
  return;

 VAR_11 = VAR_7 ? VAR_0 : VAR_4;

 VAR_8->max_x = FUNC_2(VAR_6, VAR_11);
 VAR_8->max_y = FUNC_2(VAR_6, VAR_11 + 1);

 VAR_8->invert_x =
  FUNC_0(VAR_9, "touchscreen-inverted-x");
 if (VAR_8->invert_x) {
  VAR_10 = &VAR_6->absinfo[VAR_11];
  VAR_10->maximum -= VAR_10->minimum;
  VAR_10->minimum = 0;
 }

 VAR_8->invert_y =
  FUNC_0(VAR_9, "touchscreen-inverted-y");
 if (VAR_8->invert_y) {
  VAR_10 = &VAR_6->absinfo[VAR_11 + 1];
  VAR_10->maximum -= VAR_10->minimum;
  VAR_10->minimum = 0;
 }

 VAR_8->swap_x_y =
  FUNC_0(VAR_9, "touchscreen-swapped-x-y");
 if (VAR_8->swap_x_y)
  FUNC_5(VAR_6->absinfo[VAR_11], VAR_6->absinfo[VAR_11 + 1]);
}
