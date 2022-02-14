
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
  case 128:
   if (*VAR_2 >= 128 && VAR_1[64] == 0xff && VAR_1[65] == 0x7f
     && VAR_1[69] == 0xff && VAR_1[70] == 0x7f) {
    FUNC_0(VAR_0, "Fixing up report descriptor\n");
    VAR_1[65] = VAR_1[70] = 0x2f;
   }
   break;
  }

 }
 return VAR_1;
}
