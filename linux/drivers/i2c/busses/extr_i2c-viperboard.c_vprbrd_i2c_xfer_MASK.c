
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_i2c_status {int dummy; } ;
struct vprbrd_i2c_addr_msg {int unknown2; int unknown3; int unknown1; void* len; int addr; void* cmd; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct i2c_msg {int flags; int len; int addr; } ;
struct i2c_adapter {int dev; scalar_t__ algo_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct vprbrd_i2c_addr_msg*) ;
 int FUNC_5 (struct vprbrd*,struct i2c_msg*) ;
 int FUNC_6 (struct i2c_adapter*,struct vprbrd_i2c_status*,int) ;
 int FUNC_7 (struct vprbrd*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3,
  int VAR_4)
{
 struct i2c_msg *VAR_5;
 int VAR_6, VAR_7,
  VAR_8 = 0;
 struct vprbrd *VAR_9 = (struct vprbrd *)VAR_2->algo_data;
 struct vprbrd_i2c_addr_msg *VAR_10 =
  (struct vprbrd_i2c_addr_msg *)VAR_9->buf;
 struct vprbrd_i2c_status *VAR_11 = (struct vprbrd_i2c_status *)VAR_9->buf;

 FUNC_1(&VAR_2->dev, "master xfer %d messages:\n", VAR_4);

 for (VAR_6 = 0 ; VAR_6 < VAR_4 ; VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];

  FUNC_1(&VAR_2->dev,
   "  %d: %s (flags %d) %d bytes to 0x%02x\n",
   VAR_6, VAR_5->flags & VAR_0 ? "read" : "write",
   VAR_5->flags, VAR_5->len, VAR_5->addr);

  FUNC_2(&VAR_9->lock);

  if (VAR_5->flags & VAR_0) {

   VAR_10->cmd = VAR_1;
   VAR_10->unknown2 = 0x00;
   VAR_10->unknown3 = 0x00;
   VAR_10->addr = VAR_5->addr;
   VAR_10->unknown1 = 0x01;
   VAR_10->len = FUNC_0(VAR_5->len);

   VAR_7 = FUNC_4(VAR_9->usb_dev, VAR_10);
   if (VAR_7 < 0)
    VAR_8 = VAR_7;

   VAR_7 = FUNC_5(VAR_9, VAR_5);
   if (VAR_7 < 0)
    VAR_8 = VAR_7;

   VAR_7 = FUNC_6(VAR_2, VAR_11, VAR_8);
   if (VAR_7 < 0)
    VAR_8 = VAR_7;

   if (VAR_8 < 0)
    goto error;
  } else {

   VAR_7 = FUNC_7(VAR_9, VAR_5);

   VAR_10->cmd = VAR_1;
   VAR_10->unknown2 = 0x00;
   VAR_10->unknown3 = 0x00;
   VAR_10->addr = VAR_5->addr;
   VAR_10->unknown1 = 0x00;
   VAR_10->len = FUNC_0(VAR_5->len);

   VAR_7 = FUNC_4(VAR_9->usb_dev, VAR_10);
   if (VAR_7 < 0)
    VAR_8 = VAR_7;

   VAR_7 = FUNC_6(VAR_2, VAR_11, VAR_8);
   if (VAR_7 < 0)
    VAR_8 = VAR_7;

   if (VAR_8 < 0)
    goto error;
  }
  FUNC_3(&VAR_9->lock);
 }
 return VAR_4;
error:
 FUNC_3(&VAR_9->lock);
 return VAR_8;
}
