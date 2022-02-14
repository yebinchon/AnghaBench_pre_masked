
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_reg {int mem_type; } ;
struct ttm_bo_device {int dummy; } ;
struct TYPE_6__ {int object; } ;
struct nouveau_mem {TYPE_3__ mem; int kind; } ;
struct TYPE_5__ {TYPE_1__* mem; } ;
struct nouveau_drm {TYPE_2__ client; } ;
struct TYPE_4__ {scalar_t__ oclass; } ;


 scalar_t__ VAR_0 ;


 struct nouveau_drm* FUNC_0 (struct ttm_bo_device*) ;
 struct nouveau_mem* FUNC_1 (struct ttm_mem_reg*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ttm_bo_device *VAR_1, struct ttm_mem_reg *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_1);
 struct nouveau_mem *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->client.mem->oclass >= VAR_0) {
  switch (VAR_2->mem_type) {
  case 129:
   if (VAR_4->kind)
    FUNC_2(&VAR_4->mem.object);
   break;
  case 128:
   FUNC_2(&VAR_4->mem.object);
   break;
  default:
   break;
  }
 }
}
