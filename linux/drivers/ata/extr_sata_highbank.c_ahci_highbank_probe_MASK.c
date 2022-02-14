
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ecx_plat_data {int n_ports; } ;
typedef struct ata_port_info {int flags; scalar_t__ private_data; } const ata_port_info ;
struct ata_port {int port_no; int flags; int * ops; int em_message_type; } ;
struct ata_host {int n_ports; struct ata_port** ports; int flags; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {int irq; unsigned long flags; int cap; int port_map; int em_msg_type; struct ecx_plat_data* plat_data; int mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ata_port_info const VAR_13 ;
 int FUNC_1 (struct ata_host*,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct ata_host*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_host*,char*) ;
 int FUNC_5 (struct ata_host*) ;
 int FUNC_6 (struct device*,struct ahci_host_priv*) ;
 int VAR_15 ;
 struct ata_host* FUNC_7 (struct device*,struct ata_port_info const**,int ) ;
 int FUNC_8 (struct ata_port*,char*,...) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,int ,int ) ;
 void* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct device*,int ) ;
 int FUNC_15 (struct device*,struct ahci_host_priv*,struct ata_port_info const*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct resource*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct ahci_host_priv *VAR_18;
 struct ecx_plat_data *VAR_19;
 struct ata_host *VAR_20;
 struct resource *VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 u32 VAR_25;
 struct ata_port_info VAR_26 = VAR_13;
 const struct ata_port_info *VAR_27[] = { &VAR_26, ((void*)0) };

 VAR_21 = FUNC_18(VAR_16, VAR_11, 0);
 if (!VAR_21) {
  FUNC_9(VAR_17, "no mmio space\n");
  return -VAR_4;
 }

 VAR_22 = FUNC_17(VAR_16, 0);
 if (VAR_22 <= 0) {
  FUNC_9(VAR_17, "no irq\n");
  return -VAR_4;
 }

 VAR_18 = FUNC_11(VAR_17, sizeof(*VAR_18), VAR_6);
 if (!VAR_18) {
  FUNC_9(VAR_17, "can't alloc ahci_host_priv\n");
  return -VAR_5;
 }
 VAR_19 = FUNC_11(VAR_17, sizeof(*VAR_19), VAR_6);
 if (!VAR_19) {
  FUNC_9(VAR_17, "can't alloc ecx_plat_data\n");
  return -VAR_5;
 }

 VAR_18->irq = VAR_22;
 VAR_18->flags |= (unsigned long)VAR_26.private_data;

 VAR_18->mmio = FUNC_10(VAR_17, VAR_21->start, FUNC_19(VAR_21));
 if (!VAR_18->mmio) {
  FUNC_9(VAR_17, "can't map %pR\n", VAR_21);
  return -VAR_5;
 }

 VAR_24 = FUNC_14(VAR_17, VAR_18->mmio);
 if (VAR_24)
  return VAR_24;


 FUNC_6(VAR_17, VAR_18);


 if (VAR_18->cap & VAR_8)
  VAR_26.flags |= VAR_1;

 if (VAR_18->cap & VAR_9)
  VAR_26.flags |= VAR_2;

 if (VAR_18->cap & VAR_7)
  FUNC_12(VAR_17, FUNC_0(64));






 VAR_25 = FUNC_16(FUNC_3(VAR_18->cap), FUNC_13(VAR_18->port_map));

 VAR_19->n_ports = VAR_25;
 VAR_18->plat_data = VAR_19;
 FUNC_15(VAR_17, VAR_18, &VAR_26);

 VAR_20 = FUNC_7(VAR_17, VAR_27, VAR_25);
 if (!VAR_20) {
  VAR_24 = -VAR_5;
  goto err0;
 }

 VAR_20->private_data = VAR_18;

 if (!(VAR_18->cap & VAR_10) || VAR_14)
  VAR_20->flags |= VAR_3;

 for (VAR_23 = 0; VAR_23 < VAR_20->n_ports; VAR_23++) {
  struct ata_port *VAR_28 = VAR_20->ports[VAR_23];

  FUNC_8(VAR_28, "mmio %pR", VAR_21);
  FUNC_8(VAR_28, "port 0x%x", 0x100 + VAR_28->port_no * 0x80);


  if (VAR_28->flags & VAR_0)
   VAR_28->em_message_type = VAR_18->em_msg_type;


  if (!(VAR_18->port_map & (1 << VAR_23)))
   VAR_28->ops = &VAR_15;
 }

 VAR_24 = FUNC_5(VAR_20);
 if (VAR_24)
  goto err0;

 FUNC_2(VAR_20);
 FUNC_4(VAR_20, "platform");

 VAR_24 = FUNC_1(VAR_20, &VAR_12);
 if (VAR_24)
  goto err0;

 return 0;
err0:
 return VAR_24;
}
