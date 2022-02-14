
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {int flags; int quirks; struct input_dev* dev2; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*,char*) ;

__attribute__((used)) static void FUNC_6(struct psmouse *VAR_8)
{
 struct alps_data *VAR_9 = VAR_8->private;
 unsigned char *VAR_10 = VAR_8->packet;
 struct input_dev *VAR_11 = VAR_9->dev2;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


 if (!(VAR_9->flags & VAR_1)) {
  FUNC_5(VAR_8,
        "Rejected trackstick packet from non DualPoint device");
  return;
 }


 if (!(VAR_10[0] & 0x40)) {
  FUNC_4(VAR_8, "Bad trackstick packet, discarding\n");
  return;
 }





 if (VAR_10[1] == 0x7f && VAR_10[2] == 0x7f && VAR_10[4] == 0x7f)
  return;

 VAR_12 = (s8)(((VAR_10[0] & 0x20) << 2) | (VAR_10[1] & 0x7f));
 VAR_13 = (s8)(((VAR_10[0] & 0x10) << 3) | (VAR_10[2] & 0x7f));
 VAR_14 = VAR_10[4] & 0x7f;






 VAR_12 /= 8;
 VAR_13 /= 8;

 FUNC_2(VAR_11, VAR_6, VAR_12);
 FUNC_2(VAR_11, VAR_7, -VAR_13);
 FUNC_0(VAR_11, VAR_0, VAR_14);
 VAR_15 = VAR_10[3] & 0x01;
 VAR_16 = VAR_10[3] & 0x02;
 VAR_17 = VAR_10[3] & 0x04;

 if (!(VAR_9->quirks & VAR_2) &&
     (VAR_15 || VAR_16 || VAR_17))
  VAR_9->quirks |= VAR_2;

 if (VAR_9->quirks & VAR_2) {
  FUNC_1(VAR_11, VAR_3, VAR_15);
  FUNC_1(VAR_11, VAR_5, VAR_16);
  FUNC_1(VAR_11, VAR_4, VAR_17);
 }

 FUNC_3(VAR_11);
 return;
}
