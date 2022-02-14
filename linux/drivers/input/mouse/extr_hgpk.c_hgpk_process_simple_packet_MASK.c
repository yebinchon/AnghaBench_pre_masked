
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct psmouse*,int,int) ;
 int FUNC_1 (struct psmouse*,int,int,int,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct psmouse*,char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct psmouse *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->dev;
 unsigned char *VAR_7 = VAR_5->packet;
 int VAR_8 = VAR_7[0] & 1;
 int VAR_9 = (VAR_7[0] >> 1) & 1;
 int VAR_10 = VAR_7[1] - ((VAR_7[0] << 4) & 0x100);
 int VAR_11 = ((VAR_7[0] << 3) & 0x100) - VAR_7[2];

 if (VAR_7[0] & 0xc0)
  FUNC_5(VAR_5,
       "overflow -- 0x%02x 0x%02x 0x%02x\n",
       VAR_7[0], VAR_7[1], VAR_7[2]);

 if (FUNC_0(VAR_5, VAR_10, VAR_11)) {
  if (VAR_4)
   FUNC_5(VAR_5, "discarding\n");
  return;
 }

 FUNC_1(VAR_5, VAR_8, VAR_9, VAR_10, VAR_11);

 if (VAR_4)
  FUNC_5(VAR_5, "l=%d r=%d x=%d y=%d\n",
       VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_2(VAR_6, VAR_0, VAR_8);
 FUNC_2(VAR_6, VAR_1, VAR_9);

 FUNC_3(VAR_6, VAR_2, VAR_10);
 FUNC_3(VAR_6, VAR_3, VAR_11);

 FUNC_4(VAR_6);
}
