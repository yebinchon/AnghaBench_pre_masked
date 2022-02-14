
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsp_img_hdr_sections {int total_size; int raw_size; int offset; int type; char* name; } ;
struct nsp_img_hdr_section_info {int dummy; } ;
struct nsp_img_hdr_chksum {int hdr_chksum; } ;
struct TYPE_4__ {int sections_offset; int num_sects; } ;
struct TYPE_3__ {int magic; int hdr_size; int image_size; int prod_id; int rel_id; int version; int info_offset; int sect_info_offset; int chksum_offset; } ;
struct nsp_img_hdr {TYPE_2__ sect_info; struct nsp_img_hdr_sections sections; TYPE_1__ head; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct nsp_img_hdr *VAR_0)
{
 struct nsp_img_hdr_chksum *VAR_1;
 struct nsp_img_hdr_section_info *VAR_2;
 struct nsp_img_hdr_sections *VAR_3;
 int VAR_4;

 FUNC_0("****************** NSP Image Summary ******************\n");
 FUNC_0("Magic:             0x%x\n", VAR_0->head.magic);
 FUNC_0("Image Header Size: 0x%x bytes\n", VAR_0->head.hdr_size);
 FUNC_0("Total Image Size:  %d bytes\n", VAR_0->head.image_size);
 FUNC_0("Product ID:        0x%x\n", VAR_0->head.prod_id);
 FUNC_0("Release ID:        0x%x\n", VAR_0->head.rel_id);
 FUNC_0("Version ID:        0x%x\n", VAR_0->head.version);

 FUNC_0("Offset Info:       0x%x\n", VAR_0->head.info_offset);
 FUNC_0("Offset Sect info:  0x%x\n", VAR_0->head.sect_info_offset);
 FUNC_0("Offset Sections:   0x%x\n", VAR_0->sect_info.sections_offset);

 VAR_1=(struct nsp_img_hdr_chksum *)(VAR_0+VAR_0->head.chksum_offset);
 FUNC_0("Header Checksum:   0x%x\n", VAR_1->hdr_chksum);

 FUNC_0("+++ Section Information +++\n");
 FUNC_0("# of sections:     %u\n", VAR_0->sect_info.num_sects);
 VAR_3=&(VAR_0->sections);
 for(VAR_4 = 0; VAR_4 < VAR_0->sect_info.num_sects; VAR_4++, VAR_3++) {
  FUNC_0("+++++ Section %d +++++\n", VAR_4);
  FUNC_0("Total size:  %u bytes\n", VAR_3->total_size);
  FUNC_0("Raw Size:    %u bytes\n", VAR_3->raw_size);
  FUNC_0("Offset:      0x%x\n", VAR_3->offset);
  FUNC_0("Type:        0x%x\n", VAR_3->type);
  FUNC_0("Name:        %s\n", VAR_3->name);
 }
 FUNC_0("*******************************************************\n");
}
