
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_host_kw {int mutex; } ;
struct pmac_i2c_bus {struct pmac_i2c_host_kw* hostdata; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pmac_i2c_bus *VAR_0)
{
 struct pmac_i2c_host_kw *VAR_1 = VAR_0->hostdata;
 FUNC_0(&VAR_1->mutex);
 return 0;
}
