
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* urbin; int urbout; } ;
struct TYPE_4__ {int bInterval; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct usb_device {int dummy; } ;
struct u2fzero_device {int buf_in; int urb; struct hid_device* hdev; } ;
struct hid_device {scalar_t__ bus; struct usbhid_device* driver_data; } ;
struct TYPE_3__ {int pipe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_0 (struct hid_device*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct usb_device*,unsigned int,int ,int ,int ,int *,int ) ;
 struct usb_host_endpoint* FUNC_3 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_4(struct u2fzero_device *VAR_8)
{
 struct hid_device *VAR_9 = VAR_8->hdev;
 struct usb_device *VAR_10;
 struct usbhid_device *VAR_11 = VAR_9->driver_data;
 unsigned int VAR_12;
 struct usb_host_endpoint *VAR_13;

 if (VAR_8->hdev->bus != VAR_0)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_9);

 if (!VAR_11->urbout || !VAR_11->urbin)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_10, VAR_11->urbin->pipe);
 if (!VAR_13)
  return -VAR_2;

 VAR_8->urb = FUNC_1(0, VAR_4);
 if (!VAR_8->urb)
  return -VAR_3;

 VAR_12 = (VAR_11->urbin->pipe & ~(3 << 30)) | (VAR_6 << 30);

 FUNC_2(VAR_8->urb,
  VAR_10,
  VAR_12,
  VAR_8->buf_in,
  VAR_5,
  VAR_7,
  ((void*)0),
  VAR_13->desc.bInterval);

 return 0;
}
