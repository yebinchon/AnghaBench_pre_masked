
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct nvkm_umem {int type; int io; int bar; int memory; scalar_t__ map; int mappable; struct nvkm_mmu* mmu; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_mmu {TYPE_2__* func; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;
struct TYPE_3__ {int (* umap ) (struct nvkm_mmu*,int ,void*,int ,unsigned long*,unsigned long*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__*) ;
 unsigned long FUNC_1 (int ) ;
 struct nvkm_umem* FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (struct nvkm_mmu*,int ,void*,int ,unsigned long*,unsigned long*,int *) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_7, void *VAR_8, u32 VAR_9,
       enum nvkm_object_map *VAR_10, u64 *VAR_11, u64 *VAR_12)
{
 struct nvkm_umem *VAR_13 = FUNC_2(VAR_7);
 struct nvkm_mmu *VAR_14 = VAR_13->mmu;

 if (!VAR_13->mappable)
  return -VAR_1;
 if (VAR_13->map)
  return -VAR_0;

 if ((VAR_13->type & VAR_2) && !VAR_9) {
  int VAR_15 = FUNC_0(VAR_13->memory, &VAR_13->map);
  if (VAR_15)
   return VAR_15;

  *VAR_11 = (unsigned long)(void *)VAR_13->map;
  *VAR_12 = FUNC_1(VAR_13->memory);
  *VAR_10 = VAR_6;
  return 0;
 } else
 if ((VAR_13->type & VAR_4) ||
     (VAR_13->type & VAR_3)) {
  int VAR_16 = VAR_14->func->mem.umap(VAR_14, VAR_13->memory, VAR_8, VAR_9,
           VAR_11, VAR_12, &VAR_13->bar);
  if (VAR_16)
   return VAR_16;

  *VAR_10 = VAR_5;
 } else {
  return -VAR_1;
 }

 VAR_13->io = (*VAR_10 == VAR_5);
 return 0;
}
