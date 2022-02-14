
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function {int dev; } ;
struct TYPE_2__ {char const* product_id; } ;
struct f01_data {TYPE_1__ properties; } ;


 struct f01_data* FUNC_0 (int *) ;

const char *FUNC_1(struct rmi_function *VAR_0)
{
 struct f01_data *VAR_1 = FUNC_0(&VAR_0->dev);

 return VAR_1->properties.product_id;
}
