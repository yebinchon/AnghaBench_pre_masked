
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_vram_mapping {scalar_t__ iova; } ;
struct etnaviv_gem_submit {int nr_bos; int flags; TYPE_1__* bos; int mmu_context; } ;
struct etnaviv_gem_object {int gpu_active; int base; } ;
struct TYPE_2__ {scalar_t__ va; struct etnaviv_vram_mapping* mapping; int flags; struct etnaviv_gem_object* obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct etnaviv_vram_mapping*) ;
 int FUNC_1 (struct etnaviv_vram_mapping*) ;
 int FUNC_2 (int *) ;
 struct etnaviv_vram_mapping* FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct etnaviv_gem_submit *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_bos; VAR_4++) {
  struct etnaviv_gem_object *VAR_6 = VAR_3->bos[VAR_4].obj;
  struct etnaviv_vram_mapping *VAR_7;

  VAR_7 = FUNC_3(&VAR_6->base,
        VAR_3->mmu_context,
        VAR_3->bos[VAR_4].va);
  if (FUNC_0(VAR_7)) {
   VAR_5 = FUNC_1(VAR_7);
   break;
  }

  if ((VAR_3->flags & VAR_2) &&
       VAR_3->bos[VAR_4].va != VAR_7->iova)
   return -VAR_1;

  FUNC_2(&VAR_6->gpu_active);

  VAR_3->bos[VAR_4].flags |= VAR_0;
  VAR_3->bos[VAR_4].mapping = VAR_7;
 }

 return VAR_5;
}
