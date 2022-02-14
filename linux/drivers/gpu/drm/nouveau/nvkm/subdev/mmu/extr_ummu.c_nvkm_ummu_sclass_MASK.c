
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ oclass; } ;
struct nvkm_oclass {int ctor; TYPE_3__ base; TYPE_1__* client; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_mmu {TYPE_5__* func; } ;
struct TYPE_12__ {struct nvkm_mmu* mmu; } ;
struct TYPE_10__ {TYPE_3__ user; } ;
struct TYPE_8__ {TYPE_3__ user; } ;
struct TYPE_11__ {TYPE_4__ vmm; TYPE_2__ mem; } ;
struct TYPE_7__ {scalar_t__ super; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct nvkm_object*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_3, int VAR_4,
   struct nvkm_oclass *VAR_5)
{
 struct nvkm_mmu *VAR_6 = FUNC_0(VAR_3)->mmu;

 if (VAR_6->func->mem.user.oclass && VAR_5->client->super) {
  if (VAR_4-- == 0) {
   VAR_5->base = VAR_6->func->mem.user;
   VAR_5->ctor = VAR_1;
   return 0;
  }
 }

 if (VAR_6->func->vmm.user.oclass) {
  if (VAR_4-- == 0) {
   VAR_5->base = VAR_6->func->vmm.user;
   VAR_5->ctor = VAR_2;
   return 0;
  }
 }

 return -VAR_0;
}
