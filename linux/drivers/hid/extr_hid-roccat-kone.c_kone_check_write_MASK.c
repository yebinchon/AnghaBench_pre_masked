
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*,int ,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2)
{
 int VAR_3;
 uint8_t VAR_4;

 do {




  FUNC_2(80);

  VAR_3 = FUNC_1(VAR_2,
    VAR_1, &VAR_4, 1);
  if (VAR_3)
   return VAR_3;






 } while (VAR_4 == 3);

 if (VAR_4 == 1)
  return 0;


 FUNC_0(&VAR_2->dev, "got retval %d when checking write\n", VAR_4);
 return -VAR_0;
}
