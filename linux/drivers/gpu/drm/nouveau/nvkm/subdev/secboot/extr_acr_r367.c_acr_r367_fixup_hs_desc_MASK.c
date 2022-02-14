
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_secboot {scalar_t__ wpr_size; } ;
struct nvkm_gpuobj {int addr; int size; } ;
struct TYPE_6__ {int no_regions; TYPE_2__* region_props; } ;
struct acr_r367_hsflcn_desc {int wpr_region_id; int ucode_blob_base; int ucode_blob_size; TYPE_3__ regions; } ;
struct acr_r352 {TYPE_1__* func; struct nvkm_gpuobj* ls_blob; } ;
struct TYPE_5__ {int start_addr; int end_addr; int region_id; int read_mask; int write_mask; int client_mask; int shadow_mem_start_addr; } ;
struct TYPE_4__ {scalar_t__ shadow_blob; } ;



void
FUNC_0(struct acr_r352 *VAR_0, struct nvkm_secboot *VAR_1,
         void *VAR_2)
{
 struct acr_r367_hsflcn_desc *VAR_3 = VAR_2;
 struct nvkm_gpuobj *VAR_4 = VAR_0->ls_blob;


 if (VAR_1->wpr_size == 0) {
  u64 VAR_5 = VAR_4->addr;
  u64 VAR_6 = VAR_4->addr + VAR_4->size;

  if (VAR_0->func->shadow_blob)
   VAR_5 += VAR_4->size / 2;

  VAR_3->wpr_region_id = 1;
  VAR_3->regions.no_regions = 2;
  VAR_3->regions.region_props[0].start_addr = VAR_5 >> 8;
  VAR_3->regions.region_props[0].end_addr = VAR_6 >> 8;
  VAR_3->regions.region_props[0].region_id = 1;
  VAR_3->regions.region_props[0].read_mask = 0xf;
  VAR_3->regions.region_props[0].write_mask = 0xc;
  VAR_3->regions.region_props[0].client_mask = 0x2;
  if (VAR_0->func->shadow_blob)
   VAR_3->regions.region_props[0].shadow_mem_start_addr =
            VAR_4->addr >> 8;
  else
   VAR_3->regions.region_props[0].shadow_mem_start_addr = 0;
 } else {
  VAR_3->ucode_blob_base = VAR_4->addr;
  VAR_3->ucode_blob_size = VAR_4->size;
 }
}
