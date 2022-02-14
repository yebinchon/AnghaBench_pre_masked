
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {scalar_t__ byte; scalar_t__ word; int* block; } ;
typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct stub_chip {size_t pointer; size_t bank_reg; int bank_sel; int bank_shift; int bank_mask; int* words; int bank_words; } ;
struct smbus_block_data {int len; int* block; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;





 char VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 struct stub_chip* VAR_7 ;
 int VAR_8 ;
 struct smbus_block_data* FUNC_1 (int *,struct stub_chip*,size_t,int) ;
 scalar_t__* FUNC_2 (struct stub_chip*,size_t) ;

__attribute__((used)) static s32 FUNC_3(struct i2c_adapter *VAR_9, u16 VAR_10, unsigned short VAR_11,
 char VAR_12, u8 VAR_13, int VAR_14, union i2c_smbus_data *VAR_15)
{
 s32 VAR_16;
 int VAR_17, VAR_18;
 struct stub_chip *VAR_19 = ((void*)0);
 struct smbus_block_data *VAR_20;
 u16 *VAR_21;


 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (VAR_10 == VAR_6[VAR_17]) {
   VAR_19 = VAR_7 + VAR_17;
   break;
  }
 }
 if (!VAR_19)
  return -VAR_1;

 switch (VAR_14) {

 case 129:
  FUNC_0(&VAR_9->dev, "smbus quick - addr 0x%02x\n", VAR_10);
  VAR_16 = 0;
  break;

 case 132:
  if (VAR_12 == VAR_5) {
   VAR_19->pointer = VAR_13;
   FUNC_0(&VAR_9->dev,
    "smbus byte - addr 0x%02x, wrote 0x%02x.\n",
    VAR_10, VAR_13);
  } else {
   VAR_21 = FUNC_2(VAR_19, VAR_19->pointer++);
   VAR_15->byte = *VAR_21 & 0xff;
   FUNC_0(&VAR_9->dev,
    "smbus byte - addr 0x%02x, read  0x%02x.\n",
    VAR_10, VAR_15->byte);
  }

  VAR_16 = 0;
  break;

 case 131:
  VAR_21 = FUNC_2(VAR_19, VAR_13);
  if (VAR_12 == VAR_5) {
   *VAR_21 &= 0xff00;
   *VAR_21 |= VAR_15->byte;
   FUNC_0(&VAR_9->dev,
    "smbus byte data - addr 0x%02x, wrote 0x%02x at 0x%02x.\n",
    VAR_10, VAR_15->byte, VAR_13);


   if (VAR_19->bank_words && VAR_13 == VAR_19->bank_reg) {
    VAR_19->bank_sel =
     (VAR_15->byte >> VAR_19->bank_shift)
     & VAR_19->bank_mask;
    FUNC_0(&VAR_9->dev,
     "switching to bank %u.\n",
     VAR_19->bank_sel);
   }
  } else {
   VAR_15->byte = *VAR_21 & 0xff;
   FUNC_0(&VAR_9->dev,
    "smbus byte data - addr 0x%02x, read  0x%02x at 0x%02x.\n",
    VAR_10, VAR_15->byte, VAR_13);
  }
  VAR_19->pointer = VAR_13 + 1;

  VAR_16 = 0;
  break;

 case 128:
  VAR_21 = FUNC_2(VAR_19, VAR_13);
  if (VAR_12 == VAR_5) {
   *VAR_21 = VAR_15->word;
   FUNC_0(&VAR_9->dev,
    "smbus word data - addr 0x%02x, wrote 0x%04x at 0x%02x.\n",
    VAR_10, VAR_15->word, VAR_13);
  } else {
   VAR_15->word = *VAR_21;
   FUNC_0(&VAR_9->dev,
    "smbus word data - addr 0x%02x, read  0x%04x at 0x%02x.\n",
    VAR_10, VAR_15->word, VAR_13);
  }

  VAR_16 = 0;
  break;

 case 130:




  if (VAR_15->block[0] > 256 - VAR_13)
   VAR_15->block[0] = 256 - VAR_13;
  VAR_18 = VAR_15->block[0];
  if (VAR_12 == VAR_5) {
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
    VAR_19->words[VAR_13 + VAR_17] &= 0xff00;
    VAR_19->words[VAR_13 + VAR_17] |= VAR_15->block[1 + VAR_17];
   }
   FUNC_0(&VAR_9->dev,
    "i2c block data - addr 0x%02x, wrote %d bytes at 0x%02x.\n",
    VAR_10, VAR_18, VAR_13);
  } else {
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
    VAR_15->block[1 + VAR_17] =
     VAR_19->words[VAR_13 + VAR_17] & 0xff;
   }
   FUNC_0(&VAR_9->dev,
    "i2c block data - addr 0x%02x, read  %d bytes at 0x%02x.\n",
    VAR_10, VAR_18, VAR_13);
  }

  VAR_16 = 0;
  break;

 case 133:




  VAR_20 = FUNC_1(&VAR_9->dev, VAR_19, VAR_13, 0);
  if (VAR_12 == VAR_5) {
   VAR_18 = VAR_15->block[0];
   if (VAR_18 == 0 || VAR_18 > VAR_4) {
    VAR_16 = -VAR_0;
    break;
   }
   if (VAR_20 == ((void*)0)) {
    VAR_20 = FUNC_1(&VAR_9->dev, VAR_19, VAR_13,
          1);
    if (VAR_20 == ((void*)0)) {
     VAR_16 = -VAR_2;
     break;
    }
   }

   if (VAR_18 > VAR_20->len)
    VAR_20->len = VAR_18;
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
    VAR_20->block[VAR_17] = VAR_15->block[VAR_17 + 1];

   VAR_19->words[VAR_13] = (VAR_20->block[0] << 8) | VAR_20->len;
   FUNC_0(&VAR_9->dev,
    "smbus block data - addr 0x%02x, wrote %d bytes at 0x%02x.\n",
    VAR_10, VAR_18, VAR_13);
  } else {
   if (VAR_20 == ((void*)0)) {
    FUNC_0(&VAR_9->dev,
     "SMBus block read command without prior block write not supported\n");
    VAR_16 = -VAR_3;
    break;
   }
   VAR_18 = VAR_20->len;
   VAR_15->block[0] = VAR_18;
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
    VAR_15->block[VAR_17 + 1] = VAR_20->block[VAR_17];
   FUNC_0(&VAR_9->dev,
    "smbus block data - addr 0x%02x, read  %d bytes at 0x%02x.\n",
    VAR_10, VAR_18, VAR_13);
  }

  VAR_16 = 0;
  break;

 default:
  FUNC_0(&VAR_9->dev, "Unsupported I2C/SMBus command\n");
  VAR_16 = -VAR_3;
  break;
 }

 return VAR_16;
}
