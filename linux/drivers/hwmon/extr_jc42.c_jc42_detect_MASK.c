
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jc42_chips {int manid; int devid_mask; int devid; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct jc42_chips*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct i2c_adapter*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 struct jc42_chips* VAR_8 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9, struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_9->adapter;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if (!FUNC_1(VAR_11, VAR_1 |
         VAR_2))
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_9, VAR_4);
 VAR_13 = FUNC_2(VAR_9, VAR_5);
 VAR_15 = FUNC_2(VAR_9, VAR_7);
 VAR_16 = FUNC_2(VAR_9, VAR_6);

 if (VAR_14 < 0 || VAR_13 < 0 || VAR_15 < 0 || VAR_16 < 0)
  return -VAR_0;

 if ((VAR_14 & 0xff00) || (VAR_13 & 0xf800))
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
  struct jc42_chips *VAR_17 = &VAR_8[VAR_12];
  if (VAR_15 == VAR_17->manid &&
      (VAR_16 & VAR_17->devid_mask) == VAR_17->devid) {
   FUNC_3(VAR_10->type, "jc42", VAR_3);
   return 0;
  }
 }
 return -VAR_0;
}
