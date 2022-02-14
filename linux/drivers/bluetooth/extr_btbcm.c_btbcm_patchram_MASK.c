
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
struct hci_command_hdr {size_t plen; int opcode; } ;
struct firmware {size_t size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,size_t,int const*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

int FUNC_7(struct hci_dev *VAR_2, const struct firmware *VAR_3)
{
 const struct hci_command_hdr *VAR_4;
 const u8 *VAR_5;
 size_t VAR_6;
 struct sk_buff *VAR_7;
 u16 VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_2(VAR_2, 0xfc2e, 0, ((void*)0), VAR_1);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  FUNC_3(VAR_2, "BCM: Download Minidrv command failed (%d)",
      VAR_9);
  goto done;
 }
 FUNC_4(VAR_7);


 FUNC_6(50);

 VAR_5 = VAR_3->data;
 VAR_6 = VAR_3->size;

 while (VAR_6 >= sizeof(*VAR_4)) {
  const u8 *VAR_10;

  VAR_4 = (struct hci_command_hdr *)VAR_5;
  VAR_5 += sizeof(*VAR_4);
  VAR_6 -= sizeof(*VAR_4);

  if (VAR_6 < VAR_4->plen) {
   FUNC_3(VAR_2, "BCM: Patch is corrupted");
   VAR_9 = -VAR_0;
   goto done;
  }

  VAR_10 = VAR_5;
  VAR_5 += VAR_4->plen;
  VAR_6 -= VAR_4->plen;

  VAR_8 = FUNC_5(VAR_4->opcode);

  VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_4->plen, VAR_10,
         VAR_1);
  if (FUNC_0(VAR_7)) {
   VAR_9 = FUNC_1(VAR_7);
   FUNC_3(VAR_2, "BCM: Patch command %04x failed (%d)",
       VAR_8, VAR_9);
   goto done;
  }
  FUNC_4(VAR_7);
 }


 FUNC_6(250);

done:
 return VAR_9;
}
