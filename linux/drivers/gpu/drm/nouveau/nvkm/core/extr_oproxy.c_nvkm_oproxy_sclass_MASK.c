
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_oproxy {TYPE_2__* object; } ;
struct nvkm_oclass {TYPE_2__* parent; } ;
struct nvkm_object {int dummy; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {int (* sclass ) (TYPE_2__*,int,struct nvkm_oclass*) ;} ;


 int VAR_0 ;
 struct nvkm_oproxy* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (TYPE_2__*,int,struct nvkm_oclass*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_1, int VAR_2,
     struct nvkm_oclass *VAR_3)
{
 struct nvkm_oproxy *VAR_4 = FUNC_0(VAR_1);
 VAR_3->parent = VAR_4->object;
 if (!VAR_4->object->func->sclass)
  return -VAR_0;
 return VAR_4->object->func->sclass(VAR_4->object, VAR_2, VAR_3);
}
