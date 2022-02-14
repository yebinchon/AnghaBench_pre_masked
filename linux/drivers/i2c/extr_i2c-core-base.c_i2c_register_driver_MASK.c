
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {int name; int * bus; struct module* owner; } ;
struct i2c_driver {TYPE_1__ driver; int clients; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (struct i2c_driver*,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct module *VAR_4, struct i2c_driver *VAR_5)
{
 int VAR_6;


 if (FUNC_1(!VAR_3))
  return -VAR_0;


 VAR_5->driver.owner = VAR_4;
 VAR_5->driver.bus = &VAR_2;
 FUNC_0(&VAR_5->clients);




 VAR_6 = FUNC_2(&VAR_5->driver);
 if (VAR_6)
  return VAR_6;

 FUNC_4("driver [%s] registered\n", VAR_5->driver.name);


 FUNC_3(VAR_5, VAR_1);

 return 0;
}
