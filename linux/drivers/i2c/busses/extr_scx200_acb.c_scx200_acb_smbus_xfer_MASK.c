
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int* block; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct scx200_acb_iface {int address_byte; int command; int* ptr; int len; int result; scalar_t__ state; int mutex; scalar_t__ needs_reset; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 char VAR_4 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 struct scx200_acb_iface* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct scx200_acb_iface*) ;
 int FUNC_10 (struct scx200_acb_iface*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static s32 FUNC_11(struct i2c_adapter *VAR_8,
     u16 VAR_9, unsigned short VAR_10,
     char VAR_11, u8 VAR_12, int VAR_13,
     union i2c_smbus_data *VAR_14)
{
 struct scx200_acb_iface *VAR_15 = FUNC_2(VAR_8);
 int VAR_16;
 u8 *VAR_17;
 u16 VAR_18;
 int VAR_19;

 switch (VAR_13) {
 case 129:
  VAR_16 = 0;
  VAR_17 = ((void*)0);
  break;

 case 132:
  VAR_16 = 1;
  VAR_17 = VAR_11 ? &VAR_14->byte : &VAR_12;
  break;

 case 131:
  VAR_16 = 1;
  VAR_17 = &VAR_14->byte;
  break;

 case 128:
  VAR_16 = 2;
  VAR_18 = FUNC_0(VAR_14->word);
  VAR_17 = (u8 *)&VAR_18;
  break;

 case 130:
  VAR_16 = VAR_14->block[0];
  if (VAR_16 == 0 || VAR_16 > VAR_3)
   return -VAR_2;
  VAR_17 = &VAR_14->block[1];
  break;

 default:
  return -VAR_2;
 }

 FUNC_1(&VAR_8->dev,
  "size=%d, address=0x%x, command=0x%x, len=%d, read=%d\n",
  VAR_13, VAR_9, VAR_12, VAR_16, VAR_11);

 if (!VAR_16 && VAR_11 == VAR_4) {
  FUNC_1(&VAR_8->dev, "zero length read\n");
  return -VAR_2;
 }

 FUNC_5(&VAR_15->mutex);

 VAR_15->address_byte = (VAR_9 << 1) | VAR_11;
 VAR_15->command = VAR_12;
 VAR_15->ptr = VAR_17;
 VAR_15->len = VAR_16;
 VAR_15->result = -VAR_2;
 VAR_15->needs_reset = 0;

 FUNC_7(FUNC_3(VAR_0) | VAR_1, VAR_0);

 if (VAR_13 == 129 || VAR_13 == 132)
  VAR_15->state = VAR_7;
 else
  VAR_15->state = VAR_5;

 while (VAR_15->state != VAR_6)
  FUNC_9(VAR_15);

 if (VAR_15->needs_reset)
  FUNC_10(VAR_15);

 VAR_19 = VAR_15->result;

 FUNC_6(&VAR_15->mutex);

 if (VAR_19 == 0 && VAR_13 == 128 && VAR_11 == VAR_4)
  VAR_14->word = FUNC_4(VAR_18);
 return VAR_19;
}
