
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_algo_sibyte_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_sibyte_data* algo_data; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i2c_algo_sibyte_data*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_18, u16 VAR_19,
        unsigned short VAR_20, char VAR_21,
        u8 VAR_22, int VAR_23, union i2c_smbus_data * VAR_24)
{
 struct i2c_algo_sibyte_data *VAR_25 = VAR_18->algo_data;
 int VAR_26 = 0;
 int VAR_27;

 while (FUNC_5(FUNC_0(VAR_25, VAR_11)) & VAR_4)
  ;

 switch (VAR_23) {
 case 129:
  FUNC_6((FUNC_1(VAR_19) |
      (VAR_21 == VAR_3 ? VAR_7 : 0) |
      VAR_14), FUNC_0(VAR_25, VAR_10));
  break;
 case 131:
  if (VAR_21 == VAR_3) {
   FUNC_6((FUNC_1(VAR_19) | VAR_15),
      FUNC_0(VAR_25, VAR_10));
   VAR_26 = 1;
  } else {
   FUNC_6(FUNC_2(VAR_22), FUNC_0(VAR_25, VAR_8));
   FUNC_6((FUNC_1(VAR_19) | VAR_16),
      FUNC_0(VAR_25, VAR_10));
  }
  break;
 case 130:
  FUNC_6(FUNC_2(VAR_22), FUNC_0(VAR_25, VAR_8));
  if (VAR_21 == VAR_3) {
   FUNC_6((FUNC_1(VAR_19) | VAR_12),
      FUNC_0(VAR_25, VAR_10));
   VAR_26 = 1;
  } else {
   FUNC_6(FUNC_3(VAR_24->byte),
      FUNC_0(VAR_25, VAR_9));
   FUNC_6((FUNC_1(VAR_19) | VAR_17),
      FUNC_0(VAR_25, VAR_10));
  }
  break;
 case 128:
  FUNC_6(FUNC_2(VAR_22), FUNC_0(VAR_25, VAR_8));
  if (VAR_21 == VAR_3) {
   FUNC_6((FUNC_1(VAR_19) | VAR_13),
      FUNC_0(VAR_25, VAR_10));
   VAR_26 = 2;
  } else {
   FUNC_6(FUNC_3(VAR_24->word & 0xff),
      FUNC_0(VAR_25, VAR_9));
   FUNC_6(FUNC_4(VAR_24->word >> 8),
      FUNC_0(VAR_25, VAR_9));
   FUNC_6((FUNC_1(VAR_19) | VAR_17),
      FUNC_0(VAR_25, VAR_10));
  }
  break;
 default:
  return -VAR_2;
 }

 while (FUNC_5(FUNC_0(VAR_25, VAR_11)) & VAR_4)
  ;

 VAR_27 = FUNC_5(FUNC_0(VAR_25, VAR_11));
 if (VAR_27 & VAR_5) {

  FUNC_6(VAR_5, FUNC_0(VAR_25, VAR_11));
  return (VAR_27 & VAR_6) ? -VAR_0 : -VAR_1;
 }

 if (VAR_26 == 1)
  VAR_24->byte = FUNC_5(FUNC_0(VAR_25, VAR_9)) & 0xff;
 if (VAR_26 == 2)
  VAR_24->word = FUNC_5(FUNC_0(VAR_25, VAR_9)) & 0xffff;

 return 0;
}
