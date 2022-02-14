
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int * block; void* word; void* byte; } ;
typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct slimpro_i2c_dev {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 char VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct slimpro_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct slimpro_i2c_dev*,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct slimpro_i2c_dev*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct slimpro_i2c_dev*,int ,int ,int ,int ,int ,void**) ;
 int FUNC_4 (struct slimpro_i2c_dev*,int ,int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_10, u16 VAR_11,
      unsigned short VAR_12, char VAR_13,
      u8 VAR_14, int VAR_15,
      union i2c_smbus_data *VAR_16)
{
 struct slimpro_i2c_dev *VAR_17 = FUNC_0(VAR_10);
 int VAR_18 = -VAR_1;
 u32 VAR_19;

 switch (VAR_15) {
 case 131:
  if (VAR_13 == VAR_3) {
   VAR_18 = FUNC_3(VAR_17, VAR_11, 0, 0,
          VAR_7,
          VAR_0, &VAR_19);
   VAR_16->byte = VAR_19;
  } else {
   VAR_18 = FUNC_4(VAR_17, VAR_11, VAR_14, VAR_8,
          VAR_7,
          0, 0);
  }
  break;
 case 130:
  if (VAR_13 == VAR_3) {
   VAR_18 = FUNC_3(VAR_17, VAR_11, VAR_14, VAR_8,
          VAR_7,
          VAR_0, &VAR_19);
   VAR_16->byte = VAR_19;
  } else {
   VAR_19 = VAR_16->byte;
   VAR_18 = FUNC_4(VAR_17, VAR_11, VAR_14, VAR_8,
          VAR_7,
          VAR_0, VAR_19);
  }
  break;
 case 128:
  if (VAR_13 == VAR_3) {
   VAR_18 = FUNC_3(VAR_17, VAR_11, VAR_14, VAR_8,
          VAR_7,
          VAR_9, &VAR_19);
   VAR_16->word = VAR_19;
  } else {
   VAR_19 = VAR_16->word;
   VAR_18 = FUNC_4(VAR_17, VAR_11, VAR_14, VAR_8,
          VAR_7,
          VAR_9, VAR_19);
  }
  break;
 case 132:
  if (VAR_13 == VAR_3) {
   VAR_18 = FUNC_1(VAR_17, VAR_11, VAR_14,
      VAR_8,
      VAR_7,
      VAR_2 + 1,
      VAR_5,
      &VAR_16->block[0]);

  } else {
   VAR_18 = FUNC_2(VAR_17, VAR_11, VAR_14,
      VAR_8,
      VAR_7,
      VAR_16->block[0] + 1,
      &VAR_16->block[0]);
  }
  break;
 case 129:
  if (VAR_13 == VAR_3) {
   VAR_18 = FUNC_1(VAR_17, VAR_11,
      VAR_14,
      VAR_8,
      VAR_6,
      VAR_2,
      VAR_4,
      &VAR_16->block[1]);
  } else {
   VAR_18 = FUNC_2(VAR_17, VAR_11, VAR_14,
      VAR_8,
      VAR_6,
      VAR_16->block[0],
      &VAR_16->block[1]);
  }
  break;
 default:
  break;
 }
 return VAR_18;
}
