
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct nvkm_gpuobj {int dummy; } ;
struct TYPE_3__ {scalar_t__ limit; } ;
struct nvkm_falcon {TYPE_1__ code; } ;
struct nvkm_acr {int subdev; } ;
struct hsf_load_header {int dummy; } ;
struct fw_bl_desc {int code_off; int data_off; int start_tag; int dmem_load_off; scalar_t__ const data_size; int code_size; } ;
struct fw_bin_header {int header_offset; int data_offset; } ;
struct acr_r352 {TYPE_2__* func; void* hsbl_unload_blob; struct hsf_load_header unload_bl_header; struct nvkm_gpuobj* unload_blob; void* hsbl_blob; struct hsf_load_header load_bl_header; struct nvkm_gpuobj* load_blob; } ;
struct TYPE_4__ {int (* generate_hs_bl_desc ) (struct hsf_load_header const*,void*,int ) ;scalar_t__ hs_bl_desc_size; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acr_r352* FUNC_1 (struct nvkm_acr*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__ const,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct nvkm_falcon*,void*,int,scalar_t__ const,int ) ;
 int FUNC_6 (struct nvkm_falcon*,void*,scalar_t__,scalar_t__,int,int ,int) ;
 int FUNC_7 (struct hsf_load_header const*,void*,int ) ;

__attribute__((used)) static int
FUNC_8(struct nvkm_acr *VAR_3, struct nvkm_falcon *VAR_4,
       struct nvkm_gpuobj *VAR_5, u64 VAR_6)
{
 struct acr_r352 *VAR_7 = FUNC_1(VAR_3);
 const u32 VAR_8 = VAR_7->func->hs_bl_desc_size;
 const struct hsf_load_header *VAR_9;
 struct fw_bin_header *VAR_10;
 struct fw_bl_desc *VAR_11;
 void *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 u32 VAR_16;
 u8 *VAR_17;

 VAR_17 = FUNC_3(VAR_8, VAR_2);
 if (!VAR_17)
  return -VAR_1;


 if (VAR_5 == VAR_7->load_blob) {
  VAR_9 = &VAR_7->load_bl_header;
  VAR_12 = VAR_7->hsbl_blob;
 } else if (VAR_5 == VAR_7->unload_blob) {
  VAR_9 = &VAR_7->unload_bl_header;
  VAR_12 = VAR_7->hsbl_unload_blob;
 } else {
  FUNC_4(VAR_3->subdev, "invalid secure boot blob!\n");
  FUNC_2(VAR_17);
  return -VAR_0;
 }

 VAR_10 = VAR_12;
 VAR_11 = VAR_12 + VAR_10->header_offset;
 VAR_13 = VAR_12 + VAR_10->data_offset;
 VAR_14 = VAR_13 + VAR_11->code_off;
 VAR_15 = VAR_13 + VAR_11->data_off;
 VAR_16 = FUNC_0(VAR_11->code_size, 256);




 FUNC_5(VAR_4, VAR_15, 0x0, VAR_11->data_size, 0);


 FUNC_6(VAR_4, VAR_14, VAR_4->code.limit - VAR_16,
         VAR_16, VAR_11->start_tag, 0, 0);


 VAR_7->func->generate_hs_bl_desc(VAR_9, VAR_17, VAR_6);




 FUNC_5(VAR_4, VAR_17, VAR_11->dmem_load_off,
         VAR_8, 0);

 FUNC_2(VAR_17);
 return VAR_11->start_tag << 8;
}
