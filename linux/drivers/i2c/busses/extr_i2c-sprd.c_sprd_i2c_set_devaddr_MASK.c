
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_i2c {scalar_t__ base; } ;
struct i2c_msg {int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sprd_i2c *VAR_1, struct i2c_msg *VAR_2)
{
 FUNC_0(VAR_2->addr << 1, VAR_1->base + VAR_0);
}
