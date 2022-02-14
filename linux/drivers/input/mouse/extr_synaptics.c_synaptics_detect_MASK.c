
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
 int FUNC_0 (struct ps2dev*,int*,int ) ;

int FUNC_1(struct psmouse *VAR_3, bool VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_3->ps2dev;
 u8 VAR_6[4] = { 0 };

 FUNC_0(VAR_5, VAR_6, VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_1);

 if (VAR_6[1] != 0x47)
  return -VAR_0;

 if (VAR_4) {
  VAR_3->vendor = "Synaptics";
  VAR_3->name = "TouchPad";
 }

 return 0;
}
