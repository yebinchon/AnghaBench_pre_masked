
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_i2c_bus {scalar_t__ msgs_index; scalar_t__ msgs_count; } ;


 int FUNC_0 (struct aspeed_i2c_bus*) ;
 int FUNC_1 (struct aspeed_i2c_bus*) ;

__attribute__((used)) static void FUNC_2(struct aspeed_i2c_bus *VAR_0)
{
 if (VAR_0->msgs_index + 1 < VAR_0->msgs_count) {
  VAR_0->msgs_index++;
  FUNC_0(VAR_0);
 } else {
  FUNC_1(VAR_0);
 }
}
