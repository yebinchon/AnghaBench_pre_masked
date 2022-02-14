
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct malidp_plane_state {int mmu_prefetch_pgsize; int n_planes; int mmu_prefetch_mode; } ;
struct malidp_plane {TYPE_1__* layer; int hwdev; } ;
struct TYPE_2__ {scalar_t__ mmu_ctrl_offset; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct malidp_plane *VAR_1,
          struct malidp_plane_state *VAR_2)
{
 u32 VAR_3;


 if (!VAR_1->layer->mmu_ctrl_offset)
  return;

 VAR_3 = FUNC_0(VAR_2->mmu_prefetch_mode,
       VAR_0,
       VAR_2->n_planes,
       VAR_2->mmu_prefetch_pgsize);

 FUNC_1(VAR_1->hwdev, VAR_3,
   VAR_1->layer->base + VAR_1->layer->mmu_ctrl_offset);
}
