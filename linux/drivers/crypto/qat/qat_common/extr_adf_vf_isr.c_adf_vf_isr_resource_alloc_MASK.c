
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_accel_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adf_accel_dev*) ;
 scalar_t__ FUNC_1 (struct adf_accel_dev*) ;
 scalar_t__ FUNC_2 (struct adf_accel_dev*) ;
 scalar_t__ FUNC_3 (struct adf_accel_dev*) ;
 int FUNC_4 (struct adf_accel_dev*) ;

int FUNC_5(struct adf_accel_dev *VAR_1)
{
 if (FUNC_0(VAR_1))
  goto err_out;

 if (FUNC_3(VAR_1))
  goto err_out;

 if (FUNC_2(VAR_1))
  goto err_out;

 if (FUNC_1(VAR_1))
  goto err_out;

 return 0;
err_out:
 FUNC_4(VAR_1);
 return -VAR_0;
}
