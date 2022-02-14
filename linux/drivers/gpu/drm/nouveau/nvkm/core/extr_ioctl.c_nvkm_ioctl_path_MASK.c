
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct nvkm_object {scalar_t__ route; int token; } ;
struct nvkm_client {int object; } ;
struct TYPE_3__ {scalar_t__ version; int (* func ) (struct nvkm_client*,struct nvkm_object*,void*,size_t) ;} ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nvkm_object*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* VAR_3 ;
 struct nvkm_object* FUNC_4 (struct nvkm_client*,int ,int *) ;
 int FUNC_5 (struct nvkm_client*,struct nvkm_object*,void*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_client *VAR_4, u64 VAR_5, u32 VAR_6,
  void *VAR_7, u32 VAR_8, u8 VAR_9, u8 *VAR_10, u64 *VAR_11)
{
 struct nvkm_object *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_4, VAR_5, ((void*)0));
 if (FUNC_1(VAR_12)) {
  FUNC_3(&VAR_4->object, "object not found\n");
  return FUNC_2(VAR_12);
 }

 if (VAR_9 != VAR_2 && VAR_9 != VAR_12->route) {
  FUNC_3(&VAR_4->object, "route != owner\n");
  return -VAR_0;
 }
 *VAR_10 = VAR_12->route;
 *VAR_11 = VAR_12->token;

 if (VAR_13 = -VAR_1, VAR_6 < FUNC_0(VAR_3)) {
  if (VAR_3[VAR_6].version == 0)
   VAR_13 = VAR_3[VAR_6].func(VAR_4, VAR_12, VAR_7, VAR_8);
 }

 return VAR_13;
}
