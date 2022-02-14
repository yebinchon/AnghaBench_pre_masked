
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int touch_max; } ;
struct wacom_wac {unsigned char* data; TYPE_2__* shared; TYPE_1__ features; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_4__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_5(struct wacom_wac *VAR_6, size_t VAR_7)
{
 unsigned char *VAR_8 = VAR_6->data;
 struct input_dev *VAR_9 = VAR_6->touch_input;
 bool VAR_10 = FUNC_4(VAR_6);
 int VAR_11 = 0, VAR_12 = 0;

 if (VAR_6->features.touch_max > 1 || VAR_7 > VAR_5)
  return 0;

 if (VAR_7 == VAR_3) {
  VAR_10 = VAR_10 && (VAR_8[0] & 0x01);
  VAR_11 = FUNC_0(&VAR_8[1]);
  VAR_12 = FUNC_0(&VAR_8[3]);
 } else if (VAR_7 == VAR_4) {
  VAR_10 = VAR_10 && (VAR_8[2] & 0x01);
  VAR_11 = FUNC_0(&VAR_8[3]);
  VAR_12 = FUNC_0(&VAR_8[5]);
 } else {
  VAR_10 = VAR_10 && (VAR_8[1] & 0x01);
  VAR_11 = FUNC_3((__le16 *)&VAR_8[2]);
  VAR_12 = FUNC_3((__le16 *)&VAR_8[4]);
 }

 if (VAR_10) {
  FUNC_1(VAR_9, VAR_0, VAR_11);
  FUNC_1(VAR_9, VAR_1, VAR_12);
 }
 FUNC_2(VAR_9, VAR_2, VAR_10);


 VAR_6->shared->touch_down = VAR_10;

 return 1;
}
