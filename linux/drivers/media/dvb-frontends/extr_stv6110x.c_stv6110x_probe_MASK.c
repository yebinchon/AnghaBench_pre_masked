
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv6110x_state {TYPE_1__* i2c; int * devctl; struct stv6110x_config* config; int frontend; } ;
struct stv6110x_config {int get_devctl; int frontend; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {struct stv6110x_config* platform_data; } ;
struct i2c_client {TYPE_1__* adapter; TYPE_2__ dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,struct stv6110x_state*) ;
 struct stv6110x_state* FUNC_2 (int,int ) ;
 int FUNC_3 (struct stv6110x_state*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct stv6110x_state*) ;
 int FUNC_5 (struct stv6110x_state*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_4,
     const struct i2c_device_id *VAR_5)
{
 struct stv6110x_config *VAR_6 = VAR_4->dev.platform_data;

 struct stv6110x_state *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->frontend = VAR_6->frontend;
 VAR_7->i2c = VAR_4->adapter;
 VAR_7->config = VAR_6;
 VAR_7->devctl = &VAR_2;

 FUNC_3(VAR_7);
 FUNC_5(VAR_7);
 FUNC_4(VAR_7);

 FUNC_0(&VAR_7->i2c->dev, "Probed STV6110x\n");

 FUNC_1(VAR_4, VAR_7);


 VAR_6->get_devctl = VAR_3;

 return 0;
}
