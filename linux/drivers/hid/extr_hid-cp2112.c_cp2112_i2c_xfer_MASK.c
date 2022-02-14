
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; scalar_t__ len; int* buf; int addr; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;
struct hid_device {int dummy; } ;
struct cp2112_device {int hwversion; struct hid_device* hdev; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct hid_device*,int*,int,int ) ;
 scalar_t__ FUNC_1 (int*,int ,int*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int*,int ,int*,scalar_t__) ;
 int FUNC_3 (struct cp2112_device*,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (int*,int ,scalar_t__) ;
 int FUNC_5 (struct cp2112_device*) ;
 int FUNC_6 (struct hid_device*,char*,int,...) ;
 int FUNC_7 (struct hid_device*,char*,...) ;
 int FUNC_8 (struct hid_device*,int ) ;
 int FUNC_9 (struct hid_device*,char*,...) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_10, struct i2c_msg *VAR_11,
      int VAR_12)
{
 struct cp2112_device *VAR_13 = (struct cp2112_device *)VAR_10->algo_data;
 struct hid_device *VAR_14 = VAR_13->hdev;
 u8 VAR_15[64];
 ssize_t VAR_16;
 ssize_t VAR_17 = 0;
 u8 *VAR_18 = ((void*)0);
 unsigned int VAR_19;
 int VAR_20;

 FUNC_6(VAR_14, "I2C %d messages\n", VAR_12);

 if (VAR_12 == 1) {
  if (VAR_11->flags & VAR_6) {
   FUNC_6(VAR_14, "I2C read %#04x len %d\n",
    VAR_11->addr, VAR_11->len);
   VAR_17 = VAR_11->len;
   VAR_18 = VAR_11->buf;
   VAR_16 = FUNC_4(VAR_15, VAR_11->addr, VAR_11->len);
  } else {
   FUNC_6(VAR_14, "I2C write %#04x len %d\n",
    VAR_11->addr, VAR_11->len);
   VAR_16 = FUNC_2(VAR_15, VAR_11->addr,
           VAR_11->buf, VAR_11->len);
  }
  if (VAR_16 < 0)
   return VAR_16;
 } else if (VAR_13->hwversion > 1 &&
     VAR_12 == 2 &&
     VAR_11[0].addr == VAR_11[1].addr &&
     !(VAR_11[0].flags & VAR_6) && (VAR_11[1].flags & VAR_6)) {
  FUNC_6(VAR_14, "I2C write-read %#04x wlen %d rlen %d\n",
   VAR_11[0].addr, VAR_11[0].len, VAR_11[1].len);
  VAR_17 = VAR_11[1].len;
  VAR_18 = VAR_11[1].buf;
  VAR_16 = FUNC_1(VAR_15, VAR_11[0].addr,
    VAR_11[0].buf, VAR_11[0].len, VAR_11[1].len);
  if (VAR_16 < 0)
   return VAR_16;
 } else {
  FUNC_7(VAR_14,
   "Multi-message I2C transactions not supported\n");
  return -VAR_3;
 }

 VAR_20 = FUNC_8(VAR_14, VAR_7);
 if (VAR_20 < 0) {
  FUNC_7(VAR_14, "power management error: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_0(VAR_14, VAR_15, VAR_16, VAR_5);
 if (VAR_20 < 0) {
  FUNC_9(VAR_14, "Error starting transaction: %d\n", VAR_20);
  goto power_normal;
 }

 for (VAR_19 = 0; VAR_19 < VAR_9; ++VAR_19) {
  VAR_20 = FUNC_5(VAR_13);
  if (-VAR_1 == VAR_20)
   continue;
  if (VAR_20 < 0)
   goto power_normal;
  break;
 }

 if (VAR_9 <= VAR_19) {
  FUNC_9(VAR_14, "Transfer timed out, cancelling.\n");
  VAR_15[0] = VAR_0;
  VAR_15[1] = 0x01;

  VAR_20 = FUNC_0(VAR_14, VAR_15, 2, VAR_5);
  if (VAR_20 < 0)
   FUNC_9(VAR_14, "Error cancelling transaction: %d\n",
     VAR_20);

  VAR_20 = -VAR_4;
  goto power_normal;
 }

 for (VAR_16 = 0; VAR_16 < VAR_17;) {
  VAR_20 = FUNC_3(VAR_13, VAR_18 + VAR_16, VAR_17 - VAR_16);
  if (VAR_20 < 0)
   goto power_normal;
  if (VAR_20 == 0) {
   FUNC_7(VAR_14, "read returned 0\n");
   VAR_20 = -VAR_2;
   goto power_normal;
  }
  VAR_16 += VAR_20;
  if (VAR_16 > VAR_17) {
   FUNC_7(VAR_14, "long read: %d > %zd\n",
    VAR_20, VAR_17 - VAR_16 + VAR_20);
   VAR_20 = -VAR_2;
   goto power_normal;
  }
 }


 VAR_20 = VAR_12;

power_normal:
 FUNC_8(VAR_14, VAR_8);
 FUNC_6(VAR_14, "I2C transfer finished: %d\n", VAR_20);
 return VAR_20;
}
