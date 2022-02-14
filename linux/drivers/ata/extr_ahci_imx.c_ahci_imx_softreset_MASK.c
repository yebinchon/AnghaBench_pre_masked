
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imx_ahci_priv {scalar_t__ type; } ;
struct ata_port {int dev; } ;
struct ata_link {struct ata_port* ap; } ;
struct ata_host {struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {struct imx_ahci_priv* plat_data; } ;
struct TYPE_4__ {int (* softreset ) (struct ata_link*,unsigned int*,unsigned long) ;} ;
struct TYPE_3__ {int (* softreset ) (struct ata_link*,unsigned int*,unsigned long) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct ata_host* FUNC_0 (int ) ;
 int FUNC_1 (struct ata_link*,unsigned int*,unsigned long) ;
 int FUNC_2 (struct ata_link*,unsigned int*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_4, unsigned int *VAR_5,
         unsigned long VAR_6)
{
 struct ata_port *VAR_7 = VAR_4->ap;
 struct ata_host *VAR_8 = FUNC_0(VAR_7->dev);
 struct ahci_host_priv *VAR_9 = VAR_8->private_data;
 struct imx_ahci_priv *VAR_10 = VAR_9->plat_data;
 int VAR_11 = -VAR_1;

 if (VAR_10->type == VAR_0)
  VAR_11 = VAR_3.softreset(VAR_4, VAR_5, VAR_6);
 else
  VAR_11 = VAR_2.softreset(VAR_4, VAR_5, VAR_6);

 return VAR_11;
}
