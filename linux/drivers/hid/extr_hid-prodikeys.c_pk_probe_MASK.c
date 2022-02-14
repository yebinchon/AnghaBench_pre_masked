
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct pk_device {unsigned short ifnum; struct pk_device* pm; struct pk_device* pk; struct hid_device* hdev; } ;
struct pcmidi_snd {unsigned short ifnum; struct pcmidi_snd* pm; struct pcmidi_snd* pk; struct hid_device* hdev; } ;
struct hid_device_id {unsigned long driver_data; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {int quirks; TYPE_1__ dev; } ;
struct TYPE_5__ {unsigned short bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct pk_device*) ;
 int FUNC_5 (struct pk_device*) ;
 struct pk_device* FUNC_6 (int,int ) ;
 int FUNC_7 (struct pk_device*) ;
 struct usb_interface* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 int VAR_7;
 struct usb_interface *VAR_8 = FUNC_8(VAR_5->dev.parent);
 unsigned short VAR_9 = VAR_8->cur_altsetting->desc.bInterfaceNumber;
 unsigned long VAR_10 = VAR_6->driver_data;
 struct pk_device *VAR_11;
 struct pcmidi_snd *VAR_12 = ((void*)0);

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_5, "can't alloc descriptor\n");
  return -VAR_0;
 }

 VAR_11->hdev = VAR_5;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_5, "can't alloc descriptor\n");
  VAR_7 = -VAR_0;
  goto err_free_pk;
 }

 VAR_12->pk = VAR_11;
 VAR_11->pm = VAR_12;
 VAR_12->ifnum = VAR_9;

 FUNC_4(VAR_5, VAR_11);

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5, "hid parse failed\n");
  goto err_free;
 }

 if (VAR_10 & VAR_4) {
  VAR_5->quirks |= VAR_3;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_5, "hw start failed\n");
  goto err_free;
 }

 VAR_7 = FUNC_7(VAR_12);
 if (VAR_7 < 0)
  goto err_stop;

 return 0;
err_stop:
 FUNC_2(VAR_5);
err_free:
 FUNC_5(VAR_12);
err_free_pk:
 FUNC_5(VAR_11);

 return VAR_7;
}
