
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_version {int hw_platform; int hw_variant; int fw_variant; } ;
struct intel_boot_params {int limited_cce; int otp_bdaddr; } ;
struct hci_dev {int dev; int quirks; int name; } ;
struct firmware {int size; } ;
struct btusb_data {int flags; } ;
typedef int ktime_t ;
typedef int fwname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hci_dev*,char*,...) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct firmware const*,int*) ;
 int FUNC_6 (struct hci_dev*,char*) ;
 int FUNC_7 (struct hci_dev*,struct intel_boot_params*) ;
 int FUNC_8 (struct hci_dev*,struct intel_version*) ;
 int FUNC_9 (struct hci_dev*,int) ;
 int FUNC_10 (struct hci_dev*,int) ;
 int FUNC_11 (struct hci_dev*,struct intel_version*) ;
 int FUNC_12 (struct intel_version*,struct intel_boot_params*,char*,int,char*) ;
 int FUNC_13 (int ,int *) ;
 struct btusb_data* FUNC_14 (struct hci_dev*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct firmware const*) ;
 int FUNC_20 (struct firmware const**,char*,int *) ;
 int FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int FUNC_23 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct hci_dev *VAR_14)
{
 struct btusb_data *VAR_15 = FUNC_14(VAR_14);
 struct intel_version VAR_16;
 struct intel_boot_params VAR_17;
 const struct firmware *VAR_18;
 u32 VAR_19;
 char VAR_20[64];
 ktime_t VAR_21, VAR_22, VAR_23;
 unsigned long long VAR_24;
 int VAR_25;

 FUNC_0("%s", VAR_14->name);





 VAR_19 = 0x00000000;

 VAR_21 = FUNC_15();





 VAR_25 = FUNC_8(VAR_14, &VAR_16);
 if (VAR_25)
  return VAR_25;




 if (VAR_16.hw_platform != 0x37) {
  FUNC_2(VAR_14, "Unsupported Intel hardware platform (%u)",
      VAR_16.hw_platform);
  return -VAR_8;
 }







 switch (VAR_16.hw_variant) {
 case 0x0b:
 case 0x0c:
 case 0x11:
 case 0x12:
 case 0x13:
 case 0x14:
  break;
 default:
  FUNC_2(VAR_14, "Unsupported Intel hardware variant (%u)",
      VAR_16.hw_variant);
  return -VAR_8;
 }

 FUNC_11(VAR_14, &VAR_16);
 if (VAR_16.fw_variant == 0x23) {
  FUNC_13(VAR_2, &VAR_15->flags);
  FUNC_4(VAR_14);
  return 0;
 }




 if (VAR_16.fw_variant != 0x06) {
  FUNC_2(VAR_14, "Unsupported Intel firmware variant (%u)",
      VAR_16.fw_variant);
  return -VAR_9;
 }




 VAR_25 = FUNC_7(VAR_14, &VAR_17);
 if (VAR_25)
  return VAR_25;





 if (VAR_17.limited_cce != 0x00) {
  FUNC_2(VAR_14, "Unsupported Intel firmware loading method (%u)",
      VAR_17.limited_cce);
  return -VAR_8;
 }




 if (!FUNC_1(&VAR_17.otp_bdaddr, VAR_0)) {
  FUNC_3(VAR_14, "No device address configured");
  FUNC_21(VAR_12, &VAR_14->quirks);
 }
 VAR_25 = FUNC_12(&VAR_16, &VAR_17, VAR_20,
      sizeof(VAR_20), "sfi");
 if (!VAR_25) {
  FUNC_2(VAR_14, "Unsupported Intel firmware naming");
  return -VAR_8;
 }

 VAR_25 = FUNC_20(&VAR_18, VAR_20, &VAR_14->dev);
 if (VAR_25 < 0) {
  FUNC_2(VAR_14, "Failed to load Intel firmware file (%d)", VAR_25);
  return VAR_25;
 }

 FUNC_3(VAR_14, "Found device firmware: %s", VAR_20);




 VAR_25 = FUNC_12(&VAR_16, &VAR_17, VAR_20,
      sizeof(VAR_20), "ddc");
 if (!VAR_25) {
  FUNC_2(VAR_14, "Unsupported Intel firmware naming");
  return -VAR_8;
 }

 if (VAR_18->size < 644) {
  FUNC_2(VAR_14, "Invalid size of firmware file (%zu)",
      VAR_18->size);
  VAR_25 = -VAR_6;
  goto done;
 }

 FUNC_21(VAR_3, &VAR_15->flags);


 VAR_25 = FUNC_5(VAR_14, VAR_18, &VAR_19);
 if (VAR_25 < 0)
  goto done;

 FUNC_21(VAR_5, &VAR_15->flags);

 FUNC_3(VAR_14, "Waiting for firmware download to complete");
 VAR_25 = FUNC_23(&VAR_15->flags, VAR_3,
      VAR_13,
      FUNC_18(5000));
 if (VAR_25 == -VAR_7) {
  FUNC_2(VAR_14, "Firmware loading interrupted");
  goto done;
 }

 if (VAR_25) {
  FUNC_2(VAR_14, "Firmware loading timeout");
  VAR_25 = -VAR_11;
  goto done;
 }

 if (FUNC_22(VAR_4, &VAR_15->flags)) {
  FUNC_2(VAR_14, "Firmware loading failed");
  VAR_25 = -VAR_10;
  goto done;
 }

 VAR_23 = FUNC_15();
 VAR_22 = FUNC_16(VAR_23, VAR_21);
 VAR_24 = (unsigned long long) FUNC_17(VAR_22) >> 10;

 FUNC_3(VAR_14, "Firmware loaded in %llu usecs", VAR_24);

done:
 FUNC_19(VAR_18);

 if (VAR_25 < 0)
  return VAR_25;

 VAR_21 = FUNC_15();

 FUNC_21(VAR_1, &VAR_15->flags);

 VAR_25 = FUNC_9(VAR_14, VAR_19);
 if (VAR_25)
  return VAR_25;
 FUNC_3(VAR_14, "Waiting for device to boot");

 VAR_25 = FUNC_23(&VAR_15->flags, VAR_1,
      VAR_13,
      FUNC_18(1000));

 if (VAR_25 == -VAR_7) {
  FUNC_2(VAR_14, "Device boot interrupted");
  return -VAR_7;
 }

 if (VAR_25) {
  FUNC_2(VAR_14, "Device boot timeout");
  return -VAR_11;
 }

 VAR_23 = FUNC_15();
 VAR_22 = FUNC_16(VAR_23, VAR_21);
 VAR_24 = (unsigned long long) FUNC_17(VAR_22) >> 10;

 FUNC_3(VAR_14, "Device booted in %llu usecs", VAR_24);

 FUNC_13(VAR_2, &VAR_15->flags);







 FUNC_6(VAR_14, VAR_20);
 FUNC_10(VAR_14, 0);

 return 0;
}
