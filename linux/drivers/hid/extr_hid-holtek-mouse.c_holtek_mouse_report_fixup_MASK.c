
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {int product; TYPE_1__ dev; } ;
typedef int __u8 ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct usb_interface* FUNC_1 (int ) ;

__attribute__((used)) static __u8 *FUNC_2(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_1(VAR_0->dev.parent);

 if (VAR_3->cur_altsetting->desc.bInterfaceNumber == 1) {


  switch (VAR_0->product) {
  case 132:
  case 130:
  case 128:
   if (*VAR_2 >= 122 && VAR_1[115] == 0xff && VAR_1[116] == 0x7f
     && VAR_1[120] == 0xff && VAR_1[121] == 0x7f) {
    FUNC_0(VAR_0, "Fixing up report descriptor\n");
    VAR_1[116] = VAR_1[121] = 0x2f;
   }
   break;
  case 133:
  case 131:
  case 129:
   if (*VAR_2 >= 113 && VAR_1[106] == 0xff && VAR_1[107] == 0x7f
     && VAR_1[111] == 0xff && VAR_1[112] == 0x7f) {
    FUNC_0(VAR_0, "Fixing up report descriptor\n");
    VAR_1[107] = VAR_1[112] = 0x2f;
   }
   break;
  }

 }
 return VAR_1;
}
