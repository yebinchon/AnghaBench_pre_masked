
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {size_t outtail; int last_out; TYPE_2__* urbout; TYPE_1__* out; int outbuf; } ;
struct hid_report {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_4__ {int transfer_buffer_length; int dev; } ;
struct TYPE_3__ {char* raw_report; struct hid_report* report; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_report*) ;
 int FUNC_3 (struct hid_device*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_2)
{
 struct hid_report *VAR_3;
 char *VAR_4;
 struct usbhid_device *VAR_5 = VAR_2->driver_data;
 int VAR_6;

 VAR_3 = VAR_5->out[VAR_5->outtail].report;
 VAR_4 = VAR_5->out[VAR_5->outtail].raw_report;

 VAR_5->urbout->transfer_buffer_length = FUNC_2(VAR_3);
 VAR_5->urbout->dev = FUNC_3(VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_5->outbuf, VAR_4,
    VAR_5->urbout->transfer_buffer_length);
  FUNC_4(VAR_4);
  VAR_5->out[VAR_5->outtail].raw_report = ((void*)0);
 }

 FUNC_0("submitting out urb\n");

 VAR_6 = FUNC_6(VAR_5->urbout, VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "usb_submit_urb(out) failed: %d\n", VAR_6);
  return VAR_6;
 }
 VAR_5->last_out = VAR_1;
 return 0;
}
