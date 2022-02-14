
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct fpga_manager {int dummy; } ;
struct altera_cvp_conf {int vsec_offset; scalar_t__ map; int mgr_name; int write_data; int * priv; struct pci_dev* pci_dev; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 struct fpga_manager* FUNC_2 (int *,int ,int *,struct altera_cvp_conf*) ;
 struct altera_cvp_conf* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct fpga_manager*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__) ;
 char* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_10 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ,char*) ;
 int FUNC_13 (struct pci_dev*,struct fpga_manager*) ;
 int FUNC_14 (struct pci_dev*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_18,
       const struct pci_device_id *VAR_19)
{
 struct altera_cvp_conf *VAR_20;
 struct fpga_manager *VAR_21;
 int VAR_22, VAR_23;
 u16 VAR_24, VAR_25;
 u32 VAR_26;


 VAR_23 = FUNC_5(VAR_18, 0, VAR_7);
 if (!VAR_23) {
  FUNC_0(&VAR_18->dev, "No Vendor Specific Offset.\n");
  return -VAR_2;
 }






 FUNC_10(VAR_18, VAR_23 + VAR_11, &VAR_25);
 if (VAR_25 != VAR_12) {
  FUNC_0(&VAR_18->dev, "Wrong EXT_CAP_ID value 0x%x\n", VAR_25);
  return -VAR_2;
 }

 FUNC_9(VAR_18, VAR_23 + VAR_9, &VAR_26);
 if (!(VAR_26 & VAR_10)) {
  FUNC_0(&VAR_18->dev,
   "CVP is disabled for this device: CVP_STATUS Reg 0x%x\n",
   VAR_26);
  return -VAR_2;
 }

 VAR_20 = FUNC_3(&VAR_18->dev, sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_3;

 VAR_20->vsec_offset = VAR_23;
 FUNC_10(VAR_18, VAR_5, &VAR_24);
 if (!(VAR_24 & VAR_6)) {
  VAR_24 |= VAR_6;
  FUNC_14(VAR_18, VAR_5, VAR_24);
 }

 VAR_22 = FUNC_12(VAR_18, VAR_1, "CVP");
 if (VAR_22) {
  FUNC_0(&VAR_18->dev, "Requesting CVP BAR region failed\n");
  goto err_disable;
 }

 VAR_20->pci_dev = VAR_18;
 VAR_20->write_data = VAR_15;

 if (VAR_20->vsec_offset == VAR_8)
  VAR_20->priv = &VAR_16;
 else
  VAR_20->priv = &VAR_17;

 VAR_20->map = FUNC_6(VAR_18, VAR_1, 0);
 if (!VAR_20->map) {
  FUNC_1(&VAR_18->dev, "Mapping CVP BAR failed\n");
  VAR_20->write_data = VAR_14;
 }

 FUNC_15(VAR_20->mgr_name, sizeof(VAR_20->mgr_name), "%s @%s",
   VAR_0, FUNC_8(VAR_18));

 VAR_21 = FUNC_2(&VAR_18->dev, VAR_20->mgr_name,
       &VAR_13, VAR_20);
 if (!VAR_21) {
  VAR_22 = -VAR_3;
  goto err_unmap;
 }

 FUNC_13(VAR_18, VAR_21);

 VAR_22 = FUNC_4(VAR_21);
 if (VAR_22)
  goto err_unmap;

 return 0;

err_unmap:
 if (VAR_20->map)
  FUNC_7(VAR_18, VAR_20->map);
 FUNC_11(VAR_18, VAR_1);
err_disable:
 VAR_24 &= ~VAR_6;
 FUNC_14(VAR_18, VAR_5, VAR_24);
 return VAR_22;
}
