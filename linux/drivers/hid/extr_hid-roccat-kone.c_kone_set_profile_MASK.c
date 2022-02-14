
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct kone_profile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;
 int VAR_7 ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int ,int,void*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_8,
  struct kone_profile const *VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_10 < 1 || VAR_10 > 5)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_8, FUNC_2(VAR_8, 0),
   VAR_5,
   VAR_6 | VAR_4 | VAR_3,
   VAR_7, VAR_10, (void *)VAR_9,
   sizeof(struct kone_profile),
   VAR_2);

 if (VAR_11 != sizeof(struct kone_profile))
  return VAR_11;

 if (FUNC_0(VAR_8))
  return -VAR_1;

 return 0;
}
