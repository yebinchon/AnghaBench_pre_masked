
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_device_id {unsigned int driver_data; } ;
struct device {int dummy; } ;
struct pci_dev {int vendor; int device; int revision; struct device dev; } ;
typedef struct ata_port_info {int flags; scalar_t__ private_data; } const ata_port_info ;
struct ata_port {int port_no; int flags; int * ops; int em_message_type; } ;
struct ata_host {int n_ports; struct ata_port** ports; int flags; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {unsigned long flags; int cap; int port_map; int em_msg_type; int irq; int irq_handler; int mmio; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahci_host_priv*,struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct ata_host*) ;
 int FUNC_10 (struct ata_host*,int *) ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_11 (struct pci_dev*,int,struct ahci_host_priv*) ;
 int FUNC_12 (struct pci_dev*,struct ahci_host_priv*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct ata_host*) ;
 int FUNC_16 (struct ata_host*) ;
 int FUNC_17 (struct ata_host*) ;
 int FUNC_18 (struct pci_dev*,struct ahci_host_priv*) ;
 struct ata_port_info const* VAR_39 ;
 int FUNC_19 (struct pci_dev*,int,struct ahci_host_priv*) ;
 int FUNC_20 (struct ata_host*) ;
 int FUNC_21 (struct ata_host*) ;
 scalar_t__ FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct ahci_host_priv*,struct ata_port_info const*) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_24 (struct ata_port*,struct ahci_host_priv*) ;
 int VAR_42 ;
 struct ata_host* FUNC_25 (struct device*,struct ata_port_info const**,int) ;
 int FUNC_26 (struct ata_port*,int,int,char*) ;
 int FUNC_27 (struct device*,int ) ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 int FUNC_28 (struct device*,char*) ;
 int FUNC_29 (struct device*,char*) ;
 struct ahci_host_priv* FUNC_30 (struct device*,int,int ) ;
 int FUNC_31 (int) ;
 scalar_t__ FUNC_32 (struct pci_dev*) ;
 int VAR_45 ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (struct pci_dev*,int) ;
 int FUNC_35 (struct pci_dev*,int ) ;
 int FUNC_36 (struct pci_dev*,int ,int*) ;
 int FUNC_37 (struct pci_dev*) ;
 int FUNC_38 (struct pci_dev*) ;
 int FUNC_39 (struct pci_dev*,int,int ) ;
 int * FUNC_40 (struct pci_dev*) ;
 int FUNC_41 (struct pci_dev*) ;
 int FUNC_42 (struct device*) ;

__attribute__((used)) static int FUNC_43(struct pci_dev *VAR_46, const struct pci_device_id *VAR_47)
{
 unsigned int VAR_48 = VAR_47->driver_data;
 struct ata_port_info VAR_49 = VAR_39[VAR_48];
 const struct ata_port_info *VAR_50[] = { &VAR_49, ((void*)0) };
 struct device *VAR_51 = &VAR_46->dev;
 struct ahci_host_priv *VAR_52;
 struct ata_host *VAR_53;
 int VAR_54, VAR_55, VAR_56;
 int VAR_57 = VAR_12;

 FUNC_0("ENTER\n");

 FUNC_1((int)VAR_21 > VAR_7);

 FUNC_27(&VAR_46->dev, VAR_23);




 if (VAR_46->vendor == VAR_35 && !VAR_45)
  return -VAR_25;


 if (FUNC_32(VAR_46))
  FUNC_13(VAR_46);





 if (VAR_46->vendor == VAR_36)
  FUNC_28(&VAR_46->dev,
    "PDC42819 can only drive SATA devices with this driver\n");


 if (VAR_46->vendor == VAR_37 && VAR_46->device == 0xCC06)
  VAR_57 = VAR_11;
 else if (VAR_46->vendor == 0x1c44 && VAR_46->device == 0x8000)
  VAR_57 = VAR_10;
 else if (VAR_46->vendor == VAR_33) {
  if (VAR_46->device == 0xa01c)
   VAR_57 = VAR_8;
  if (VAR_46->device == 0xa084)
   VAR_57 = VAR_9;
 }


 VAR_56 = FUNC_38(VAR_46);
 if (VAR_56)
  return VAR_56;

 if (VAR_46->vendor == VAR_34 &&
     (VAR_46->device == 0x2652 || VAR_46->device == 0x2653)) {
  u8 VAR_58;





  FUNC_36(VAR_46, VAR_32, &VAR_58);
  if (VAR_58 & 0x3) {
   FUNC_28(&VAR_46->dev,
     "controller is in combined mode, can't enable AHCI mode\n");
   return -VAR_25;
  }
 }




 VAR_56 = FUNC_39(VAR_46, 1 << VAR_57, VAR_22);
 if (VAR_56 == -VAR_24)
  FUNC_41(VAR_46);
 if (VAR_56)
  return VAR_56;

 VAR_52 = FUNC_30(VAR_51, sizeof(*VAR_52), VAR_27);
 if (!VAR_52)
  return -VAR_26;
 VAR_52->flags |= (unsigned long)VAR_49.private_data;


 if (VAR_48 == VAR_43 &&
     (VAR_46->revision == 0xa1 || VAR_46->revision == 0xa2))
  VAR_52->flags |= VAR_4;


 if (VAR_48 == VAR_44 && VAR_46->revision >= 0x40)
  VAR_52->flags &= ~VAR_1;


 if (FUNC_22(VAR_46))
  VAR_52->flags &= ~VAR_0;

 VAR_52->mmio = FUNC_40(VAR_46)[VAR_57];


 FUNC_19(VAR_46, VAR_57, VAR_52);


 if (FUNC_3(VAR_46))
  VAR_52->flags |= VAR_2;







 FUNC_18(VAR_46, VAR_52);





 FUNC_12(VAR_46, VAR_52);


 if (VAR_52->cap & VAR_29) {
  VAR_49.flags |= VAR_16;






  if (!(VAR_52->flags & VAR_3))
   VAR_49.flags |= VAR_14;







  VAR_49.flags |= VAR_15;
 }

 if (VAR_52->cap & VAR_30)
  VAR_49.flags |= VAR_19;

 FUNC_23(VAR_52, &VAR_49);

 if (FUNC_7(VAR_46)) {
  VAR_49.flags |= VAR_18;
  FUNC_28(&VAR_46->dev,
   "quirky BIOS, skipping spindown on poweroff\n");
 }

 if (FUNC_4(VAR_46)) {
  VAR_49.flags |= VAR_17;
  FUNC_29(&VAR_46->dev,
    "BIOS update required for Link Power Management support\n");
 }

 if (FUNC_6(VAR_46)) {
  VAR_52->flags |= VAR_5;
  FUNC_29(&VAR_46->dev,
    "BIOS update required for suspend/resume\n");
 }

 if (FUNC_5(VAR_46)) {
  VAR_52->flags |= VAR_6;
  FUNC_28(&VAR_46->dev,
    "online status unreliable, applying workaround\n");
 }



 FUNC_2(VAR_52, VAR_46);






 VAR_54 = FUNC_33(FUNC_14(VAR_52->cap), FUNC_31(VAR_52->port_map));

 VAR_53 = FUNC_25(&VAR_46->dev, VAR_50, VAR_54);
 if (!VAR_53)
  return -VAR_26;
 VAR_53->private_data = VAR_52;

 if (FUNC_11(VAR_46, VAR_54, VAR_52) < 0) {

  FUNC_34(VAR_46, 1);
 }
 VAR_52->irq = FUNC_35(VAR_46, 0);

 if (!(VAR_52->cap & VAR_31) || VAR_38)
  VAR_53->flags |= VAR_20;
 else
  FUNC_28(&VAR_46->dev, "SSS flag set, parallel bus scan disabled\n");

 if (VAR_49.flags & VAR_13)
  FUNC_21(VAR_53);

 for (VAR_55 = 0; VAR_55 < VAR_53->n_ports; VAR_55++) {
  struct ata_port *VAR_59 = VAR_53->ports[VAR_55];

  FUNC_26(VAR_59, VAR_57, -1, "abar");
  FUNC_26(VAR_59, VAR_57,
       0x100 + VAR_59->port_no * 0x80, "port");


  if (VAR_59->flags & VAR_13)
   VAR_59->em_message_type = VAR_52->em_msg_type;

  FUNC_24(VAR_59, VAR_52);


  if (!(VAR_52->port_map & (1 << VAR_55)))
   VAR_59->ops = &VAR_42;
 }


 FUNC_15(VAR_53);


 FUNC_9(VAR_53);


 VAR_56 = FUNC_8(VAR_46, VAR_52->cap & VAR_28);
 if (VAR_56)
  return VAR_56;

 VAR_56 = FUNC_20(VAR_53);
 if (VAR_56)
  return VAR_56;

 FUNC_16(VAR_53);
 FUNC_17(VAR_53);

 FUNC_37(VAR_46);

 VAR_56 = FUNC_10(VAR_53, &VAR_40);
 if (VAR_56)
  return VAR_56;

 FUNC_42(&VAR_46->dev);
 return 0;
}
