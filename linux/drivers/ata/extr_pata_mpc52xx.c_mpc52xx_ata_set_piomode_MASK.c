
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_ata_priv {int dummy; } ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {int pio_mode; int devno; } ;
struct TYPE_2__ {struct mpc52xx_ata_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mpc52xx_ata_priv*,int ) ;
 int FUNC_2 (struct mpc52xx_ata_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct mpc52xx_ata_priv *VAR_3 = VAR_1->host->private_data;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->pio_mode - VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_2->devno, VAR_4);

 if (VAR_5) {
  FUNC_0(VAR_1->dev, "error: invalid PIO mode: %d\n", VAR_4);
  return;
 }

 FUNC_1(VAR_3, VAR_2->devno);
}
