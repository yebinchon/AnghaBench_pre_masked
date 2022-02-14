
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct via82cxxx_dev {TYPE_1__* via_config; } ;
struct pci_dev {int dummy; } ;
struct ide_timing {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;
struct TYPE_11__ {int dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_12__ {int dn; int const pio_mode; int dma_mode; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_10__ {int udma_mask; } ;






 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int const,struct ide_timing*,unsigned int,unsigned int) ;
 int FUNC_2 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int ) ;
 struct ide_host* FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*,int ,struct ide_timing*) ;

__attribute__((used)) static void FUNC_6(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 ide_drive_t *VAR_4 = FUNC_0(VAR_3);
 struct pci_dev *VAR_5 = FUNC_4(VAR_2->dev);
 struct ide_host *VAR_6 = FUNC_3(VAR_5);
 struct via82cxxx_dev *VAR_7 = VAR_6->host_priv;
 struct ide_timing VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 const u8 VAR_12 = VAR_3->dma_mode;

 VAR_10 = 1000000000 / VAR_1;

 switch (VAR_7->via_config->udma_mask) {
 case 131: VAR_11 = VAR_10; break;
 case 130: VAR_11 = VAR_10/2; break;
 case 129: VAR_11 = VAR_10/3; break;
 case 128: VAR_11 = VAR_10/4; break;
 default: VAR_11 = VAR_10;
 }

 FUNC_1(VAR_3, VAR_12, &VAR_8, VAR_10, VAR_11);

 if (VAR_4) {
  FUNC_1(VAR_4, VAR_4->pio_mode, &VAR_9, VAR_10, VAR_11);
  FUNC_2(&VAR_9, &VAR_8, &VAR_8, VAR_0);
 }

 FUNC_5(VAR_2, VAR_3->dn, &VAR_8);
}
