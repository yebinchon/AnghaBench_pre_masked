
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_acr {int dummy; } ;
struct ls_ucode_img_desc {int app_start_offset; int app_resident_code_offset; int app_resident_data_offset; int app_resident_data_size; int app_imem_entry; int app_resident_code_size; } ;
struct ls_ucode_img {int ucode_off; struct ls_ucode_img_desc ucode_desc; } ;
struct acr_r352_flcn_bl_desc {int non_sec_code_off; int data_size; void* data_dma_base1; void* data_dma_base; int code_entry_point; int non_sec_code_size; void* code_dma_base1; void* code_dma_base; int ctx_dma; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const struct nvkm_acr *VAR_1,
          const struct ls_ucode_img *VAR_2, u64 VAR_3,
          void *VAR_4)
{
 struct acr_r352_flcn_bl_desc *VAR_5 = VAR_4;
 const struct ls_ucode_img_desc *VAR_6 = &VAR_2->ucode_desc;
 u64 VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_3 + VAR_2->ucode_off + VAR_6->app_start_offset;
 VAR_8 = (VAR_7 + VAR_6->app_resident_code_offset) >> 8;
 VAR_9 = (VAR_7 + VAR_6->app_resident_data_offset) >> 8;

 VAR_5->ctx_dma = VAR_0;
 VAR_5->code_dma_base = FUNC_0(VAR_8);
 VAR_5->code_dma_base1 = FUNC_1(VAR_8);
 VAR_5->non_sec_code_off = VAR_6->app_resident_code_offset;
 VAR_5->non_sec_code_size = VAR_6->app_resident_code_size;
 VAR_5->code_entry_point = VAR_6->app_imem_entry;
 VAR_5->data_dma_base = FUNC_0(VAR_9);
 VAR_5->data_dma_base1 = FUNC_1(VAR_9);
 VAR_5->data_size = VAR_6->app_resident_data_size;
}
