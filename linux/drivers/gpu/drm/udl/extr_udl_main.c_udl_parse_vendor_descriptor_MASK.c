
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct udl_device {int sku_pixel_limit; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 struct udl_device* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct usb_device*,int,int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_2,
           struct usb_device *VAR_3)
{
 struct udl_device *VAR_4 = FUNC_7(VAR_2);
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 u8 VAR_8 = 0;

 VAR_6 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_6)
  return 0;
 VAR_5 = VAR_6;

 VAR_8 = FUNC_8(VAR_3, 0x5f,
        0, VAR_5, VAR_1);
 if (VAR_8 > 5) {
  FUNC_2("vendor descriptor length:%x data:%11ph\n",
   VAR_8, VAR_5);

  if ((VAR_5[0] != VAR_8) ||
      (VAR_5[1] != 0x5f) ||
      (VAR_5[2] != 0x01) ||
      (VAR_5[3] != 0x00) ||
      (VAR_5[4] != VAR_8 - 2))
   goto unrecognized;

  VAR_7 = VAR_5 + VAR_8;
  VAR_5 += 5;

  while (VAR_5 < VAR_7) {
   u8 VAR_9;
   u16 VAR_10;

   VAR_10 = FUNC_5(*((u16 *) VAR_5));
   VAR_5 += sizeof(u16);
   VAR_9 = *VAR_5;
   VAR_5++;

   switch (VAR_10) {
   case 0x0200: {
    u32 VAR_11;
    VAR_11 = FUNC_6(*((u32 *)VAR_5));
    FUNC_0("DL chip limited to %d pixel modes\n",
     VAR_11);
    VAR_4->sku_pixel_limit = VAR_11;
    break;
   }
   default:
    break;
   }
   VAR_5 += VAR_9;
  }
 }

 goto success;

unrecognized:

 FUNC_1("Unrecognized vendor firmware descriptor\n");

success:
 FUNC_3(VAR_6);
 return 1;
}
