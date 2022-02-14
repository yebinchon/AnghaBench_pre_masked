
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
struct hci_dev {int dummy; } ;
struct hci_command_hdr {scalar_t__ plen; int opcode; } ;
struct firmware {int size; int const* data; } ;


 int FUNC_0 (struct hci_dev*,char*,int) ;
 int FUNC_1 (struct hci_dev*,char*,int) ;
 int FUNC_2 (struct hci_dev*,int,int,int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct hci_dev *VAR_0, const struct firmware *VAR_1,
         u32 *VAR_2)
{
 int VAR_3;
 const u8 *VAR_4;
 u32 VAR_5;




 VAR_3 = FUNC_2(VAR_0, 0x00, 128, VAR_1->data);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Failed to send firmware header (%d)", VAR_3);
  goto done;
 }




 VAR_3 = FUNC_2(VAR_0, 0x03, 256, VAR_1->data + 128);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Failed to send firmware pkey (%d)", VAR_3);
  goto done;
 }




 VAR_3 = FUNC_2(VAR_0, 0x02, 256, VAR_1->data + 388);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Failed to send firmware signature (%d)", VAR_3);
  goto done;
 }

 VAR_4 = VAR_1->data + 644;
 VAR_5 = 0;

 while (VAR_4 - VAR_1->data < VAR_1->size) {
  struct hci_command_hdr *VAR_6 = (void *)(VAR_4 + VAR_5);






  if (FUNC_4(VAR_6->opcode) == 0xfc0e) {



   *VAR_2 = FUNC_3(VAR_4 + sizeof(*VAR_6));

   FUNC_0(VAR_0, "boot_param=0x%x", *VAR_2);
  }

  VAR_5 += sizeof(*VAR_6) + VAR_6->plen;
  if (!(VAR_5 % 4)) {
   VAR_3 = FUNC_2(VAR_0, 0x01, VAR_5, VAR_4);
   if (VAR_3 < 0) {
    FUNC_1(VAR_0,
        "Failed to send firmware data (%d)",
        VAR_3);
    goto done;
   }

   VAR_4 += VAR_5;
   VAR_5 = 0;
  }
 }

done:
 return VAR_3;
}
