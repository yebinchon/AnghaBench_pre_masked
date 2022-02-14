
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u16 ;
struct usb_device {int dev; } ;
struct input_dev {int dummy; } ;
struct hanwang {unsigned char* data; void* current_tool; unsigned char current_id; TYPE_1__* features; struct usb_device* usbdev; struct input_dev* dev; } ;
typedef enum hanwang_tablet_type { ____Placeholder_hanwang_tablet_type } hanwang_tablet_type ;
typedef int __be16 ;
struct TYPE_2__ {int type; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 unsigned char VAR_20 ;
 void* VAR_21 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*,void*,unsigned char) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct hanwang *VAR_22)
{
 unsigned char *VAR_23 = VAR_22->data;
 struct input_dev *VAR_24 = VAR_22->dev;
 struct usb_device *VAR_25 = VAR_22->usbdev;
 enum hanwang_tablet_type VAR_26 = VAR_22->features->type;
 int VAR_27;
 u16 VAR_28;

 if (VAR_26 == 129) {
  VAR_22->current_tool = VAR_15;
  VAR_22->current_id = VAR_21;
 }

 switch (VAR_23[0]) {
 case 0x02:
  switch (VAR_23[1]) {
  case 0x80:
   if (VAR_26 != 129) {
    VAR_22->current_id = 0;
    FUNC_4(VAR_24,
       VAR_22->current_tool, 0);
   }
   break;

  case 0x00:
   if (VAR_26 == 129) {
    VAR_22->current_id = 0;
    FUNC_4(VAR_24,
       VAR_22->current_tool, 0);
   }
   break;

  case 0xc2:
   switch (VAR_23[3] & 0xf0) {
   case 0x20:
   case 0x30:
    VAR_22->current_id = VAR_21;
    VAR_22->current_tool = VAR_15;
    FUNC_4(VAR_24, VAR_15, 1);
    break;
   case 0xa0:
   case 0xb0:
    VAR_22->current_id = VAR_17;
    VAR_22->current_tool = VAR_16;
    FUNC_4(VAR_24, VAR_16, 1);
    break;
   default:
    VAR_22->current_id = 0;
    FUNC_1(&VAR_25->dev,
     "unknown tablet tool %02x\n", VAR_23[0]);
    break;
   }
   break;

  default:
   switch (VAR_26) {
   case 128:
    VAR_28 = (VAR_23[6] << 3) |
        ((VAR_23[7] & 0xc0) >> 5) |
        (VAR_23[1] & 0x01);
    break;

   case 130:
   case 129:
    VAR_28 = (VAR_23[7] >> 6) | (VAR_23[6] << 2);
    break;

   default:
    VAR_28 = 0;
    break;
   }

   FUNC_3(VAR_24, VAR_7,
      FUNC_0((__be16 *)&VAR_23[2]));
   FUNC_3(VAR_24, VAR_8,
      FUNC_0((__be16 *)&VAR_23[4]));
   FUNC_3(VAR_24, VAR_1, VAR_28);
   FUNC_3(VAR_24, VAR_4, VAR_23[7] & 0x3f);
   FUNC_3(VAR_24, VAR_5, VAR_23[8] & 0x7f);
   FUNC_4(VAR_24, VAR_12, VAR_23[1] & 0x02);

   if (VAR_26 != 129)
    FUNC_4(VAR_24, VAR_13,
       VAR_23[1] & 0x04);
   else
    FUNC_4(VAR_24, VAR_15, 1);

   break;
  }

  FUNC_3(VAR_24, VAR_0, VAR_22->current_id);
  FUNC_2(VAR_24, VAR_18, VAR_19,
    VAR_22->features->pid);
  break;

 case 0x0c:

  VAR_22->current_id = VAR_20;

  switch (VAR_26) {
  case 128:
   FUNC_4(VAR_24, VAR_14,
      VAR_23[1] || VAR_23[2] || VAR_23[3]);
   FUNC_3(VAR_24, VAR_6, VAR_23[1]);
   FUNC_4(VAR_24, VAR_9, VAR_23[2]);
   for (VAR_27 = 0; VAR_27 < 8; VAR_27++)
    FUNC_4(VAR_24,
      VAR_10 + VAR_27, VAR_23[3] & (1 << VAR_27));
   break;

  case 130:
   FUNC_4(VAR_24, VAR_14, VAR_23[1] ||
     VAR_23[2] || VAR_23[3] || VAR_23[4] ||
     VAR_23[5] || VAR_23[6]);
   FUNC_3(VAR_24, VAR_2,
     ((VAR_23[1] & 0x1f) << 8) | VAR_23[2]);
   FUNC_3(VAR_24, VAR_3,
     ((VAR_23[3] & 0x1f) << 8) | VAR_23[4]);
   FUNC_4(VAR_24, VAR_9, VAR_23[5] & 0x01);
   for (VAR_27 = 0; VAR_27 < 4; VAR_27++) {
    FUNC_4(VAR_24,
      VAR_10 + VAR_27, VAR_23[5] & (1 << VAR_27));
    FUNC_4(VAR_24,
      VAR_11 + VAR_27, VAR_23[6] & (1 << VAR_27));
   }
   break;

  case 129:
   FUNC_1(&VAR_25->dev, "error packet  %02x\n", VAR_23[0]);
   return;
  }

  FUNC_3(VAR_24, VAR_0, VAR_22->current_id);
  FUNC_2(VAR_24, VAR_18, VAR_19, 0xffffffff);
  break;

 default:
  FUNC_1(&VAR_25->dev, "error packet  %02x\n", VAR_23[0]);
  break;
 }

 FUNC_5(VAR_24);
}
