
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_sec2 {TYPE_4__* falcon; } ;
struct nvkm_acr {TYPE_2__* subdev; } ;
struct ls_ucode_img_desc {int app_resident_data_size; int app_imem_entry; int app_resident_code_size; int app_resident_code_offset; scalar_t__ app_resident_data_offset; scalar_t__ app_start_offset; } ;
struct ls_ucode_img {scalar_t__ ucode_off; struct ls_ucode_img_desc ucode_desc; } ;
struct acr_r370_flcn_bl_desc {int argc; int argv; int data_size; void* data_dma_base; int code_entry_point; int non_sec_code_size; int non_sec_code_off; void* code_dma_base; int ctx_dma; } ;
struct TYPE_7__ {int limit; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {struct nvkm_sec2* sec2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(const struct nvkm_acr *VAR_2,
          const struct ls_ucode_img *VAR_3, u64 VAR_4,
          void *VAR_5)
{
 const struct ls_ucode_img_desc *VAR_6 = &VAR_3->ucode_desc;
 const struct nvkm_sec2 *VAR_7 = VAR_2->subdev->device->sec2;
 struct acr_r370_flcn_bl_desc *VAR_8 = VAR_5;
 u64 VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_9 = VAR_4 + VAR_3->ucode_off + VAR_6->app_start_offset;

 VAR_10 = VAR_9;
 VAR_11 = VAR_9 + VAR_6->app_resident_data_offset;
 VAR_12 = VAR_7->falcon->data.limit;
 VAR_12 -= VAR_1;

 VAR_8->ctx_dma = VAR_0;
 VAR_8->code_dma_base = FUNC_0(VAR_10);
 VAR_8->non_sec_code_off = VAR_6->app_resident_code_offset;
 VAR_8->non_sec_code_size = VAR_6->app_resident_code_size;
 VAR_8->code_entry_point = VAR_6->app_imem_entry;
 VAR_8->data_dma_base = FUNC_0(VAR_11);
 VAR_8->data_size = VAR_6->app_resident_data_size;
 VAR_8->argc = 1;

 VAR_8->argv = 0x01000000;
}
