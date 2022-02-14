
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct bcma_device {TYPE_1__ dev; int irq; } ;


 struct device_node* FUNC_0 (struct device*,struct bcma_device*) ;
 int FUNC_1 (struct device*,struct bcma_device*,int ) ;
 int FUNC_2 (TYPE_1__*,struct device_node*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
    struct bcma_device *VAR_1)
{
 struct device_node *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_1->dev.of_node = VAR_2;

 VAR_1->irq = FUNC_1(VAR_0, VAR_1, 0);

 FUNC_2(&VAR_1->dev, VAR_2, 0);
}
