
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm93_data {int sfc2; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2,
 struct lm93_data *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_1);
 int VAR_6;


 VAR_5 = (VAR_5 >> VAR_4) & 0x55;
 VAR_6 = VAR_5 & 0x01;
 VAR_6 |= (VAR_5 & 0x04) >> 1;
 VAR_6 |= (VAR_5 & 0x10) >> 2;
 VAR_6 |= (VAR_5 & 0x40) >> 3;


 VAR_3->sfc2 = FUNC_0(VAR_2, VAR_0);
 VAR_3->sfc2 &= ~VAR_6;
 FUNC_1(VAR_2, VAR_0, VAR_3->sfc2);
}
