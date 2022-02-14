
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int touch_max; } ;
struct wacom_wac {TYPE_2__* shared; TYPE_1__ features; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,unsigned int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,unsigned char) ;
 scalar_t__ FUNC_6 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_7(struct wacom_wac *VAR_5,
  unsigned char *VAR_6)
{
 struct input_dev *VAR_7 = VAR_5->touch_input;
 unsigned char *VAR_8, VAR_9;
 unsigned VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13;

 VAR_9 = VAR_6[0];

 for (VAR_10 = 0; VAR_10 < VAR_5->features.touch_max; VAR_10++) {
  VAR_13 = !!(VAR_9 & FUNC_0(VAR_10)) &&
   FUNC_6(VAR_5);

  FUNC_2(VAR_7, VAR_10);
  FUNC_1(VAR_7, VAR_4, VAR_13);

  if (!VAR_13)
   continue;

  VAR_8 = VAR_6 + 1 + VAR_10 * 3;
  VAR_11 = VAR_8[0] | ((VAR_8[1] & 0x0f) << 8);
  VAR_12 = (VAR_8[2] << 4) | (VAR_8[1] >> 4);

  FUNC_4(VAR_7, VAR_0, VAR_11);
  FUNC_4(VAR_7, VAR_1, VAR_12);
 }

 FUNC_3(VAR_7);

 FUNC_5(VAR_7, VAR_2, VAR_9 & 0x40);
 FUNC_5(VAR_7, VAR_3, VAR_9 & 0x80);


 VAR_5->shared->touch_down = !!VAR_9 && FUNC_6(VAR_5);

 return 1;
}
