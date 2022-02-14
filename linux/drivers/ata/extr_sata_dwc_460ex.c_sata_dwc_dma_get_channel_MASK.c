
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_dwc_device_port {int chan; struct sata_dwc_device* hsdev; } ;
struct sata_dwc_device {struct device* dev; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (struct sata_dwc_device_port*) ;

__attribute__((used)) static int FUNC_6(struct sata_dwc_device_port *VAR_0)
{
 struct sata_dwc_device *VAR_1 = VAR_0->hsdev;
 struct device *VAR_2 = VAR_1->dev;






 VAR_0->chan = FUNC_3(VAR_2, "sata-dma");
 if (FUNC_0(VAR_0->chan)) {
  FUNC_2(VAR_2, "failed to allocate dma channel: %ld\n",
   FUNC_1(VAR_0->chan));
  return FUNC_1(VAR_0->chan);
 }

 return 0;
}
