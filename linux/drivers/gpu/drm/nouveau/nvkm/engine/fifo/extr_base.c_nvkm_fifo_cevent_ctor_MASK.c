
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {int types; scalar_t__ index; scalar_t__ size; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
        struct nvkm_notify *VAR_4)
{
 if (VAR_3 == 0) {
  VAR_4->size = 0;
  VAR_4->types = 1;
  VAR_4->index = 0;
  return 0;
 }
 return -VAR_0;
}
