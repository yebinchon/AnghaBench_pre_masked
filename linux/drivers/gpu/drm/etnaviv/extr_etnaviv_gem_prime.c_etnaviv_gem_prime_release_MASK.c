
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct etnaviv_gem_object {int sgt; TYPE_2__ base; scalar_t__ pages; scalar_t__ vaddr; } ;
struct TYPE_3__ {int dmabuf; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gem_object *VAR_0)
{
 if (VAR_0->vaddr)
  FUNC_0(VAR_0->base.import_attach->dmabuf,
          VAR_0->vaddr);




 if (VAR_0->pages)
  FUNC_2(VAR_0->pages);

 FUNC_1(&VAR_0->base, VAR_0->sgt);
}
