
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int,int ,int,int ,int ,char*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_6, unsigned char *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 char *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_6, 0);
 VAR_8 = FUNC_2(VAR_6, VAR_9, VAR_0,
         VAR_5 | VAR_4, 0, 0,
         VAR_10, sizeof(*VAR_10), VAR_3);

 *VAR_7 = *VAR_10;
 FUNC_0(VAR_10);

 return VAR_8;
}
