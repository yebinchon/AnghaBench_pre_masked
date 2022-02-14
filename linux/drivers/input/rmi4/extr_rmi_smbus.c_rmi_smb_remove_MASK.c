
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_smb_xport {int xport; } ;
struct i2c_client {int dummy; } ;


 struct rmi_smb_xport* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct rmi_smb_xport *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->xport);

 return 0;
}
