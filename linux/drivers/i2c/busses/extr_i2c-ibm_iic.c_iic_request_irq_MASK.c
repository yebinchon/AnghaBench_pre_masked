
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ibm_iic_private {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ibm_iic_private*,int ) ;
 int FUNC_2 (struct device_node*,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,char*,struct ibm_iic_private*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
         struct ibm_iic_private *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 int VAR_5;

 if (VAR_0)
  return 0;

 VAR_5 = FUNC_2(VAR_4, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_2->dev, "irq_of_parse_and_map failed\n");
  return 0;
 }




 FUNC_1(VAR_3, 0);
 if (FUNC_3(VAR_5, VAR_1, 0, "IBM IIC", VAR_3)) {
  FUNC_0(&VAR_2->dev, "request_irq %d failed\n", VAR_5);

  return 0;
 }

 return VAR_5;
}
