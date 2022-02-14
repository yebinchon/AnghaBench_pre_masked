
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int device; } ;
struct nvkm_mmu {TYPE_1__ subdev; TYPE_2__* type; } ;
struct nvkm_memory {int dummy; } ;
struct nv04_mem_vn {int dummy; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,void**,int *,struct nv04_mem_vn) ;
 int FUNC_1 (int ,int,int,int ,int ,int,int,struct nvkm_memory**) ;

int
FUNC_2(struct nvkm_mmu *VAR_4, int VAR_5, u8 VAR_6, u64 VAR_7,
      void *VAR_8, u32 VAR_9, struct nvkm_memory **VAR_10)
{
 union {
  struct nv04_mem_vn vn;
 } *VAR_11 = VAR_8;
 int VAR_12 = -VAR_0;

 if ((VAR_12 = FUNC_0(VAR_12, &VAR_8, &VAR_9, VAR_11->vn)))
  return VAR_12;

 if (VAR_4->type[VAR_5].type & VAR_1)
  VAR_5 = VAR_3;
 else
  VAR_5 = VAR_2;

 return FUNC_1(VAR_4->subdev.device, VAR_5, 0x01, VAR_6,
       VAR_7, 1, 0, VAR_10);
}
