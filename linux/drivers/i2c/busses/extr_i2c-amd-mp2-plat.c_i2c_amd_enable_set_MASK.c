
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_i2c_common {int dummy; } ;
struct amd_i2c_dev {struct amd_i2c_common common; } ;


 int FUNC_0 (struct amd_i2c_common*,int) ;
 int FUNC_1 (struct amd_i2c_dev*) ;
 int FUNC_2 (struct amd_i2c_dev*) ;

__attribute__((used)) static int FUNC_3(struct amd_i2c_dev *VAR_0, bool VAR_1)
{
 struct amd_i2c_common *VAR_2 = &VAR_0->common;

 FUNC_2(VAR_0);
 FUNC_0(VAR_2, VAR_1);

 return FUNC_1(VAR_0);
}
