
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pata_imx_priv {scalar_t__ host_regs; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {struct pata_imx_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,struct pata_imx_priv*) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pata_imx_priv *VAR_4 = VAR_2->host->private_data;
 u32 VAR_5;

 FUNC_3(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_4->host_regs + VAR_0);
 if (FUNC_2(VAR_3))
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_1(VAR_5, VAR_4->host_regs + VAR_0);
}
