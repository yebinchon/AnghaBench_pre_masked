
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm_iter {int vmm; TYPE_2__** pt; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc {int type; } ;
struct TYPE_4__ {TYPE_1__** pt; } ;
struct TYPE_3__ {int memory; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_vmm_iter *VAR_1, bool VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct nvkm_vmm_desc *VAR_5 = VAR_1->desc;
 const int VAR_6 = VAR_5->type == VAR_0;
 FUNC_0(VAR_1->pt[0]->pt[VAR_6]->memory, VAR_1->vmm);
 return 0;
}
