
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_ata_priv {int dummy; } ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; } ;
struct TYPE_2__ {struct mpc52xx_ata_priv* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mpc52xx_ata_priv*,int ) ;
 int FUNC_2 (struct mpc52xx_ata_priv*,int ,int) ;
 int FUNC_3 (struct mpc52xx_ata_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct mpc52xx_ata_priv *VAR_4 = VAR_2->host->private_data;
 int VAR_5;

 if (VAR_3->dma_mode >= VAR_1) {
  int VAR_6 = VAR_3->dma_mode - VAR_1;
  VAR_5 = FUNC_3(VAR_4, VAR_3->devno, VAR_6);
 } else {
  int VAR_7 = VAR_3->dma_mode - VAR_0;
  VAR_5 = FUNC_2(VAR_4, VAR_3->devno, VAR_7);
 }

 if (VAR_5) {
  FUNC_0(VAR_2->dev,
   "Trying to select invalid DMA mode %d\n",
   VAR_3->dma_mode);
  return;
 }

 FUNC_1(VAR_4, VAR_3->devno);
}
