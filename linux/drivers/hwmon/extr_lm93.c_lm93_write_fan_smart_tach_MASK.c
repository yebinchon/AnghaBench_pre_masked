
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm93_data {int sf_tach_to_pwm; int sfc2; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,long) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2,
 struct lm93_data *VAR_3, int VAR_4, long VAR_5)
{

 VAR_3->sf_tach_to_pwm = FUNC_0(VAR_2, VAR_1);
 VAR_3->sf_tach_to_pwm &= ~(0x3 << VAR_4 * 2);
 VAR_3->sf_tach_to_pwm |= VAR_5 << VAR_4 * 2;
 FUNC_1(VAR_2, VAR_1, VAR_3->sf_tach_to_pwm);


 VAR_3->sfc2 = FUNC_0(VAR_2, VAR_0);
 if (VAR_5)
  VAR_3->sfc2 |= 1 << VAR_4;
 else
  VAR_3->sfc2 &= ~(1 << VAR_4);
 FUNC_1(VAR_2, VAR_0, VAR_3->sfc2);
}
