
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_vmm {TYPE_2__* func; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_4__ {TYPE_1__* page; } ;
struct TYPE_3__ {int shift; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_memory*,int ) ;

int
FUNC_2(struct nvkm_vmm *VAR_0, struct nvkm_memory *VAR_1, u64 VAR_2)
{
 if (VAR_0->func->page[1].shift == 16)
  VAR_2 |= FUNC_0(11);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
