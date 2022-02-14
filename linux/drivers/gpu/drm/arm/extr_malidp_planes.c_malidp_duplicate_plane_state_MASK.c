
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct malidp_plane_state {struct drm_plane_state base; int mmu_prefetch_pgsize; int mmu_prefetch_mode; int n_planes; int format; int rotmem_size; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct malidp_plane_state* FUNC_1 (int,int ) ;
 struct malidp_plane_state* FUNC_2 (int ) ;

__attribute__((used)) static struct
drm_plane_state *FUNC_3(struct drm_plane *VAR_1)
{
 struct malidp_plane_state *VAR_2, *VAR_3;

 if (!VAR_1->state)
  return ((void*)0);

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1->state);
 FUNC_0(VAR_1, &VAR_2->base);
 VAR_2->rotmem_size = VAR_3->rotmem_size;
 VAR_2->format = VAR_3->format;
 VAR_2->n_planes = VAR_3->n_planes;

 VAR_2->mmu_prefetch_mode = VAR_3->mmu_prefetch_mode;
 VAR_2->mmu_prefetch_pgsize = VAR_3->mmu_prefetch_pgsize;

 return &VAR_2->base;
}
