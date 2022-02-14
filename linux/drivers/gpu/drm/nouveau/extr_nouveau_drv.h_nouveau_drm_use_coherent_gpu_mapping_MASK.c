
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_mmu {TYPE_2__* type; } ;
struct TYPE_6__ {size_t* type_host; } ;
struct TYPE_4__ {struct nvif_mmu mmu; } ;
struct nouveau_drm {TYPE_3__ ttm; TYPE_1__ client; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct nouveau_drm *VAR_1)
{
 struct nvif_mmu *VAR_2 = &VAR_1->client.mmu;
 return !(VAR_2->type[VAR_1->ttm.type_host[0]].type & VAR_0);
}
