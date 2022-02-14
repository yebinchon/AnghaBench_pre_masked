
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int *,int ) ;
 int FUNC_4 (struct usb_device*,int,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_5, u8 VAR_6,
         void *VAR_7, u16 VAR_8)
{
 int VAR_9, VAR_10;
 u8 *VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_1);
 if (!VAR_11)
  return -VAR_0;




 VAR_9 = FUNC_5(VAR_5, 0);
 VAR_10 = FUNC_4(VAR_5, VAR_9, VAR_6, VAR_4 | VAR_3,
         0, 0, VAR_11, VAR_8, VAR_2);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->dev, "Failed to access otp area (%d)", VAR_10);
  goto done;
 }

 FUNC_3(VAR_7, VAR_11, VAR_8);

done:
 FUNC_1(VAR_11);

 return VAR_10;
}
