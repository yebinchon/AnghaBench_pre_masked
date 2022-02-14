
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mma9551_mbox_response {int coco_err; int app_id; int nbytes; int req_bytes; int* buf; } ;
struct mma9551_mbox_request {int app_id; int cmd_off; int lower_off; int nbytes; int* buf; scalar_t__ start_mbox; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9,
       u8 VAR_10, u8 VAR_11, u16 VAR_12,
       u8 *VAR_13, int VAR_14,
       u8 *VAR_15, int VAR_16)
{
 struct mma9551_mbox_request VAR_17;
 struct mma9551_mbox_response VAR_18;
 struct i2c_msg VAR_19, VAR_20;
 u8 VAR_21, VAR_22;
 int VAR_23, VAR_24;

 if (VAR_12 >= 1 << 12) {
  FUNC_0(&VAR_9->dev, "register offset too large\n");
  return -VAR_0;
 }

 VAR_21 = 1 + VAR_6 + VAR_14;
 VAR_17.start_mbox = 0;
 VAR_17.app_id = VAR_10;
 VAR_17.cmd_off = VAR_11 | (VAR_12 >> 8);
 VAR_17.lower_off = VAR_12;

 if (VAR_11 == VAR_3)
  VAR_17.nbytes = VAR_14;
 else
  VAR_17.nbytes = VAR_16;
 if (VAR_14)
  FUNC_2(VAR_17.buf, VAR_13, VAR_14);

 VAR_20.addr = VAR_9->addr;
 VAR_20.flags = 0;
 VAR_20.len = VAR_21;
 VAR_20.buf = (u8 *)&VAR_17;

 VAR_23 = FUNC_1(VAR_9->adapter, &VAR_20, 1);
 if (VAR_23 < 0) {
  FUNC_0(&VAR_9->dev, "i2c write failed\n");
  return VAR_23;
 }

 VAR_24 = VAR_5;
 do {
  FUNC_3(VAR_4);

  VAR_19.addr = VAR_9->addr;
  VAR_19.flags = VAR_2;
  VAR_19.len = sizeof(VAR_18);
  VAR_19.buf = (u8 *)&VAR_18;

  VAR_23 = FUNC_1(VAR_9->adapter, &VAR_19, 1);
  if (VAR_23 < 0) {
   FUNC_0(&VAR_9->dev, "i2c read failed\n");
   return VAR_23;
  }

  if (VAR_18.coco_err & VAR_8)
   break;
 } while (--VAR_24 > 0);

 if (VAR_24 == 0) {
  FUNC_0(&VAR_9->dev,
   "timed out while waiting for command response\n");
  return -VAR_1;
 }

 if (VAR_18.app_id != VAR_10) {
  FUNC_0(&VAR_9->dev,
   "app_id mismatch in response got %02x expected %02x\n",
   VAR_18.app_id, VAR_10);
  return -VAR_0;
 }

 VAR_22 = VAR_18.coco_err & ~VAR_8;
 if (VAR_22 != VAR_7) {
  FUNC_0(&VAR_9->dev, "read returned error %x\n", VAR_22);
  return -VAR_0;
 }

 if (VAR_18.nbytes != VAR_18.req_bytes) {
  FUNC_0(&VAR_9->dev,
   "output length mismatch got %d expected %d\n",
   VAR_18.nbytes, VAR_18.req_bytes);
  return -VAR_0;
 }

 if (VAR_16)
  FUNC_2(VAR_15, VAR_18.buf, VAR_16);

 return 0;
}
