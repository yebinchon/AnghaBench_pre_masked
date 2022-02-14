
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_i2c_common {int cmd_success; } ;
struct amd_i2c_dev {int cmd_complete; struct amd_i2c_common common; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amd_i2c_dev *VAR_0)
{
 struct amd_i2c_common *VAR_1 = &VAR_0->common;

 FUNC_0(&VAR_0->cmd_complete);
 VAR_1->cmd_success = 0;
}
