
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, void *VAR_2)
{
 VAR_0.dev.parent = &VAR_1->dev;
 return FUNC_0(&VAR_0);
}
