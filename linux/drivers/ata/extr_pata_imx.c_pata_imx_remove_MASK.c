
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pata_imx_priv {int clk; scalar_t__ host_regs; } ;
struct ata_host {struct pata_imx_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct ata_host*) ;
 int FUNC_2 (int ) ;
 struct ata_host* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct ata_host *VAR_2 = FUNC_3(VAR_1);
 struct pata_imx_priv *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_2);

 FUNC_0(0, VAR_3->host_regs + VAR_0);

 FUNC_2(VAR_3->clk);

 return 0;
}
