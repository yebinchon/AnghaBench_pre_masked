
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int fw_version; int* capabilities; scalar_t__ jumpy_cursor; } ;
struct elantech_data {int single_finger_reports; unsigned char y_max; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_9)
{
 struct input_dev *VAR_10 = VAR_9->dev;
 struct elantech_data *VAR_11 = VAR_9->private;
 unsigned char *VAR_12 = VAR_9->packet;
 int VAR_13;

 if (VAR_11->info.fw_version < 0x020000) {




  VAR_13 = ((VAR_12[1] & 0x80) >> 7) +
    ((VAR_12[1] & 0x30) >> 4);
 } else {




  VAR_13 = (VAR_12[0] & 0xc0) >> 6;
 }

 if (VAR_11->info.jumpy_cursor) {
  if (VAR_13 != 1) {
   VAR_11->single_finger_reports = 0;
  } else if (VAR_11->single_finger_reports < 2) {

   VAR_11->single_finger_reports++;
   FUNC_0("discarding packet\n");
   return;
  }
 }

 FUNC_2(VAR_10, VAR_7, VAR_13 != 0);





 if (VAR_13) {
  FUNC_1(VAR_10, VAR_0,
   ((VAR_12[1] & 0x0c) << 6) | VAR_12[2]);
  FUNC_1(VAR_10, VAR_1,
   VAR_11->y_max - (((VAR_12[1] & 0x03) << 8) | VAR_12[3]));
 }

 FUNC_2(VAR_10, VAR_5, VAR_13 == 1);
 FUNC_2(VAR_10, VAR_4, VAR_13 == 2);
 FUNC_2(VAR_10, VAR_6, VAR_13 == 3);

 FUNC_4(VAR_10, VAR_12[0]);

 if (VAR_11->info.fw_version < 0x020000 &&
     (VAR_11->info.capabilities[0] & VAR_8)) {

  FUNC_2(VAR_10, VAR_3, VAR_12[0] & 0x40);

  FUNC_2(VAR_10, VAR_2, VAR_12[0] & 0x80);
 }

 FUNC_3(VAR_10);
}
