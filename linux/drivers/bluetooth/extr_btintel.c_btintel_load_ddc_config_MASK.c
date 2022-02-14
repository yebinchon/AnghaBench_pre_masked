
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dev; } ;
struct firmware {int size; scalar_t__ const* data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,scalar_t__ const,scalar_t__ const*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,int *) ;

int FUNC_8(struct hci_dev *VAR_1, const char *VAR_2)
{
 const struct firmware *VAR_3;
 struct sk_buff *VAR_4;
 const u8 *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(&VAR_3, VAR_2, &VAR_1->dev);
 if (VAR_6 < 0) {
  FUNC_3(VAR_1, "Failed to load Intel DDC file %s (%d)",
      VAR_2, VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_1, "Found Intel DDC parameters: %s", VAR_2);

 VAR_5 = VAR_3->data;




 while (VAR_3->size > VAR_5 - VAR_3->data) {
  u8 VAR_7 = VAR_5[0] + sizeof(u8);

  VAR_4 = FUNC_2(VAR_1, 0xfc8b, VAR_7, VAR_5,
         VAR_0);
  if (FUNC_0(VAR_4)) {
   FUNC_3(VAR_1, "Failed to send Intel_Write_DDC (%ld)",
       FUNC_1(VAR_4));
   FUNC_6(VAR_3);
   return FUNC_1(VAR_4);
  }

  VAR_5 += VAR_7;
  FUNC_5(VAR_4);
 }

 FUNC_6(VAR_3);

 FUNC_4(VAR_1, "Applying Intel DDC parameters completed");

 return 0;
}
