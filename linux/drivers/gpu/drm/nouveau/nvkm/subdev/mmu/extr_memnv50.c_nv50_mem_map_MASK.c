
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uvmm ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {scalar_t__ size; scalar_t__ addr; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_mmu {TYPE_1__ subdev; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {TYPE_2__* func; } ;
struct nv50_vmm_map_v0 {int comp; int kind; int ro; } ;
struct nv50_mem_map_vn {int dummy; } ;
struct nv50_mem_map_v0 {int comp; int kind; int ro; } ;
struct TYPE_4__ {scalar_t__ (* resource_addr ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,void**,int *,struct nv50_mem_map_v0,int ,int ,int) ;
 int FUNC_1 (int,void**,int *,struct nv50_mem_map_vn) ;
 struct nvkm_vmm* FUNC_2 (struct nvkm_device*) ;
 int FUNC_3 (struct nvkm_memory*,int ,struct nvkm_vmm*,struct nvkm_vma*,struct nv50_vmm_map_v0*,int) ;
 scalar_t__ FUNC_4 (struct nvkm_memory*) ;
 int FUNC_5 (struct nvkm_vmm*,int,scalar_t__,struct nvkm_vma**) ;
 scalar_t__ FUNC_6 (struct nvkm_device*,int) ;

int
FUNC_7(struct nvkm_mmu *VAR_1, struct nvkm_memory *VAR_2, void *VAR_3,
      u32 VAR_4, u64 *VAR_5, u64 *VAR_6, struct nvkm_vma **VAR_7)
{
 struct nv50_vmm_map_v0 VAR_8 = {};
 union {
  struct nv50_mem_map_vn vn;
  struct nv50_mem_map_v0 v0;
 } *VAR_9 = VAR_3;
 struct nvkm_device *VAR_10 = VAR_1->subdev.device;
 struct nvkm_vmm *VAR_11 = FUNC_2(VAR_10);
 u64 VAR_12 = FUNC_4(VAR_2);
 int VAR_13 = -VAR_0;

 if (!(VAR_13 = FUNC_0(VAR_13, &VAR_3, &VAR_4, VAR_9->v0, 0, 0, 0))) {
  VAR_8.ro = VAR_9->v0.ro;
  VAR_8.kind = VAR_9->v0.kind;
  VAR_8.comp = VAR_9->v0.comp;
 } else
 if (!(VAR_13 = FUNC_1(VAR_13, &VAR_3, &VAR_4, VAR_9->vn))) {
 } else
  return VAR_13;

 VAR_13 = FUNC_5(VAR_11, 12, VAR_12, VAR_7);
 if (VAR_13)
  return VAR_13;

 *VAR_5 = VAR_10->func->resource_addr(VAR_10, 1) + (*VAR_7)->addr;
 *VAR_6 = (*VAR_7)->size;
 return FUNC_3(VAR_2, 0, VAR_11, *VAR_7, &VAR_8, sizeof(VAR_8));
}
