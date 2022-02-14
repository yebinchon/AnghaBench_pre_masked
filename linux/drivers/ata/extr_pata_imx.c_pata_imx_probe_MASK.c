
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct pata_imx_priv {scalar_t__ clk; scalar_t__ host_regs; } ;
struct TYPE_2__ {scalar_t__ ctl_addr; scalar_t__ altstatus_addr; scalar_t__ cmd_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int flags; int pio_mask; int * ops; } ;
struct ata_host {struct ata_port** ports; struct pata_imx_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct ata_host*,int,int ,int ,int *) ;
 struct ata_host* FUNC_4 (int *,int) ;
 int FUNC_5 (struct ata_port*,char*,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,struct resource*) ;
 struct pata_imx_priv* FUNC_11 (int *,int,int ) ;
 int VAR_13 ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct ata_host *VAR_16;
 struct ata_port *VAR_17;
 struct pata_imx_priv *VAR_18;
 int VAR_19 = 0;
 struct resource *VAR_20;
 int VAR_21;

 VAR_19 = FUNC_13(VAR_15, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_11(&VAR_15->dev,
    sizeof(struct pata_imx_priv), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->clk = FUNC_9(&VAR_15->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  FUNC_8(&VAR_15->dev, "Failed to get clock\n");
  return FUNC_1(VAR_18->clk);
 }

 VAR_21 = FUNC_7(VAR_18->clk);
 if (VAR_21)
  return VAR_21;

 VAR_16 = FUNC_4(&VAR_15->dev, 1);
 if (!VAR_16) {
  VAR_21 = -VAR_2;
  goto err;
 }

 VAR_16->private_data = VAR_18;
 VAR_17 = VAR_16->ports[0];

 VAR_17->ops = &VAR_13;
 VAR_17->pio_mask = VAR_1;
 VAR_17->flags |= VAR_0;

 VAR_20 = FUNC_14(VAR_15, VAR_4, 0);
 VAR_18->host_regs = FUNC_10(&VAR_15->dev, VAR_20);
 if (FUNC_0(VAR_18->host_regs)) {
  VAR_21 = FUNC_1(VAR_18->host_regs);
  goto err;
 }

 VAR_17->ioaddr.cmd_addr = VAR_18->host_regs + VAR_11;
 VAR_17->ioaddr.ctl_addr = VAR_18->host_regs + VAR_10;

 VAR_17->ioaddr.altstatus_addr = VAR_17->ioaddr.ctl_addr;

 FUNC_12(&VAR_17->ioaddr);

 FUNC_5(VAR_17, "cmd 0x%llx ctl 0x%llx",
  (unsigned long long)VAR_20->start + VAR_11,
  (unsigned long long)VAR_20->start + VAR_10);


 FUNC_2(VAR_7 |
   VAR_6,
   VAR_18->host_regs + VAR_5);

 FUNC_2(VAR_8,
   VAR_18->host_regs + VAR_9);


 VAR_21 = FUNC_3(VAR_16, VAR_19, VAR_12, 0,
    &VAR_14);

 if (VAR_21)
  goto err;

 return 0;
err:
 FUNC_6(VAR_18->clk);

 return VAR_21;
}
