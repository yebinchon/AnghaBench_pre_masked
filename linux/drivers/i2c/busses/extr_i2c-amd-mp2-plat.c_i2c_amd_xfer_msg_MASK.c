
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int flags; } ;
struct amd_i2c_common {struct i2c_msg* msg; } ;
struct amd_i2c_dev {struct amd_i2c_common common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_i2c_common*,int ) ;
 int FUNC_1 (struct amd_i2c_dev*) ;
 scalar_t__ FUNC_2 (struct amd_i2c_common*) ;
 int FUNC_3 (struct amd_i2c_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct amd_i2c_dev *VAR_4, struct i2c_msg *VAR_5)
{
 struct amd_i2c_common *VAR_6 = &VAR_4->common;

 FUNC_3(VAR_4);
 VAR_6->msg = VAR_5;

 if (VAR_5->len > 32)
  if (FUNC_2(VAR_6))
   return -VAR_0;

 if (VAR_5->flags & VAR_1)
  FUNC_0(VAR_6, VAR_2);
 else
  FUNC_0(VAR_6, VAR_3);

 return FUNC_1(VAR_4);
}
