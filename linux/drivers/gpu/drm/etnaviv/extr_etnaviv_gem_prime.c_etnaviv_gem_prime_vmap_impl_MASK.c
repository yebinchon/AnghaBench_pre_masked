
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct etnaviv_gem_object {TYPE_2__ base; int lock; } ;
struct TYPE_3__ {int dmabuf; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct etnaviv_gem_object *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 return FUNC_0(VAR_0->base.import_attach->dmabuf);
}
