
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct wacom_wac {unsigned char* data; int num_contacts_left; TYPE_2__* shared; TYPE_1__ features; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (struct wacom_wac*) ;
 int FUNC_8 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_9(struct wacom_wac *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->touch_input;
 unsigned char *VAR_8 = VAR_6->data;
 int VAR_9;
 int VAR_10 = VAR_8[2];
 int VAR_11 = 0;
 int VAR_12 = 0;


 if (VAR_6->features.type == VAR_2 || VAR_6->features.type == VAR_3)
  VAR_12 = -4;





 if (VAR_10)
  VAR_6->num_contacts_left = VAR_10;


 VAR_11 = FUNC_6(5, VAR_6->num_contacts_left);

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  int VAR_13 = (VAR_5 + VAR_12) * VAR_9 + 3;
  bool VAR_14 = (VAR_8[VAR_13] & 0x1) && FUNC_7(VAR_6);
  int VAR_15 = FUNC_0(&VAR_8[VAR_13 + 1]);
  int VAR_16 = FUNC_1(VAR_7, VAR_15);

  if (VAR_16 < 0)
   continue;

  FUNC_3(VAR_7, VAR_16);
  FUNC_2(VAR_7, VAR_4, VAR_14);
  if (VAR_14) {
   int VAR_17 = FUNC_0(&VAR_8[VAR_13 + VAR_12 + 7]);
   int VAR_18 = FUNC_0(&VAR_8[VAR_13 + VAR_12 + 9]);
   FUNC_5(VAR_7, VAR_0, VAR_17);
   FUNC_5(VAR_7, VAR_1, VAR_18);
  }
 }
 FUNC_4(VAR_7);

 VAR_6->num_contacts_left -= VAR_11;
 if (VAR_6->num_contacts_left <= 0) {
  VAR_6->num_contacts_left = 0;
  VAR_6->shared->touch_down = FUNC_8(VAR_6);
 }
 return 1;
}
