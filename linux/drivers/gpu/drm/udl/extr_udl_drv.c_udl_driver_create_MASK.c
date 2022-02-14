
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {struct udl_device* dev_private; } ;
struct udl_device {TYPE_1__ drm; struct usb_device* udev; } ;


 int VAR_0 ;
 struct udl_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct udl_device*) ;
 struct udl_device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct udl_device*) ;
 int FUNC_7 (struct usb_interface*,struct udl_device*) ;

__attribute__((used)) static struct udl_device *FUNC_8(struct usb_interface *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_3(VAR_3);
 struct udl_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(&VAR_5->drm, &VAR_2, &VAR_3->dev);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }

 VAR_5->udev = VAR_4;
 VAR_5->drm.dev_private = VAR_5;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_1(&VAR_5->drm);
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }

 FUNC_7(VAR_3, VAR_5);
 return VAR_5;
}
