
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct input_dev {unsigned int* keycode; } ;
struct firedtv {int device; struct input_dev* remote_ctrl_dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct input_dev*,unsigned int,int) ;
 int FUNC_2 (struct input_dev*) ;
 unsigned int* VAR_0 ;

void FUNC_3(struct firedtv *VAR_1, unsigned int VAR_2)
{
 struct input_dev *VAR_3 = VAR_1->remote_ctrl_dev;
 u16 *VAR_4 = VAR_3->keycode;

 if (VAR_2 >= 0x0300 && VAR_2 <= 0x031f)
  VAR_2 = VAR_4[VAR_2 - 0x0300];
 else if (VAR_2 >= 0x0340 && VAR_2 <= 0x0354)
  VAR_2 = VAR_4[VAR_2 - 0x0320];
 else if (VAR_2 >= 0x4501 && VAR_2 <= 0x451f)
  VAR_2 = VAR_0[VAR_2 - 0x4501];
 else if (VAR_2 >= 0x4540 && VAR_2 <= 0x4542)
  VAR_2 = VAR_0[VAR_2 - 0x4521];
 else {
  FUNC_0(VAR_1->device,
   "invalid key code 0x%04x from remote control\n",
   VAR_2);
  return;
 }

 FUNC_1(VAR_3, VAR_2, 1);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_2, 0);
 FUNC_2(VAR_3);
}
