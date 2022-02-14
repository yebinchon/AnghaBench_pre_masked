
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct via82cxxx_dev {int via_80w; TYPE_1__* via_config; } ;
struct pci_dev {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;
struct TYPE_5__ {int channel; int dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ide_host* FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static u8 FUNC_3(ide_hwif_t *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_1(VAR_5->dev);
 struct ide_host *VAR_7 = FUNC_0(VAR_6);
 struct via82cxxx_dev *VAR_8 = VAR_7->host_priv;

 if (FUNC_2(VAR_6))
  return VAR_1;

 if ((VAR_8->via_config->flags & VAR_4) && VAR_5->channel == 0)
  return VAR_3;

 if ((VAR_8->via_80w >> VAR_5->channel) & 1)
  return VAR_2;
 else
  return VAR_0;
}
