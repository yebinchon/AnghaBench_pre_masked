
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {int flags; struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,char) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,unsigned char) ;
 int FUNC_4 (struct psmouse*,char*) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_4)
{
 struct alps_data *VAR_5 = VAR_4->private;
 unsigned char *VAR_6 = VAR_4->packet;
 struct input_dev *VAR_7 = VAR_5->dev2;
 int VAR_8, VAR_9, VAR_10;


 if (!(VAR_5->flags & VAR_1)) {
  FUNC_4(VAR_4,
        "Rejected trackstick packet from non DualPoint device");
  return;
 }

 VAR_8 = ((VAR_6[2] & 0xbf)) | ((VAR_6[3] & 0x10) << 2);
 VAR_9 = (VAR_6[3] & 0x07) | (VAR_6[4] & 0xb8) |
     ((VAR_6[3] & 0x20) << 1);
 VAR_10 = (VAR_6[5] & 0x3f) | ((VAR_6[3] & 0x80) >> 1);

 FUNC_1(VAR_7, VAR_2, (char)VAR_8);
 FUNC_1(VAR_7, VAR_3, -((char)VAR_9));
 FUNC_0(VAR_7, VAR_0, VAR_10);

 FUNC_3(VAR_7, VAR_6[1]);

 FUNC_2(VAR_7);
}
