
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ device; } ;
struct atp867x_priv {int dma_mode; scalar_t__ pci66mhz; } ;
struct ata_port {struct atp867x_priv* private_data; TYPE_1__* host; } ;
struct ata_device {int dma_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_8, struct ata_device *VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_2(VAR_8->host->dev);
 struct atp867x_priv *VAR_11 = VAR_8->private_data;
 u8 VAR_12 = VAR_9->dma_mode;
 u8 VAR_13;
 u8 VAR_14 = VAR_12 - VAR_7 + 1;
 if (VAR_11->pci66mhz && VAR_14 > VAR_4 &&
    (VAR_10->device == VAR_6 ||
     VAR_14 < VAR_5))
  VAR_14--;

 VAR_13 = FUNC_0(VAR_11->dma_mode);
 if (VAR_9->devno & 1) {
  VAR_13 = (VAR_13 & ~VAR_2) |
   (VAR_14 << VAR_3);
 } else {
  VAR_13 = (VAR_13 & ~VAR_0) |
   (VAR_14 << VAR_1);
 }
 FUNC_1(VAR_13, VAR_11->dma_mode);
}
