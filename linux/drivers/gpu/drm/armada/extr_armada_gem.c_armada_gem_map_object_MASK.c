
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct armada_gem_object {void* addr; TYPE_1__ obj; int phys_addr; scalar_t__ linear; } ;


 void* FUNC_0 (int ,int ) ;

void *
FUNC_1(struct drm_device *VAR_0, struct armada_gem_object *VAR_1)
{

 if (!VAR_1->addr && VAR_1->linear)
  VAR_1->addr = FUNC_0(VAR_1->phys_addr, VAR_1->obj.size);
 return VAR_1->addr;
}
