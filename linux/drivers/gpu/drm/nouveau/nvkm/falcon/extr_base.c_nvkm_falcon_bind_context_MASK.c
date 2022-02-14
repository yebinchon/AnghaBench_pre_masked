
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_memory {int dummy; } ;
struct nvkm_falcon {TYPE_1__* func; int user; } ;
struct TYPE_2__ {int (* bind_context ) (struct nvkm_falcon*,struct nvkm_memory*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nvkm_falcon*,struct nvkm_memory*) ;

void
FUNC_2(struct nvkm_falcon *VAR_0, struct nvkm_memory *VAR_1)
{
 if (!VAR_0->func->bind_context) {
  FUNC_0(VAR_0->user,
      "Context binding not supported on this falcon!\n");
  return;
 }

 VAR_0->func->bind_context(VAR_0, VAR_1);
}
