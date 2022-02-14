
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void nvkm_vmm ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct TYPE_3__ {void* vmm; } ;


 scalar_t__ FUNC_0 (struct nvkm_object*) ;
 struct nvkm_object* FUNC_1 (struct nvkm_client*,int ,TYPE_1__* (*) (struct nvkm_object*)) ;
 TYPE_1__* FUNC_2 (struct nvkm_object*) ;

struct nvkm_vmm *
FUNC_3(struct nvkm_client *VAR_0, u64 VAR_1)
{
 struct nvkm_object *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, &FUNC_2);
 if (FUNC_0(VAR_2))
  return (void *)VAR_2;

 return FUNC_2(VAR_2)->vmm;
}
