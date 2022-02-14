
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct pxa_i2c {int use_pio; int fast_mode; TYPE_1__ adap; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
typedef enum pxa_i2c_types { ____Placeholder_pxa_i2c_types } pxa_i2c_types ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, struct pxa_i2c *VAR_2,
       enum pxa_i2c_types *VAR_3)
{
 struct device_node *VAR_4 = VAR_1->dev.of_node;
 const struct of_device_id *VAR_5 =
   FUNC_1(VAR_0, &VAR_1->dev);

 if (!VAR_5)
  return 1;


 VAR_2->adap.nr = -1;

 if (FUNC_0(VAR_4, "mrvl,i2c-polling", ((void*)0)))
  VAR_2->use_pio = 1;
 if (FUNC_0(VAR_4, "mrvl,i2c-fast-mode", ((void*)0)))
  VAR_2->fast_mode = 1;

 *VAR_3 = (enum pxa_i2c_types)(VAR_5->data);

 return 0;
}
