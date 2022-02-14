
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct pata_pxa_data {int dma_chan; } ;
struct ata_host {TYPE_1__** ports; } ;
struct TYPE_2__ {struct pata_pxa_data* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int ) ;
 struct ata_host* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_2(VAR_0);
 struct pata_pxa_data *VAR_2 = VAR_1->ports[0]->private_data;

 FUNC_1(VAR_2->dma_chan);

 FUNC_0(VAR_1);

 return 0;
}
