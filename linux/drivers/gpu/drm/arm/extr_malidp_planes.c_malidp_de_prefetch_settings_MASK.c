
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_plane_state {int mmu_prefetch_pgsize; int mmu_prefetch_mode; } ;
struct malidp_plane {TYPE_1__* layer; } ;
struct TYPE_2__ {int mmu_ctrl_offset; } ;


 int FUNC_0 (struct malidp_plane*) ;
 int FUNC_1 (struct malidp_plane_state*,int *) ;

__attribute__((used)) static void FUNC_2(struct malidp_plane *VAR_0,
     struct malidp_plane_state *VAR_1)
{
 if (!VAR_0->layer->mmu_ctrl_offset)
  return;


 VAR_1->mmu_prefetch_pgsize = FUNC_0(VAR_0);
 VAR_1->mmu_prefetch_mode =
  FUNC_1(VAR_1, &VAR_1->mmu_prefetch_pgsize);
}
