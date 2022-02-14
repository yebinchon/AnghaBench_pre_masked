
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct usb_device*,unsigned char*) ;
 int FUNC_3 (struct usb_device*,int,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_2(VAR_5, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_1("Can't get state to change to normal mode err");
  return VAR_8;
 }

 if ((VAR_6 & VAR_0) == VAR_1) {
  FUNC_0("firmware was already in normal mode");
  return 0;
 }

 VAR_7 = FUNC_4(VAR_5, 0);
 return FUNC_3(VAR_5, VAR_7, VAR_2,
   VAR_4, 0, 0,
   ((void*)0), 0, VAR_3);
}
