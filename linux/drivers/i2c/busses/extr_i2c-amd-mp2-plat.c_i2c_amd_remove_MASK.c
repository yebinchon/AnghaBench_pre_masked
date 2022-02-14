
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct amd_i2c_common {int * mp2_dev; } ;
struct amd_i2c_dev {int adap; struct amd_i2c_common common; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd_i2c_common*) ;
 int FUNC_1 (struct amd_i2c_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 struct amd_i2c_dev* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct amd_i2c_dev *VAR_2 = FUNC_5(VAR_1);
 struct amd_i2c_common *VAR_3 = &VAR_2->common;

 FUNC_3(&VAR_2->adap, VAR_0);

 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_3);
 VAR_3->mp2_dev = ((void*)0);

 FUNC_4(&VAR_2->adap, VAR_0);

 FUNC_2(&VAR_2->adap);
 return 0;
}
