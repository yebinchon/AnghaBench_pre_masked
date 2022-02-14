
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vma {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_mmu {TYPE_2__ subdev; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct nv04_mem_map_vn {int dummy; } ;
struct TYPE_3__ {scalar_t__ const (* resource_addr ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_vma* FUNC_0 (int ) ;
 int FUNC_1 (int,void**,int *,struct nv04_mem_map_vn) ;
 scalar_t__ FUNC_2 (struct nvkm_memory*) ;
 scalar_t__ FUNC_3 (struct nvkm_memory*) ;
 scalar_t__ const FUNC_4 (struct nvkm_device*,int) ;

int
FUNC_5(struct nvkm_mmu *VAR_2, struct nvkm_memory *VAR_3, void *VAR_4,
      u32 VAR_5, u64 *VAR_6, u64 *VAR_7, struct nvkm_vma **VAR_8)
{
 union {
  struct nv04_mem_map_vn vn;
 } *VAR_9 = VAR_4;
 struct nvkm_device *VAR_10 = VAR_2->subdev.device;
 const u64 VAR_11 = FUNC_2(VAR_3);
 int VAR_12 = -VAR_1;

 if ((VAR_12 = FUNC_1(VAR_12, &VAR_4, &VAR_5, VAR_9->vn)))
  return VAR_12;

 *VAR_6 = VAR_10->func->resource_addr(VAR_10, 1) + VAR_11;
 *VAR_7 = FUNC_3(VAR_3);
 *VAR_8 = FUNC_0(-VAR_0);
 return 0;
}
