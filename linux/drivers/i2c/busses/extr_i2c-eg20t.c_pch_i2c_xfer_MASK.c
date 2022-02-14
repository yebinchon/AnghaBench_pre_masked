
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i2c_msg {scalar_t__ flags; } ;
struct i2c_algo_pch_data {int pch_i2c_xfer_in_progress; scalar_t__ pch_buff_mode_en; TYPE_1__* p_adapter_info; } ;
struct i2c_adapter {struct i2c_algo_pch_data* algo_data; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ pch_i2c_suspended; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_algo_pch_data*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,struct i2c_msg*,int,int) ;
 scalar_t__ FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter *VAR_3,
   struct i2c_msg *VAR_4, s32 VAR_5)
{
 struct i2c_msg *VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8;
 s32 VAR_9;

 struct i2c_algo_pch_data *VAR_10 = VAR_3->algo_data;

 VAR_9 = FUNC_0(&VAR_2);
 if (VAR_9)
  return VAR_9;

 if (VAR_10->p_adapter_info->pch_i2c_suspended) {
  FUNC_1(&VAR_2);
  return -VAR_0;
 }

 FUNC_2(VAR_10, "adap->p_adapter_info->pch_i2c_suspended is %d\n",
  VAR_10->p_adapter_info->pch_i2c_suspended);

 VAR_10->pch_i2c_xfer_in_progress = 1;

 for (VAR_7 = 0; VAR_7 < VAR_5 && VAR_9 >= 0; VAR_7++) {
  VAR_6 = &VAR_4[VAR_7];
  VAR_6->flags |= VAR_10->pch_buff_mode_en;
  VAR_8 = VAR_6->flags;
  FUNC_2(VAR_10,
   "After invoking I2C_MODE_SEL :flag= 0x%x\n", VAR_8);

  if ((VAR_8 & (VAR_1)) != 0) {
   VAR_9 = FUNC_3(VAR_3, VAR_6, (VAR_7 + 1 == VAR_5),
      (VAR_7 == 0));
  } else {
   VAR_9 = FUNC_4(VAR_3, VAR_6, (VAR_7 + 1 == VAR_5),
       (VAR_7 == 0));
  }
 }

 VAR_10->pch_i2c_xfer_in_progress = 0;

 FUNC_1(&VAR_2);

 return (VAR_9 < 0) ? VAR_9 : VAR_5;
}
