
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps2dev*,int*,int ) ;
 int FUNC_1 (struct psmouse*,char*) ;

int FUNC_2(struct psmouse *VAR_3, bool VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_3->ps2dev;
 u8 VAR_6[4] = {0x03, 0x00, 0x00, 0x00};

 if (FUNC_0(VAR_5, VAR_6, VAR_2))
  return -1;
 if (FUNC_0(VAR_5, VAR_6, VAR_2))
  return -1;
 if (FUNC_0(VAR_5, VAR_6, VAR_2))
  return -1;
 if (FUNC_0(VAR_5, VAR_6, VAR_2))
  return -1;
 if (FUNC_0(VAR_5, VAR_6, VAR_1))
  return -1;

 if (VAR_6[1] != 0x03 || VAR_6[2] != 0x64)
  return -VAR_0;

 FUNC_1(VAR_3, "BYD touchpad detected\n");

 if (VAR_4) {
  VAR_3->vendor = "BYD";
  VAR_3->name = "TouchPad";
 }

 return 0;
}
