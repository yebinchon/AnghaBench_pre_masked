
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_i2c_data {int nmsgs; scalar_t__ state; scalar_t__ pos; struct i2c_msg* msg; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kempld_i2c_data* FUNC_0 (struct i2c_adapter*) ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_i2c_data*) ;
 int FUNC_3 (struct kempld_device_data*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_6, struct i2c_msg *VAR_7,
    int VAR_8)
{
 struct kempld_i2c_data *VAR_9 = FUNC_0(VAR_6);
 struct kempld_device_data *VAR_10 = VAR_9->pld;
 unsigned long VAR_11 = VAR_5 + VAR_1;
 int VAR_12;

 VAR_9->msg = VAR_7;
 VAR_9->pos = 0;
 VAR_9->nmsgs = VAR_8;
 VAR_9->state = VAR_4;


 while (FUNC_4(VAR_5, VAR_11)) {
  FUNC_1(VAR_10);
  VAR_12 = FUNC_2(VAR_9);
  FUNC_3(VAR_10);

  if (VAR_9->state == VAR_2 || VAR_9->state == VAR_3)
   return (VAR_9->state == VAR_2) ? VAR_8 : VAR_12;

  if (VAR_12 == 0)
   VAR_11 = VAR_5 + VAR_1;

  FUNC_5(5, 15);
 }

 VAR_9->state = VAR_3;

 return -VAR_0;
}
