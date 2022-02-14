
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {int ** busses; } ;
struct amd_i2c_common {size_t bus_id; struct amd_mp2_dev* mp2_dev; } ;



int FUNC_0(struct amd_i2c_common *VAR_0)
{
 struct amd_mp2_dev *VAR_1 = VAR_0->mp2_dev;

 VAR_1->busses[VAR_0->bus_id] = ((void*)0);

 return 0;
}
