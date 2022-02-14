
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_object {int head; int func; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_object*) ;
 int FUNC_2 (int *) ;
 struct nvkm_object* FUNC_3 (struct nvkm_object*) ;
 int FUNC_4 (struct nvkm_object*) ;

void
FUNC_5(struct nvkm_object **VAR_0)
{
 struct nvkm_object *VAR_1 = *VAR_0;
 if (VAR_1 && !FUNC_0(!VAR_1->func)) {
  *VAR_0 = FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  FUNC_2(&VAR_1->head);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
