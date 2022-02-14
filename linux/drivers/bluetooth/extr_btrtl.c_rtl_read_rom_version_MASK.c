
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtl_rom_version_evt {int version; int status; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int ,int *,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (struct hci_dev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_2, u8 *VAR_3)
{
 struct rtl_rom_version_evt *VAR_4;
 struct sk_buff *VAR_5;


 VAR_5 = FUNC_2(VAR_2, 0xfc6d, 0, ((void*)0), VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_2, "Read ROM version failed (%ld)",
       FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 if (VAR_5->len != sizeof(*VAR_4)) {
  FUNC_4(VAR_2, "version event length mismatch");
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 VAR_4 = (struct rtl_rom_version_evt *)VAR_5->data;
 FUNC_5(VAR_2, "rom_version status=%x version=%x",
       VAR_4->status, VAR_4->version);

 *VAR_3 = VAR_4->version;

 FUNC_3(VAR_5);
 return 0;
}
