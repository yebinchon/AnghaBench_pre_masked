
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lpc2k_i2c {int is_last; int msg_status; scalar_t__ msg_idx; struct i2c_msg* msg; scalar_t__ base; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lpc2k_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct lpc2k_i2c*) ;
 int FUNC_2 (struct lpc2k_i2c*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_3, struct i2c_msg *VAR_4,
     int VAR_5)
{
 struct lpc2k_i2c *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_3(VAR_6->base + VAR_1);
 if (VAR_9 != VAR_2) {

  return FUNC_1(VAR_6);
 }


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {

  VAR_6->msg = &VAR_4[VAR_8];
  VAR_6->msg_idx = 0;
  VAR_6->msg_status = -VAR_0;
  VAR_6->is_last = (VAR_8 == (VAR_5 - 1));

  VAR_7 = FUNC_2(VAR_6, VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_5;
}
