
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {int size; int index; int types; } ;
struct nvkm_gpio_ntfy_req {int line; int mask; } ;
struct nvkm_gpio_ntfy_rep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
      struct nvkm_notify *VAR_4)
{
 struct nvkm_gpio_ntfy_req *VAR_5 = VAR_2;
 if (!FUNC_0(VAR_3 != sizeof(*VAR_5))) {
  VAR_4->size = sizeof(struct nvkm_gpio_ntfy_rep);
  VAR_4->types = VAR_5->mask;
  VAR_4->index = VAR_5->line;
  return 0;
 }
 return -VAR_0;
}
