
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv6110x_state {struct stv6110x_devctl* devctl; } ;
struct stv6110x_devctl {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct stv6110x_state* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static struct stv6110x_devctl *FUNC_2(struct i2c_client *VAR_0)
{
 struct stv6110x_state *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 return VAR_1->devctl;
}
