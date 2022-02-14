
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
  case 129:
  case 128:
   if (*VAR_2 >= 172 && VAR_1[75] == 0x15 && VAR_1[77] == 0x16
   && VAR_1[78] == 0xff && VAR_1[79] == 0x0f) {
    FUNC_0(VAR_0, "Fixing up report descriptor\n");
    VAR_1[77] = 0x26;
   }
   break;
  }

 }
 return VAR_1;
}
