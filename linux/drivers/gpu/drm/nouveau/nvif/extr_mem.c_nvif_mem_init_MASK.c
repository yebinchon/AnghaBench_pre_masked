
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvif_mmu {int type_nr; TYPE_2__* type; } ;
struct TYPE_3__ {int * client; } ;
struct nvif_mem {TYPE_1__ object; } ;
typedef int s32 ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvif_mmu*,int ,int,int,int ,void*,int ,struct nvif_mem*) ;

int
FUNC_1(struct nvif_mmu *VAR_1, s32 VAR_2, u8 VAR_3, u8 VAR_4,
       u64 VAR_5, void *VAR_6, u32 VAR_7, struct nvif_mem *VAR_8)
{
 int VAR_9 = -VAR_0, VAR_10;

 VAR_8->object.client = ((void*)0);

 for (VAR_10 = 0; VAR_9 && VAR_10 < VAR_1->type_nr; VAR_10++) {
  if ((VAR_1->type[VAR_10].type & VAR_3) == VAR_3) {
   VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_10, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8);
  }
 }

 return VAR_9;
}
