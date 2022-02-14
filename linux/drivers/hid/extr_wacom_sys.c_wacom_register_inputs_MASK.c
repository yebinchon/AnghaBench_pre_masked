
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {struct input_dev* pen_input; struct input_dev* touch_input; struct input_dev* pad_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_3 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_4 (struct input_dev*,struct wacom_wac*) ;

__attribute__((used)) static int FUNC_5(struct wacom *VAR_1)
{
 struct input_dev *VAR_2, *VAR_3, *VAR_4;
 struct wacom_wac *VAR_5 = &(VAR_1->wacom_wac);
 int VAR_6 = 0;

 VAR_2 = VAR_5->pen_input;
 VAR_3 = VAR_5->touch_input;
 VAR_4 = VAR_5->pad_input;

 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_5);
 if (VAR_6) {

  FUNC_0(VAR_2);
  VAR_5->pen_input = ((void*)0);
  VAR_2 = ((void*)0);
 } else {
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6)
   goto fail;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6) {

  FUNC_0(VAR_3);
  VAR_5->touch_input = ((void*)0);
  VAR_3 = ((void*)0);
 } else {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6)
   goto fail;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6) {

  FUNC_0(VAR_4);
  VAR_5->pad_input = ((void*)0);
  VAR_4 = ((void*)0);
 } else {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6)
   goto fail;
 }

 return 0;

fail:
 VAR_5->pad_input = ((void*)0);
 VAR_5->touch_input = ((void*)0);
 VAR_5->pen_input = ((void*)0);
 return VAR_6;
}
