
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {unsigned long bus_speed; int clks_per_count; void* icch; void* iccl; int clk; } ;


 void* FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static int FUNC_3(struct sh_mobile_i2c_data *VAR_0)
{
 unsigned long VAR_1;


 VAR_1 = FUNC_1(VAR_0->clk) / VAR_0->bus_speed;
 VAR_0->iccl = FUNC_0(VAR_1 * 5 / 9 - 1, VAR_0->clks_per_count);
 VAR_0->icch = FUNC_0(VAR_1 * 4 / 9 - 5, VAR_0->clks_per_count);

 return FUNC_2(VAR_0);
}
