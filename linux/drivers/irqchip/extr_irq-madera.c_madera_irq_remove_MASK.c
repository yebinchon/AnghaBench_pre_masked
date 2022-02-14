
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct madera {int irq_data; int irq; int * irq_dev; } ;


 struct madera* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct madera *VAR_1 = FUNC_0(VAR_0->dev.parent);





 VAR_1->irq_dev = ((void*)0);
 FUNC_1(VAR_1->irq, VAR_1->irq_data);

 return 0;
}
