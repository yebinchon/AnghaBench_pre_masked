
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_link {TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_link *VAR_0, unsigned int VAR_1, u32 VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0->ap->host->dev);
 unsigned int VAR_4 = FUNC_0(VAR_0->ap, VAR_1);

 FUNC_1(VAR_3, VAR_4, VAR_2);
}
