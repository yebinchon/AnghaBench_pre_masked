
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_rcar_priv {int type; int sataint_mask; } ;
struct ata_host {int dev; struct sata_rcar_priv* private_data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sata_rcar_priv*) ;
 int FUNC_2 (struct sata_rcar_priv*) ;
 int FUNC_3 (struct sata_rcar_priv*) ;

__attribute__((used)) static void FUNC_4(struct ata_host *VAR_2)
{
 struct sata_rcar_priv *VAR_3 = VAR_2->private_data;

 VAR_3->sataint_mask = VAR_1;


 switch (VAR_3->type) {
 case 131:
  VAR_3->sataint_mask = VAR_0;
  FUNC_1(VAR_3);
  break;
 case 130:
 case 128:
  FUNC_2(VAR_3);
  break;
 case 129:
  break;
 default:
  FUNC_0(VAR_2->dev, "SATA phy is not initialized\n");
  break;
 }

 FUNC_3(VAR_3);
}
