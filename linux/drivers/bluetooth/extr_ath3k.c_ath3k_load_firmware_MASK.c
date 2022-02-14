
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;


 int FUNC_0 (char*,struct usb_device*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_9 ;
 int FUNC_7 (struct usb_device*,int,int *,int,int*,int) ;
 int FUNC_8 (struct usb_device*,int,int ,int ,int ,int ,int *,int,int ) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_device *VAR_10,
    const struct firmware *VAR_11)
{
 u8 *VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18 = VAR_11->size;

 FUNC_0("udev %p", VAR_10);

 VAR_15 = FUNC_10(VAR_10, 0);

 VAR_12 = FUNC_4(VAR_0, VAR_3);
 if (!VAR_12) {
  FUNC_1("Can't allocate memory chunk for firmware");
  return -VAR_1;
 }

 FUNC_5(VAR_12, VAR_11->data, VAR_2);
 VAR_14 = FUNC_8(VAR_10, VAR_15, VAR_7, VAR_8,
         0, 0, VAR_12, VAR_2,
         VAR_6);
 if (VAR_14 < 0) {
  FUNC_1("Can't change to loading configuration err");
  goto error;
 }
 VAR_17 += VAR_2;
 VAR_18 -= VAR_2;

 VAR_15 = FUNC_9(VAR_10, 0x02);

 while (VAR_18) {

  FUNC_11(VAR_5, VAR_4);

  VAR_16 = FUNC_6(VAR_9, VAR_18, VAR_0);
  FUNC_5(VAR_12, VAR_11->data + VAR_17, VAR_16);

  VAR_14 = FUNC_7(VAR_10, VAR_15, VAR_12, VAR_16,
     &VAR_13, 3000);

  if (VAR_14 || (VAR_13 != VAR_16)) {
   FUNC_2(VAR_14, VAR_13, VAR_16, VAR_18);
   goto error;
  }

  VAR_17 += VAR_16;
  VAR_18 -= VAR_16;
 }

error:
 FUNC_3(VAR_12);
 return VAR_14;
}
