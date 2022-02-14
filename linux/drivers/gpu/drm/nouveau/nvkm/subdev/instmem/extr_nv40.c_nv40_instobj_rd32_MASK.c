
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nv40_instobj {TYPE_2__* node; TYPE_1__* imem; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ iomem; } ;


 int FUNC_0 (scalar_t__) ;
 struct nv40_instobj* FUNC_1 (struct nvkm_memory*) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_memory *VAR_0, u64 VAR_1)
{
 struct nv40_instobj *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2->imem->iomem + VAR_2->node->offset + VAR_1);
}
