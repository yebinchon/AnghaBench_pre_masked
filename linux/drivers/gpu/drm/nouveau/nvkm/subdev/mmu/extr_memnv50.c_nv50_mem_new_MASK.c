
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int device; } ;
struct nvkm_mmu {TYPE_1__ subdev; } ;
struct nvkm_memory {int dummy; } ;
struct nv50_mem_vn {int dummy; } ;
struct nv50_mem_v0 {int contig; scalar_t__ bankswz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void**,int *,struct nv50_mem_v0,int ,int ,int) ;
 int FUNC_1 (int,void**,int *,struct nv50_mem_vn) ;
 int FUNC_2 (int ,int ,int,int ,int ,int,int,struct nvkm_memory**) ;

int
FUNC_3(struct nvkm_mmu *VAR_2, int VAR_3, u8 VAR_4, u64 VAR_5,
      void *VAR_6, u32 VAR_7, struct nvkm_memory **VAR_8)
{
 union {
  struct nv50_mem_vn vn;
  struct nv50_mem_v0 v0;
 } *VAR_9 = VAR_6;
 int VAR_10 = -VAR_0;
 bool VAR_11;

 if (!(VAR_10 = FUNC_0(VAR_10, &VAR_6, &VAR_7, VAR_9->v0, 0, 0, 0))) {
  VAR_3 = VAR_9->v0.bankswz ? 0x02 : 0x01;
  VAR_11 = VAR_9->v0.contig;
 } else
 if (!(VAR_10 = FUNC_1(VAR_10, &VAR_6, &VAR_7, VAR_9->vn))) {
  VAR_3 = 0x01;
  VAR_11 = 0;
 } else
  return -VAR_0;

 return FUNC_2(VAR_2->subdev.device, VAR_1, VAR_3,
       VAR_4, VAR_5, VAR_11, 0, VAR_8);
}
