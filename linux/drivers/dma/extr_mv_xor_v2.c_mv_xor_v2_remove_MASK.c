
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mv_xor_v2_device {int desc_size; int clk; int irq_tasklet; TYPE_1__* msi_desc; int hw_desq; int hw_desq_virt; int dmadev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,struct mv_xor_v2_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ) ;
 struct mv_xor_v2_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct mv_xor_v2_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_2->dmadev);

 FUNC_3(&VAR_1->dev,
     VAR_2->desc_size * VAR_0,
     VAR_2->hw_desq_virt, VAR_2->hw_desq);

 FUNC_1(&VAR_1->dev, VAR_2->msi_desc->irq, VAR_2);

 FUNC_5(&VAR_1->dev);

 FUNC_6(&VAR_2->irq_tasklet);

 FUNC_0(VAR_2->clk);

 return 0;
}
