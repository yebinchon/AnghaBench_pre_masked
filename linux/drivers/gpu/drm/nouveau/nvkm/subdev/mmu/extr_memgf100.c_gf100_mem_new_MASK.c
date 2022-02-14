
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int device; } ;
struct nvkm_mmu {TYPE_2__ subdev; TYPE_1__* type; } ;
struct nvkm_memory {int dummy; } ;
struct gf100_mem_vn {int dummy; } ;
struct gf100_mem_v0 {int contig; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,void**,int *,struct gf100_mem_v0,int ,int ,int) ;
 int FUNC_1 (int,void**,int *,struct gf100_mem_vn) ;
 int FUNC_2 (int ,int,int,int ,int ,int,int,struct nvkm_memory**) ;

int
FUNC_3(struct nvkm_mmu *VAR_5, int VAR_6, u8 VAR_7, u64 VAR_8,
       void *VAR_9, u32 VAR_10, struct nvkm_memory **VAR_11)
{
 union {
  struct gf100_mem_vn vn;
  struct gf100_mem_v0 v0;
 } *VAR_12 = VAR_9;
 int VAR_13 = -VAR_0;
 bool VAR_14;

 if (!(VAR_13 = FUNC_0(VAR_13, &VAR_9, &VAR_10, VAR_12->v0, 0, 0, 0))) {
  VAR_14 = VAR_12->v0.contig;
 } else
 if (!(VAR_13 = FUNC_1(VAR_13, &VAR_9, &VAR_10, VAR_12->vn))) {
  VAR_14 = 0;
 } else
  return VAR_13;

 if (VAR_5->type[VAR_6].type & (VAR_2 | VAR_1))
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_3;

 return FUNC_2(VAR_5->subdev.device, VAR_6, 0x01, VAR_7,
       VAR_8, VAR_14, 0, VAR_11);
}
