
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_fsl_host_priv {int hcr_base; int irq; int rx_watermark; int intr_coalescing; } ;
struct platform_device {int dev; } ;
struct ata_host {struct sata_fsl_host_priv* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sata_fsl_host_priv*) ;
 struct ata_host* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_5(VAR_0);
 struct sata_fsl_host_priv *VAR_2 = VAR_1->private_data;

 FUNC_1(&VAR_0->dev, &VAR_2->intr_coalescing);
 FUNC_1(&VAR_0->dev, &VAR_2->rx_watermark);

 FUNC_0(VAR_1);

 FUNC_3(VAR_2->irq);
 FUNC_2(VAR_2->hcr_base);
 FUNC_4(VAR_2);

 return 0;
}
