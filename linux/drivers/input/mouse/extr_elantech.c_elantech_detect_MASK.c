
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_2 (struct psmouse*,char*,...) ;
 scalar_t__ FUNC_3 (struct psmouse*,int ,unsigned char*) ;

int FUNC_4(struct psmouse *VAR_5, bool VAR_6)
{
 struct ps2dev *VAR_7 = &VAR_5->ps2dev;
 unsigned char VAR_8[3];

 FUNC_1(VAR_7, ((void*)0), VAR_3);

 if (FUNC_1(VAR_7, ((void*)0), VAR_1) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, VAR_8, VAR_2)) {
  FUNC_2(VAR_5, "sending Elantech magic knock failed.\n");
  return -1;
 }





 if (VAR_8[0] != 0x3c || VAR_8[1] != 0x03 ||
     (VAR_8[2] != 0xc8 && VAR_8[2] != 0x00)) {
  FUNC_2(VAR_5,
       "unexpected magic knock result 0x%02x, 0x%02x, 0x%02x.\n",
       VAR_8[0], VAR_8[1], VAR_8[2]);
  return -1;
 }






 if (FUNC_3(VAR_5, VAR_0, VAR_8)) {
  FUNC_2(VAR_5, "failed to query firmware version.\n");
  return -1;
 }

 FUNC_2(VAR_5,
      "Elantech version query result 0x%02x, 0x%02x, 0x%02x.\n",
      VAR_8[0], VAR_8[1], VAR_8[2]);

 if (!FUNC_0(VAR_8)) {
  FUNC_2(VAR_5,
       "Probably not a real Elantech touchpad. Aborting.\n");
  return -1;
 }

 if (VAR_6) {
  VAR_5->vendor = "Elantech";
  VAR_5->name = "Touchpad";
 }

 return 0;
}
