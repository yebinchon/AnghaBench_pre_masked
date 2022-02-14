
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {int irq; struct device dev; } ;
struct TYPE_6__ {int of_node; int * funcs; } ;
struct TYPE_5__ {TYPE_3__ bridge; struct i2c_client* stdp4028_i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,int *,int ,int,char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (struct device*) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct i2c_client*,TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
           const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;

 FUNC_2(VAR_9);

 VAR_6->stdp4028_i2c = VAR_7;
 FUNC_3(VAR_7, VAR_6);


 VAR_6->bridge.funcs = &VAR_4;
 VAR_6->bridge.of_node = VAR_9->of_node;
 FUNC_1(&VAR_6->bridge);


 FUNC_4(VAR_7,
      VAR_3,
      VAR_2);

 if (!VAR_7->irq)
  return 0;

 return FUNC_0(&VAR_7->dev,
   VAR_7->irq, ((void*)0),
   VAR_5,
   VAR_1 | VAR_0,
   "ge-b850v3-lvds-dp", VAR_6);
}
