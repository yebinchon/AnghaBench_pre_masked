
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct i2c_client *VAR_1)
{
 if (FUNC_1(VAR_1))
  return;

 if (VAR_1->dev.of_node) {
  FUNC_4(VAR_1->dev.of_node, VAR_0);
  FUNC_5(VAR_1->dev.of_node);
 }

 if (FUNC_0(&VAR_1->dev))
  FUNC_2(FUNC_0(&VAR_1->dev));
 FUNC_3(&VAR_1->dev);
}
