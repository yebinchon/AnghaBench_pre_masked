
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; size_t* block; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {scalar_t__ algo_data; } ;
struct hid_device {int dummy; } ;
struct cp2112_device {struct hid_device* hdev; } ;
typedef scalar_t__ ssize_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 size_t VAR_7 ;





 char VAR_8 ;

 char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct hid_device*,int*,int,int ) ;
 int FUNC_1 (struct cp2112_device*,int*,size_t) ;
 scalar_t__ FUNC_2 (int*,int ,size_t) ;
 scalar_t__ FUNC_3 (int*,int ,size_t,int,int*,int) ;
 scalar_t__ FUNC_4 (int*,int ,int,int*,int) ;
 int FUNC_5 (struct cp2112_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hid_device*,char*,...) ;
 int FUNC_8 (struct hid_device*,char*,int) ;
 int FUNC_9 (struct hid_device*,int ) ;
 int FUNC_10 (struct hid_device*,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_13, u16 VAR_14,
         unsigned short VAR_15, char VAR_16, u8 VAR_17,
         int VAR_18, union i2c_smbus_data *VAR_19)
{
 struct cp2112_device *VAR_20 = (struct cp2112_device *)VAR_13->algo_data;
 struct hid_device *VAR_21 = VAR_20->hdev;
 u8 VAR_22[64];
 __le16 VAR_23;
 ssize_t VAR_24;
 size_t VAR_25 = 0;
 unsigned int VAR_26;
 int VAR_27;

 FUNC_7(VAR_21, "%s addr 0x%x flags 0x%x cmd 0x%x size %d\n",
  VAR_16 == VAR_9 ? "write" : "read",
  VAR_14, VAR_15, VAR_17, VAR_18);

 switch (VAR_18) {
 case 132:
  VAR_25 = 1;

  if (VAR_8 == VAR_16)
   VAR_24 = FUNC_2(VAR_22, VAR_14, VAR_25);
  else
   VAR_24 = FUNC_4(VAR_22, VAR_14, VAR_17, ((void*)0),
       0);
  break;
 case 131:
  VAR_25 = 1;

  if (VAR_8 == VAR_16)
   VAR_24 = FUNC_3(VAR_22, VAR_14, VAR_25,
            VAR_17, ((void*)0), 0);
  else
   VAR_24 = FUNC_4(VAR_22, VAR_14, VAR_17,
       &VAR_19->byte, 1);
  break;
 case 128:
  VAR_25 = 2;
  VAR_23 = FUNC_6(VAR_19->word);

  if (VAR_8 == VAR_16)
   VAR_24 = FUNC_3(VAR_22, VAR_14, VAR_25,
            VAR_17, ((void*)0), 0);
  else
   VAR_24 = FUNC_4(VAR_22, VAR_14, VAR_17,
       (u8 *)&VAR_23, 2);
  break;
 case 129:
  VAR_18 = 128;
  VAR_16 = VAR_8;
  VAR_25 = 2;
  VAR_23 = FUNC_6(VAR_19->word);

  VAR_24 = FUNC_3(VAR_22, VAR_14, VAR_25, VAR_17,
           (u8 *)&VAR_23, 2);
  break;
 case 130:
  if (VAR_16 == VAR_8) {
   VAR_25 = VAR_19->block[0];
   VAR_24 = FUNC_3(VAR_22, VAR_14, VAR_25,
            VAR_17, ((void*)0), 0);
  } else {
   VAR_24 = FUNC_4(VAR_22, VAR_14, VAR_17,
       VAR_19->block + 1,
       VAR_19->block[0]);
  }
  break;
 case 134:
  if (VAR_8 == VAR_16) {
   VAR_24 = FUNC_3(VAR_22, VAR_14,
            VAR_7,
            VAR_17, ((void*)0), 0);
  } else {
   VAR_24 = FUNC_4(VAR_22, VAR_14, VAR_17,
       VAR_19->block,
       VAR_19->block[0] + 1);
  }
  break;
 case 133:
  VAR_18 = 134;
  VAR_16 = VAR_8;

  VAR_24 = FUNC_3(VAR_22, VAR_14, VAR_7,
           VAR_17, VAR_19->block,
           VAR_19->block[0] + 1);
  break;
 default:
  FUNC_10(VAR_21, "Unsupported transaction %d\n", VAR_18);
  return -VAR_3;
 }

 if (VAR_24 < 0)
  return VAR_24;

 VAR_27 = FUNC_9(VAR_21, VAR_10);
 if (VAR_27 < 0) {
  FUNC_8(VAR_21, "power management error: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_0(VAR_21, VAR_22, VAR_24, VAR_6);
 if (VAR_27 < 0) {
  FUNC_10(VAR_21, "Error starting transaction: %d\n", VAR_27);
  goto power_normal;
 }

 for (VAR_26 = 0; VAR_26 < VAR_12; ++VAR_26) {
  VAR_27 = FUNC_5(VAR_20);
  if (-VAR_1 == VAR_27)
   continue;
  if (VAR_27 < 0)
   goto power_normal;
  break;
 }

 if (VAR_12 <= VAR_26) {
  FUNC_10(VAR_21, "Transfer timed out, cancelling.\n");
  VAR_22[0] = VAR_0;
  VAR_22[1] = 0x01;

  VAR_27 = FUNC_0(VAR_21, VAR_22, 2, VAR_6);
  if (VAR_27 < 0)
   FUNC_10(VAR_21, "Error cancelling transaction: %d\n",
     VAR_27);

  VAR_27 = -VAR_5;
  goto power_normal;
 }

 if (VAR_9 == VAR_16) {
  VAR_27 = 0;
  goto power_normal;
 }

 if (134 == VAR_18)
  VAR_25 = VAR_27;

 VAR_27 = FUNC_1(VAR_20, VAR_22, VAR_25);
 if (VAR_27 < 0)
  goto power_normal;
 if (VAR_27 != VAR_25) {
  FUNC_10(VAR_21, "short read: %d < %zd\n", VAR_27, VAR_25);
  VAR_27 = -VAR_2;
  goto power_normal;
 }

 switch (VAR_18) {
 case 132:
 case 131:
  VAR_19->byte = VAR_22[0];
  break;
 case 128:
  VAR_19->word = FUNC_11((__le16 *)VAR_22);
  break;
 case 130:
  FUNC_12(VAR_19->block + 1, VAR_22, VAR_25);
  break;
 case 134:
  if (VAR_25 > VAR_7) {
   VAR_27 = -VAR_4;
   goto power_normal;
  }

  FUNC_12(VAR_19->block, VAR_22, VAR_25);
  break;
 }

 VAR_27 = 0;
power_normal:
 FUNC_9(VAR_21, VAR_11);
 FUNC_7(VAR_21, "transfer finished: %d\n", VAR_27);
 return VAR_27;
}
