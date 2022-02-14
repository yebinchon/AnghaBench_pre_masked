
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_device {scalar_t__ devno; TYPE_3__* link; } ;
struct TYPE_6__ {TYPE_2__* ap; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_4, u8 VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_4->link->ap->host->dev);
 int VAR_7 = VAR_4->devno ? VAR_2 : VAR_1;
 u32 VAR_8;

 FUNC_0(VAR_6, VAR_0, &VAR_8);
 VAR_8 &= ~(VAR_3 << VAR_7);
 VAR_8 |= VAR_5 << VAR_7;
 FUNC_1(VAR_6, VAR_0, VAR_8);
}
