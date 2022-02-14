
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct rome_config {int fwname; int type; int user_baud_rate; } ;
struct hci_dev {int dummy; } ;
typedef enum qca_btsoc_type { ____Placeholder_qca_btsoc_type } qca_btsoc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 int FUNC_1 (struct hci_dev*,char*,int) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hci_dev*,struct rome_config*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int ,int,char*,...) ;

int FUNC_8(struct hci_dev *VAR_2, uint8_t VAR_3,
     enum qca_btsoc_type VAR_4, u32 VAR_5,
     const char *VAR_6)
{
 struct rome_config VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;

 FUNC_0(VAR_2, "QCA setup on UART");

 VAR_7.user_baud_rate = VAR_3;


 VAR_7.type = VAR_1;
 if (FUNC_5(VAR_4)) {



  VAR_9 = ((VAR_5 & 0x00000f00) >> 0x04) |
       (VAR_5 & 0x0000000f);
  FUNC_7(VAR_7.fwname, sizeof(VAR_7.fwname),
    "qca/crbtfw%02x.tlv", VAR_9);
 } else {
  FUNC_7(VAR_7.fwname, sizeof(VAR_7.fwname),
    "qca/rampatch_%08x.bin", VAR_5);
 }

 VAR_8 = FUNC_4(VAR_2, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_2, "QCA Failed to download patch (%d)", VAR_8);
  return VAR_8;
 }


 FUNC_3(10);


 VAR_7.type = VAR_0;
 if (VAR_6)
  FUNC_7(VAR_7.fwname, sizeof(VAR_7.fwname),
    "qca/%s", VAR_6);
 else if (FUNC_5(VAR_4))
  FUNC_7(VAR_7.fwname, sizeof(VAR_7.fwname),
    "qca/crnv%02x.bin", VAR_9);
 else
  FUNC_7(VAR_7.fwname, sizeof(VAR_7.fwname),
    "qca/nvm_%08x.bin", VAR_5);

 VAR_8 = FUNC_4(VAR_2, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_2, "QCA Failed to download NVM (%d)", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_6(VAR_2);
 if (VAR_8 < 0) {
  FUNC_1(VAR_2, "QCA Failed to run HCI_RESET (%d)", VAR_8);
  return VAR_8;
 }

 FUNC_2(VAR_2, "QCA setup on UART is completed");

 return 0;
}
