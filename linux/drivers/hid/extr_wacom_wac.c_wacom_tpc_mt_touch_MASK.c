
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; TYPE_1__* shared; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct wacom_wac*) ;
 int FUNC_6 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_7(struct wacom_wac *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->touch_input;
 unsigned char *VAR_5 = VAR_3->data;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  int VAR_7 = VAR_5[1] & (1 << VAR_6);
  bool VAR_8 = VAR_7 && FUNC_5(VAR_3);

  FUNC_1(VAR_4, VAR_6);
  FUNC_0(VAR_4, VAR_2, VAR_8);
  if (VAR_8) {
   int VAR_9 = FUNC_4((__le16 *)&VAR_5[VAR_6 * 2 + 2]) & 0x7fff;
   int VAR_10 = FUNC_4((__le16 *)&VAR_5[VAR_6 * 2 + 6]) & 0x7fff;

   FUNC_3(VAR_4, VAR_0, VAR_9);
   FUNC_3(VAR_4, VAR_1, VAR_10);
  }
 }
 FUNC_2(VAR_4);


 VAR_3->shared->touch_down = FUNC_6(VAR_3);

 return 1;
}
