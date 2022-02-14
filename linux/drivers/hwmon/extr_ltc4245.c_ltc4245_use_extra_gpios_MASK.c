
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc4245_platform_data {int use_extra_gpios; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 struct ltc4245_platform_data* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static bool FUNC_2(struct i2c_client *VAR_0)
{
 struct ltc4245_platform_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct device_node *VAR_2 = VAR_0->dev.of_node;


 if (VAR_1)
  return VAR_1->use_extra_gpios;


 if (FUNC_1(VAR_2, "ltc4245,use-extra-gpios", ((void*)0)))
  return 1;

 return 0;
}
