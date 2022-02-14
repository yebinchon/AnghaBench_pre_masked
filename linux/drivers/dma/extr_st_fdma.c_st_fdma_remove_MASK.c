
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_fdma_dev {int slim_rproc; int irq; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,int ,struct st_fdma_dev*) ;
 int FUNC_1 (int ) ;
 struct st_fdma_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct st_fdma_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, VAR_1->irq, VAR_1);
 FUNC_3(VAR_1->slim_rproc);
 FUNC_1(VAR_0->dev.of_node);

 return 0;
}
