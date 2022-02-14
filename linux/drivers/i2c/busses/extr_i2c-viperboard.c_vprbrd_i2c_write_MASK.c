
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int last; int chan; int spi; int len1; int len2; int addr; int cmd; } ;
struct vprbrd_i2c_write_msg {int data; TYPE_1__ header; } ;
struct vprbrd_i2c_write_hdr {int dummy; } ;
struct vprbrd {int usb_dev; scalar_t__ buf; } ;
struct i2c_msg {int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int ,struct vprbrd_i2c_write_msg*,int,int*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vprbrd *VAR_4, struct i2c_msg *VAR_5)
{
 int VAR_6, VAR_7;
 u16 VAR_8, VAR_9,
  VAR_10 = 0x0000;
 struct vprbrd_i2c_write_msg *VAR_11 =
  (struct vprbrd_i2c_write_msg *)VAR_4->buf;

 VAR_8 = VAR_5->len;
 VAR_11->header.cmd = VAR_2;
 VAR_11->header.last = 0x00;
 VAR_11->header.chan = 0x00;
 VAR_11->header.spi = 0x0000;
 while (VAR_8 > 0) {
  VAR_11->header.addr = FUNC_0(VAR_10 + 0x4000);
  if (VAR_8 > 503) {
   VAR_11->header.len1 = 0xff;
   VAR_11->header.len2 = 0xf8;
   VAR_8 -= 503;
   VAR_9 = 503 + sizeof(struct vprbrd_i2c_write_hdr);
   VAR_10 += 503;
  } else if (VAR_8 > 255) {
   VAR_11->header.len1 = 0xff;
   VAR_11->header.len2 = (VAR_8 - 255);
   VAR_9 = VAR_8 +
    sizeof(struct vprbrd_i2c_write_hdr);
   VAR_8 = 0;
  } else {
   VAR_11->header.len1 = VAR_8;
   VAR_11->header.len2 = 0x00;
   VAR_9 = VAR_8 +
    sizeof(struct vprbrd_i2c_write_hdr);
   VAR_8 = 0;
  }
  FUNC_1(VAR_11->data, VAR_5->buf + VAR_10,
   VAR_9 - sizeof(struct vprbrd_i2c_write_hdr));

  VAR_6 = FUNC_2(VAR_4->usb_dev,
   FUNC_3(VAR_4->usb_dev,
   VAR_1), VAR_11,
   VAR_9, &VAR_7, VAR_3);
  if ((VAR_6 < 0) || (VAR_9 != VAR_7))
   return -VAR_0;
 }
 return 0;
}
