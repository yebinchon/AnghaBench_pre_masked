
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tlv_type_patch {int download_mode; int format_version; int signature; int reserved1; int entry; int reserved2; int patch_version; int rom_build; int product_id; int data_length; int total_size; } ;
struct tlv_type_nvm {int* data; int tag_len; int tag_id; } ;
struct tlv_type_hdr {int * data; int type_len; } ;
struct rome_config {int dnld_mode; int dnld_type; int type; int user_baud_rate; } ;
struct firmware {scalar_t__ data; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;


 void* VAR_0 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rome_config *VAR_1,
    const struct firmware *VAR_2)
{
 const u8 *VAR_3;
 u32 VAR_4;
 u16 VAR_5, VAR_6;
 int VAR_7, VAR_8;
 struct tlv_type_hdr *VAR_9;
 struct tlv_type_patch *VAR_10;
 struct tlv_type_nvm *VAR_11;

 VAR_9 = (struct tlv_type_hdr *)VAR_2->data;

 VAR_4 = FUNC_3(VAR_9->type_len);
 VAR_8 = (VAR_4 >> 8) & 0x00ffffff;

 FUNC_0("TLV Type\t\t : 0x%x", VAR_4 & 0x000000ff);
 FUNC_0("Length\t\t : %d bytes", VAR_8);

 VAR_1->dnld_mode = VAR_0;
 VAR_1->dnld_type = VAR_0;

 switch (VAR_1->type) {
 case 128:
  VAR_10 = (struct tlv_type_patch *)VAR_9->data;







  VAR_1->dnld_mode = VAR_10->download_mode;
  VAR_1->dnld_type = VAR_1->dnld_mode;

  FUNC_0("Total Length           : %d bytes",
         FUNC_3(VAR_10->total_size));
  FUNC_0("Patch Data Length      : %d bytes",
         FUNC_3(VAR_10->data_length));
  FUNC_0("Signing Format Version : 0x%x",
         VAR_10->format_version);
  FUNC_0("Signature Algorithm    : 0x%x",
         VAR_10->signature);
  FUNC_0("Download mode          : 0x%x",
         VAR_10->download_mode);
  FUNC_0("Reserved               : 0x%x",
         VAR_10->reserved1);
  FUNC_0("Product ID             : 0x%04x",
         FUNC_2(VAR_10->product_id));
  FUNC_0("Rom Build Version      : 0x%04x",
         FUNC_2(VAR_10->rom_build));
  FUNC_0("Patch Version          : 0x%04x",
         FUNC_2(VAR_10->patch_version));
  FUNC_0("Reserved               : 0x%x",
         FUNC_2(VAR_10->reserved2));
  FUNC_0("Patch Entry Address    : 0x%x",
         FUNC_3(VAR_10->entry));
  break;

 case 129:
  VAR_7 = 0;
  VAR_3 = VAR_9->data;
  while (VAR_7 < VAR_8) {
   VAR_11 = (struct tlv_type_nvm *)(VAR_3 + VAR_7);

   VAR_5 = FUNC_2(VAR_11->tag_id);
   VAR_6 = FUNC_2(VAR_11->tag_len);


   switch (VAR_5) {
   case 130:




    VAR_11->data[0] |= 0x80;


    VAR_11->data[2] = VAR_1->user_baud_rate;

    break;

   case 131:



    VAR_11->data[0] |= 0x01;

    break;
   }

   VAR_7 += (sizeof(u16) + sizeof(u16) + 8 + VAR_6);
  }
  break;

 default:
  FUNC_1("Unknown TLV type %d", VAR_1->type);
  break;
 }
}
