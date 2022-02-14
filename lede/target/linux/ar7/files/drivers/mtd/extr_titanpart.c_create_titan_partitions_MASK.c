
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nsp_img_hdr_sections {scalar_t__ type; unsigned int offset; unsigned int total_size; char* name; } ;
struct nsp_img_hdr_section_info {int num_sects; unsigned int sections_offset; int sect_size; } ;
struct nsp_img_hdr_head {scalar_t__ magic; unsigned int sect_info_offset; } ;
struct mtd_partition {int dummy; } ;
struct mtd_info {unsigned int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mtd_info*,unsigned int,int,size_t*,int *) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (char*,unsigned int*,unsigned int*) ;
 int FUNC_3 (char*,unsigned int*,unsigned int*) ;
 struct mtd_partition* VAR_4 ;

int FUNC_4(struct mtd_info *VAR_5,
 struct mtd_partition **VAR_6,
 unsigned long VAR_7)
{
 struct nsp_img_hdr_head VAR_8;
 struct nsp_img_hdr_section_info VAR_9;
 struct nsp_img_hdr_sections VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 char *VAR_15;
 int VAR_16;
 int VAR_17=0;
 size_t VAR_18;


 if(FUNC_2("BOOTCFG", &VAR_11, &VAR_12)) {

  return -1;
 }



 FUNC_0(VAR_5, VAR_11, sizeof(struct nsp_img_hdr_head), &VAR_18, (uint8_t *)&VAR_8);
 if(VAR_8.magic != VAR_1)
  return -1;

 FUNC_0(VAR_5, VAR_11 + VAR_8.sect_info_offset, sizeof(struct nsp_img_hdr_section_info), &VAR_18, (uint8_t *)&VAR_9);


 for(VAR_16=0; VAR_16< VAR_9.num_sects && VAR_16<VAR_0; VAR_16++){
  FUNC_0(VAR_5, VAR_11 + VAR_9.sections_offset + (VAR_16 * VAR_9.sect_size) , sizeof(struct nsp_img_hdr_sections), &VAR_18, (uint8_t *)&VAR_10);

  if(VAR_10.type != VAR_2){
   continue;
  }
  VAR_13=VAR_11 + VAR_10.offset;
  VAR_14=VAR_13 + VAR_10.total_size;
  FUNC_1("root", VAR_13, VAR_14);
  VAR_17++;

 }

 for(VAR_16=0; VAR_16< VAR_9.num_sects && VAR_16<VAR_0; VAR_16++){

  FUNC_0(VAR_5, VAR_11 + VAR_9.sections_offset + (VAR_16 * VAR_9.sect_size) , sizeof(struct nsp_img_hdr_sections), &VAR_18, (uint8_t *)&VAR_10);

  VAR_15=VAR_10.name;
  if(VAR_10.type == VAR_2)
  {
   VAR_15 = "rootfs";
   VAR_13=VAR_11 + VAR_10.offset;
   VAR_14=VAR_12;
   FUNC_1(VAR_15, VAR_13, VAR_14);
   VAR_17++;
  }
  else if(VAR_10.type == VAR_3)
  {
   VAR_15 = "kernel";
   VAR_13=VAR_11 + VAR_10.offset;
   VAR_14=VAR_13 + VAR_10.total_size;
   FUNC_1(VAR_15, VAR_13, VAR_14);
   VAR_17++;
  }

 }


 FUNC_1("primary_image", VAR_11, VAR_12);
 VAR_17++;


 FUNC_1("full_image", 0, VAR_5->size);
 VAR_17++;

 if (!FUNC_3("BOOTLOADER", &VAR_13, &VAR_14)){
  FUNC_1("bootloader", VAR_13, VAR_14);
  VAR_17++;
 }
 if (!FUNC_3("boot_env", &VAR_13, &VAR_14)){
  FUNC_1("boot_env", VAR_13, VAR_14);
  VAR_17++;
 }
 *VAR_6 = VAR_4;
 return VAR_17;
}
