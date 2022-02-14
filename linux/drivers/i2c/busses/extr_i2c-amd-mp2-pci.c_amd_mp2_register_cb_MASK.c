
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {struct amd_i2c_common** busses; } ;
struct amd_i2c_common {int bus_id; struct amd_mp2_dev* mp2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct amd_mp2_dev*) ;

int FUNC_2(struct amd_i2c_common *VAR_1)
{
 struct amd_mp2_dev *VAR_2 = VAR_1->mp2_dev;

 if (VAR_1->bus_id > 1)
  return -VAR_0;

 if (VAR_2->busses[VAR_1->bus_id]) {
  FUNC_0(FUNC_1(VAR_2),
   "Bus %d already taken!\n", VAR_1->bus_id);
  return -VAR_0;
 }

 VAR_2->busses[VAR_1->bus_id] = VAR_1;

 return 0;
}
