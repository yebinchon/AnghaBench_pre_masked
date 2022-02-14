
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->host->dev);

 if (FUNC_0(VAR_3))
  return VAR_0;

 return VAR_1;
}
