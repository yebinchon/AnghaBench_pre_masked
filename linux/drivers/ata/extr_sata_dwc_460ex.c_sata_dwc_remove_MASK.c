
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_dwc_device {int phy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ata_host {struct sata_dwc_device* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (struct device*,char*) ;
 struct ata_host* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sata_dwc_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct ata_host *VAR_2 = FUNC_2(VAR_1);
 struct sata_dwc_device *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_2);

 FUNC_3(VAR_3->phy);






 FUNC_1(&VAR_0->dev, "done\n");
 return 0;
}
