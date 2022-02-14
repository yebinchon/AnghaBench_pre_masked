
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_driver {int (* alert ) (struct i2c_client*,int ,int ) ;} ;
struct TYPE_3__ {scalar_t__ driver; } ;
struct i2c_client {scalar_t__ addr; int flags; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct alert_data {scalar_t__ addr; int data; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 struct i2c_driver* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, void *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_2);
 struct alert_data *VAR_5 = VAR_3;
 struct i2c_driver *VAR_6;

 if (!VAR_4 || VAR_4->addr != VAR_5->addr)
  return 0;
 if (VAR_4->flags & VAR_1)
  return 0;





 FUNC_2(VAR_2);
 if (VAR_4->dev.driver) {
  VAR_6 = FUNC_6(VAR_4->dev.driver);
  if (VAR_6->alert)
   VAR_6->alert(VAR_4, VAR_5->type, VAR_5->data);
  else
   FUNC_1(&VAR_4->dev, "no driver alert()!\n");
 } else
  FUNC_0(&VAR_4->dev, "alert with no driver\n");
 FUNC_3(VAR_2);


 return -VAR_0;
}
