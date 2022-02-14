
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {struct elantech_data* private; } ;
struct TYPE_2__ {int hw_version; int set_hw_resolution; } ;
struct elantech_data {int reg_10; int reg_11; int reg_21; int reg_07; TYPE_1__ info; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct psmouse*,int,unsigned char*) ;
 int FUNC_2 (struct psmouse*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_3)
{
 struct elantech_data *VAR_4 = VAR_3->private;
 unsigned char VAR_5;
 int VAR_6 = VAR_2;
 int VAR_7 = 0;

 switch (VAR_4->info.hw_version) {
 case 1:
  VAR_4->reg_10 = 0x16;
  VAR_4->reg_11 = 0x8f;
  if (FUNC_2(VAR_3, 0x10, VAR_4->reg_10) ||
      FUNC_2(VAR_3, 0x11, VAR_4->reg_11)) {
   VAR_7 = -1;
  }
  break;

 case 2:

  VAR_4->reg_10 = 0x54;
  VAR_4->reg_11 = 0x88;
  VAR_4->reg_21 = 0x60;
  if (FUNC_2(VAR_3, 0x10, VAR_4->reg_10) ||
      FUNC_2(VAR_3, 0x11, VAR_4->reg_11) ||
      FUNC_2(VAR_3, 0x21, VAR_4->reg_21)) {
   VAR_7 = -1;
  }
  break;

 case 3:
  if (VAR_4->info.set_hw_resolution)
   VAR_4->reg_10 = 0x0b;
  else
   VAR_4->reg_10 = 0x01;

  if (FUNC_2(VAR_3, 0x10, VAR_4->reg_10))
   VAR_7 = -1;

  break;

 case 4:
  VAR_4->reg_07 = 0x01;
  if (FUNC_2(VAR_3, 0x07, VAR_4->reg_07))
   VAR_7 = -1;

  goto skip_readback_reg_10;
 }

 if (VAR_7 == 0) {






  do {
   VAR_7 = FUNC_1(VAR_3, 0x10, &VAR_5);
   if (VAR_7 == 0)
    break;
   VAR_6--;
   FUNC_0("retrying read (%d).\n", VAR_6);
   FUNC_3(VAR_1);
  } while (VAR_6 > 0);

  if (VAR_7) {
   FUNC_4(VAR_3,
        "failed to read back register 0x10.\n");
  } else if (VAR_4->info.hw_version == 1 &&
      !(VAR_5 & VAR_0)) {
   FUNC_4(VAR_3,
        "touchpad refuses to switch to absolute mode.\n");
   VAR_7 = -1;
  }
 }

 skip_readback_reg_10:
 if (VAR_7)
  FUNC_4(VAR_3, "failed to initialise registers.\n");

 return VAR_7;
}
