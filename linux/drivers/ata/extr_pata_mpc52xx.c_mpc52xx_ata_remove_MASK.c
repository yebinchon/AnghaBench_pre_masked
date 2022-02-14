
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mpc52xx_ata_priv {int ata_irq; int dmatsk; } ;
struct ata_host {struct mpc52xx_ata_priv* private_data; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct ata_host* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int
FUNC_5(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_4(VAR_0);
 struct mpc52xx_ata_priv *VAR_2 = VAR_1->private_data;
 int VAR_3;


 FUNC_0(VAR_0);


 VAR_3 = FUNC_2(VAR_2->dmatsk);
 FUNC_3(VAR_3);
 FUNC_1(VAR_2->dmatsk);
 FUNC_3(VAR_2->ata_irq);

 return 0;
}
