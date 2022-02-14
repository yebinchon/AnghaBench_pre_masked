
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbhid_device {size_t ctrltail; int bufsize; int ifnum; int last_ctrl; TYPE_3__* urbctrl; TYPE_2__* cr; TYPE_1__* ctrl; int ctrlbuf; } ;
struct hid_report {int size; int id; int type; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_6__ {int transfer_buffer_length; int dev; int pipe; } ;
struct TYPE_5__ {unsigned char bRequestType; scalar_t__ bRequest; void* wLength; void* wIndex; void* wValue; } ;
struct TYPE_4__ {char* raw_report; unsigned char dir; struct hid_report* report; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,void*,void*,void*) ;
 int FUNC_3 (struct hid_device*,char*,int) ;
 int FUNC_4 (struct hid_device*) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_11(struct hid_device *VAR_7)
{
 struct hid_report *VAR_8;
 unsigned char VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12;
 struct usbhid_device *VAR_13 = VAR_7->driver_data;

 VAR_8 = VAR_13->ctrl[VAR_13->ctrltail].report;
 VAR_10 = VAR_13->ctrl[VAR_13->ctrltail].raw_report;
 VAR_9 = VAR_13->ctrl[VAR_13->ctrltail].dir;

 VAR_11 = ((VAR_8->size - 1) >> 3) + 1 + (VAR_8->id > 0);
 if (VAR_9 == VAR_3) {
  VAR_13->urbctrl->pipe = FUNC_9(FUNC_4(VAR_7), 0);
  VAR_13->urbctrl->transfer_buffer_length = VAR_11;
  if (VAR_10) {
   FUNC_6(VAR_13->ctrlbuf, VAR_10, VAR_11);
   FUNC_5(VAR_10);
   VAR_13->ctrl[VAR_13->ctrltail].raw_report = ((void*)0);
  }
 } else {
  int VAR_14, VAR_15;

  VAR_13->urbctrl->pipe = FUNC_8(FUNC_4(VAR_7), 0);
  VAR_14 = FUNC_7(FUNC_4(VAR_7),
       VAR_13->urbctrl->pipe, 0);
  if (VAR_14 > 0) {
   VAR_15 = FUNC_0(VAR_11, VAR_14);
   VAR_15 *= VAR_14;
   if (VAR_15 > VAR_13->bufsize)
    VAR_15 = VAR_13->bufsize;
  } else
   VAR_15 = 0;
  VAR_13->urbctrl->transfer_buffer_length = VAR_15;
 }
 VAR_13->urbctrl->dev = FUNC_4(VAR_7);

 VAR_13->cr->bRequestType = VAR_5 | VAR_4 | VAR_9;
 VAR_13->cr->bRequest = (VAR_9 == VAR_3) ? VAR_2 :
            VAR_1;
 VAR_13->cr->wValue = FUNC_1(((VAR_8->type + 1) << 8) |
      VAR_8->id);
 VAR_13->cr->wIndex = FUNC_1(VAR_13->ifnum);
 VAR_13->cr->wLength = FUNC_1(VAR_11);

 FUNC_2("submitting ctrl urb: %s wValue=0x%04x wIndex=0x%04x wLength=%u\n",
  VAR_13->cr->bRequest == VAR_2 ? "Set_Report" :
            "Get_Report",
  VAR_13->cr->wValue, VAR_13->cr->wIndex, VAR_13->cr->wLength);

 VAR_12 = FUNC_10(VAR_13->urbctrl, VAR_0);
 if (VAR_12 < 0) {
  FUNC_3(VAR_7, "usb_submit_urb(ctrl) failed: %d\n", VAR_12);
  return VAR_12;
 }
 VAR_13->last_ctrl = VAR_6;
 return 0;
}
