
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
struct ath_vendor_cmd {size_t len; int data; int index; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,size_t,struct ath_vendor_cmd*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_2, uint8_t VAR_3, uint16_t VAR_4,
     const void *VAR_5, size_t VAR_6)
{
 struct sk_buff *VAR_7;
 struct ath_vendor_cmd VAR_8;

 if (VAR_6 > sizeof(VAR_8.data))
  return -VAR_0;

 VAR_8.opcode = VAR_3;
 VAR_8.index = FUNC_3(VAR_4);
 VAR_8.len = VAR_6;
 FUNC_5(VAR_8.data, VAR_5, VAR_6);

 VAR_7 = FUNC_2(VAR_2, 0xfc0b, VAR_6 + 4, &VAR_8, VAR_1);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 FUNC_4(VAR_7);

 return 0;
}
