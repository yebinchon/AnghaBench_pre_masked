
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_device {int max_sectors; TYPE_3__* link; } ;
struct ahci_host_priv {int flags; } ;
struct TYPE_6__ {TYPE_2__* ap; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,char*) ;

__attribute__((used)) static void FUNC_1(struct ata_device *VAR_1)
{
 struct ahci_host_priv *VAR_2 = VAR_1->link->ap->host->private_data;

 if (VAR_2->flags & VAR_0) {
  VAR_1->max_sectors = 255;
  FUNC_0(VAR_1,
        "SB600 AHCI: limiting to 255 sectors per cmd\n");
 }
}
