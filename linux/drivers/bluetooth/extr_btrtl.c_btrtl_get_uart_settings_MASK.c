
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_vendor_config_entry {int len; int* data; int offset; } ;
struct rtl_vendor_config {scalar_t__ entry; int total_len; int signature; } ;
struct hci_dev {int dummy; } ;
struct btrtl_device_info {int cfg_len; scalar_t__ cfg_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*,char*,int,...) ;
 int FUNC_6 (struct hci_dev*,char*) ;
 int FUNC_7 (struct hci_dev*,char*) ;

int FUNC_8(struct hci_dev *VAR_3,
       struct btrtl_device_info *VAR_4,
       unsigned int *VAR_5,
       u32 *VAR_6, bool *VAR_7)
{
 struct rtl_vendor_config *VAR_8;
 struct rtl_vendor_config_entry *VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12 = 0;

 VAR_11 = VAR_4->cfg_len - sizeof(*VAR_8);
 if (VAR_11 <= 0) {
  FUNC_7(VAR_3, "no config loaded");
  return -VAR_0;
 }

 VAR_8 = (struct rtl_vendor_config *)VAR_4->cfg_data;
 if (FUNC_4(VAR_8->signature) != VAR_2) {
  FUNC_6(VAR_3, "invalid config magic");
  return -VAR_0;
 }

 if (VAR_11 < FUNC_3(VAR_8->total_len)) {
  FUNC_6(VAR_3, "config is too short");
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_11; ) {
  VAR_9 = ((void *)VAR_8->entry) + VAR_10;

  switch (FUNC_3(VAR_9->offset)) {
  case 0xc:
   if (VAR_9->len < sizeof(*VAR_6)) {
    FUNC_6(VAR_3, "invalid UART config entry");
    return -VAR_0;
   }

   *VAR_6 = FUNC_2(VAR_9->data);
   *VAR_5 = FUNC_1(
       *VAR_6);

   if (VAR_9->len >= 13)
    *VAR_7 = !!(VAR_9->data[12] & FUNC_0(2));
   else
    *VAR_7 = 0;

   VAR_12 = 1;
   break;

  default:
   FUNC_5(VAR_3, "skipping config entry 0x%x (len %u)",
       FUNC_3(VAR_9->offset), VAR_9->len);
   break;
  };

  VAR_10 += sizeof(*VAR_9) + VAR_9->len;
 }

 if (!VAR_12) {
  FUNC_6(VAR_3, "no UART config entry found");
  return -VAR_1;
 }

 FUNC_5(VAR_3, "device baudrate = 0x%08x", *VAR_6);
 FUNC_5(VAR_3, "controller baudrate = %u", *VAR_5);
 FUNC_5(VAR_3, "flow control %d", *VAR_7);

 return 0;
}
