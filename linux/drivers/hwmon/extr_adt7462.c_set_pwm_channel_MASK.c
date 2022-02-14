
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7462_data {int* pwm_cfg; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_2,
       struct adt7462_data *VAR_3,
       int VAR_4,
       int VAR_5)
{
 int VAR_6 = VAR_3->pwm_cfg[VAR_4] & ~VAR_0;
 VAR_6 |= VAR_5 << VAR_1;

 FUNC_2(&VAR_3->lock);
 VAR_3->pwm_cfg[VAR_4] = VAR_6;
 FUNC_1(VAR_2, FUNC_0(VAR_4), VAR_6);
 FUNC_3(&VAR_3->lock);
}
