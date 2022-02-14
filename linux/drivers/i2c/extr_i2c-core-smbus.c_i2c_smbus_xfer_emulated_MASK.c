
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {unsigned char byte; int word; int* block; } ;
typedef unsigned char u8 ;
typedef int u16 ;
struct i2c_msg {unsigned short flags; int len; unsigned char* buf; int addr; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;

 int VAR_7 ;






 char VAR_8 ;

 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_msg*) ;
 int FUNC_3 (unsigned char,struct i2c_msg*) ;
 unsigned char FUNC_4 (int ,struct i2c_msg*) ;
 int FUNC_5 (struct i2c_msg*,unsigned char) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static s32 FUNC_7(struct i2c_adapter *VAR_9, u16 VAR_10,
       unsigned short VAR_11,
       char VAR_12, u8 VAR_13, int VAR_14,
       union i2c_smbus_data *VAR_15)
{






 unsigned char VAR_16[VAR_7+3];
 unsigned char VAR_17[VAR_7+2];
 int VAR_18 = VAR_12 == VAR_8 ? 2 : 1;
 int VAR_19;
 u8 VAR_20 = 0;
 int VAR_21;
 struct i2c_msg VAR_22[2] = {
  {
   .addr = VAR_10,
   .flags = VAR_11,
   .len = 1,
   .buf = VAR_16,
  }, {
   .addr = VAR_10,
   .flags = VAR_11 | VAR_5,
   .len = 0,
   .buf = VAR_17,
  },
 };

 VAR_16[0] = VAR_13;
 switch (VAR_14) {
 case 129:
  VAR_22[0].len = 0;

  VAR_22[0].flags = VAR_11 | (VAR_12 == VAR_8 ?
     VAR_5 : 0);
  VAR_18 = 1;
  break;
 case 133:
  if (VAR_12 == VAR_8) {

   VAR_22[0].flags = VAR_5 | VAR_11;
   VAR_18 = 1;
  }
  break;
 case 132:
  if (VAR_12 == VAR_8)
   VAR_22[1].len = 1;
  else {
   VAR_22[0].len = 2;
   VAR_16[1] = VAR_15->byte;
  }
  break;
 case 128:
  if (VAR_12 == VAR_8)
   VAR_22[1].len = 2;
  else {
   VAR_22[0].len = 3;
   VAR_16[1] = VAR_15->word & 0xff;
   VAR_16[2] = VAR_15->word >> 8;
  }
  break;
 case 130:
  VAR_18 = 2;
  VAR_12 = VAR_8;
  VAR_22[0].len = 3;
  VAR_22[1].len = 2;
  VAR_16[1] = VAR_15->word & 0xff;
  VAR_16[2] = VAR_15->word >> 8;
  break;
 case 135:
  if (VAR_12 == VAR_8) {
   VAR_22[1].flags |= VAR_6;
   VAR_22[1].len = 1;

   FUNC_5(&VAR_22[1], 0);
  } else {
   VAR_22[0].len = VAR_15->block[0] + 2;
   if (VAR_22[0].len > VAR_7 + 2) {
    FUNC_1(&VAR_9->dev,
     "Invalid block write size %d\n",
     VAR_15->block[0]);
    return -VAR_0;
   }

   FUNC_5(&VAR_22[0], VAR_13);
   for (VAR_19 = 1; VAR_19 < VAR_22[0].len; VAR_19++)
    VAR_22[0].buf[VAR_19] = VAR_15->block[VAR_19 - 1];
  }
  break;
 case 134:
  VAR_18 = 2;
  VAR_12 = VAR_8;
  if (VAR_15->block[0] > VAR_7) {
   FUNC_1(&VAR_9->dev,
    "Invalid block write size %d\n",
    VAR_15->block[0]);
   return -VAR_0;
  }

  VAR_22[0].len = VAR_15->block[0] + 2;
  FUNC_5(&VAR_22[0], VAR_13);
  for (VAR_19 = 1; VAR_19 < VAR_22[0].len; VAR_19++)
   VAR_22[0].buf[VAR_19] = VAR_15->block[VAR_19 - 1];

  VAR_22[1].flags |= VAR_6;
  VAR_22[1].len = 1;

  FUNC_5(&VAR_22[1], 0);
  break;
 case 131:
  if (VAR_15->block[0] > VAR_7) {
   FUNC_1(&VAR_9->dev, "Invalid block %s size %d\n",
    VAR_12 == VAR_8 ? "read" : "write",
    VAR_15->block[0]);
   return -VAR_0;
  }

  if (VAR_12 == VAR_8) {
   VAR_22[1].len = VAR_15->block[0];
   FUNC_5(&VAR_22[1], 0);
  } else {
   VAR_22[0].len = VAR_15->block[0] + 1;

   FUNC_5(&VAR_22[0], VAR_13);
   for (VAR_19 = 1; VAR_19 <= VAR_15->block[0]; VAR_19++)
    VAR_22[0].buf[VAR_19] = VAR_15->block[VAR_19];
  }
  break;
 default:
  FUNC_1(&VAR_9->dev, "Unsupported transaction %d\n", VAR_14);
  return -VAR_2;
 }

 VAR_19 = ((VAR_11 & VAR_3) && VAR_14 != 129
          && VAR_14 != 131);
 if (VAR_19) {

  if (!(VAR_22[0].flags & VAR_5)) {
   if (VAR_18 == 1)
    FUNC_2(&VAR_22[0]);
   else
    VAR_20 = FUNC_4(0, &VAR_22[0]);
  }

  if (VAR_22[VAR_18-1].flags & VAR_5)
   VAR_22[VAR_18-1].len++;
 }

 VAR_21 = FUNC_0(VAR_9, VAR_22, VAR_18);
 if (VAR_21 < 0)
  goto cleanup;
 if (VAR_21 != VAR_18) {
  VAR_21 = -VAR_1;
  goto cleanup;
 }
 VAR_21 = 0;


 if (VAR_19 && (VAR_22[VAR_18-1].flags & VAR_5)) {
  VAR_21 = FUNC_3(VAR_20, &VAR_22[VAR_18-1]);
  if (VAR_21 < 0)
   goto cleanup;
 }

 if (VAR_12 == VAR_8)
  switch (VAR_14) {
  case 133:
   VAR_15->byte = VAR_16[0];
   break;
  case 132:
   VAR_15->byte = VAR_17[0];
   break;
  case 128:
  case 130:
   VAR_15->word = VAR_17[0] | (VAR_17[1] << 8);
   break;
  case 131:
   for (VAR_19 = 0; VAR_19 < VAR_15->block[0]; VAR_19++)
    VAR_15->block[VAR_19 + 1] = VAR_22[1].buf[VAR_19];
   break;
  case 135:
  case 134:
   for (VAR_19 = 0; VAR_19 < VAR_22[1].buf[0] + 1; VAR_19++)
    VAR_15->block[VAR_19] = VAR_22[1].buf[VAR_19];
   break;
  }

cleanup:
 if (VAR_22[0].flags & VAR_4)
  FUNC_6(VAR_22[0].buf);
 if (VAR_22[1].flags & VAR_4)
  FUNC_6(VAR_22[1].buf);

 return VAR_21;
}
