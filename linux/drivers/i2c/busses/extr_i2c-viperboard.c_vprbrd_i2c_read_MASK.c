
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int len0; int len1; int len2; int len3; int len4; int len5; void* tf2; void* tf1; void* addr; int cmd; } ;
struct vprbrd_i2c_read_msg {TYPE_1__ header; } ;
struct vprbrd {int usb_dev; scalar_t__ buf; } ;
struct i2c_msg {int len; int buf; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,struct vprbrd_i2c_read_msg*,int) ;
 int FUNC_2 (int ,struct vprbrd_i2c_read_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct vprbrd *VAR_1, struct i2c_msg *VAR_2)
{
 int VAR_3;
 u16 VAR_4, VAR_5, VAR_6, VAR_7 = 0x0000;
 struct vprbrd_i2c_read_msg *VAR_8 =
  (struct vprbrd_i2c_read_msg *)VAR_1->buf;

 VAR_4 = VAR_2->len;
 VAR_8->header.cmd = VAR_0;
 while (VAR_4 > 0) {
  VAR_8->header.addr = FUNC_0(VAR_7 + 0x4000);
  if (VAR_4 <= 255) {
   VAR_5 = VAR_4;
   VAR_6 = 0x00;
   VAR_8->header.len0 = VAR_4;
   VAR_8->header.len1 = 0x00;
   VAR_8->header.len2 = 0x00;
   VAR_8->header.len3 = 0x00;
   VAR_8->header.len4 = 0x00;
   VAR_8->header.len5 = 0x00;
   VAR_4 = 0;
  } else if (VAR_4 <= 510) {
   VAR_5 = VAR_4;
   VAR_6 = 0x00;
   VAR_8->header.len0 = VAR_4 - 255;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0x00;
   VAR_8->header.len3 = 0x00;
   VAR_8->header.len4 = 0x00;
   VAR_8->header.len5 = 0x00;
   VAR_4 = 0;
  } else if (VAR_4 <= 512) {
   VAR_5 = VAR_4;
   VAR_6 = 0x00;
   VAR_8->header.len0 = VAR_4 - 510;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0xff;
   VAR_8->header.len3 = 0x00;
   VAR_8->header.len4 = 0x00;
   VAR_8->header.len5 = 0x00;
   VAR_4 = 0;
  } else if (VAR_4 <= 767) {
   VAR_5 = 512;
   VAR_6 = VAR_4 - 512;
   VAR_8->header.len0 = 0x02;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0xff;
   VAR_8->header.len3 = VAR_4 - 512;
   VAR_8->header.len4 = 0x00;
   VAR_8->header.len5 = 0x00;
   VAR_4 = 0;
  } else if (VAR_4 <= 1022) {
   VAR_5 = 512;
   VAR_6 = VAR_4 - 512;
   VAR_8->header.len0 = 0x02;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0xff;
   VAR_8->header.len3 = VAR_4 - 767;
   VAR_8->header.len4 = 0xff;
   VAR_8->header.len5 = 0x00;
   VAR_4 = 0;
  } else if (VAR_4 <= 1024) {
   VAR_5 = 512;
   VAR_6 = VAR_4 - 512;
   VAR_8->header.len0 = 0x02;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0xff;
   VAR_8->header.len3 = VAR_4 - 1022;
   VAR_8->header.len4 = 0xff;
   VAR_8->header.len5 = 0xff;
   VAR_4 = 0;
  } else {
   VAR_5 = 512;
   VAR_6 = 512;
   VAR_8->header.len0 = 0x02;
   VAR_8->header.len1 = 0xff;
   VAR_8->header.len2 = 0xff;
   VAR_8->header.len3 = 0x02;
   VAR_8->header.len4 = 0xff;
   VAR_8->header.len5 = 0xff;
   VAR_4 -= 1024;
   VAR_7 += 1024;
  }
  VAR_8->header.tf1 = FUNC_0(VAR_5);
  VAR_8->header.tf2 = FUNC_0(VAR_6);


  VAR_3 = FUNC_2(VAR_1->usb_dev, VAR_8, VAR_5);
  if (VAR_3 < 0)
   return VAR_3;

  FUNC_1(VAR_2->buf + VAR_7, VAR_8, VAR_5);


  if (VAR_6 > 0) {
   VAR_3 = FUNC_2(VAR_1->usb_dev, VAR_8, VAR_6);
   if (VAR_3 < 0)
    return VAR_3;

   FUNC_1(VAR_2->buf + VAR_7 + 512, VAR_8, VAR_6);
  }
 }
 return 0;
}
