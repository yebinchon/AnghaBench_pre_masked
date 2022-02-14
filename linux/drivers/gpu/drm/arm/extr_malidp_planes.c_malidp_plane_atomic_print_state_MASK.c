
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_plane_state {size_t mmu_prefetch_mode; int mmu_prefetch_pgsize; int n_planes; int format; int rotmem_size; } ;
struct drm_printer {int dummy; } ;
struct drm_plane_state {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,int ) ;
 int * VAR_0 ;
 struct malidp_plane_state* FUNC_1 (struct drm_plane_state const*) ;

__attribute__((used)) static void FUNC_2(struct drm_printer *VAR_1,
         const struct drm_plane_state *VAR_2)
{
 struct malidp_plane_state *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, "\trotmem_size=%u\n", VAR_3->rotmem_size);
 FUNC_0(VAR_1, "\tformat_id=%u\n", VAR_3->format);
 FUNC_0(VAR_1, "\tn_planes=%u\n", VAR_3->n_planes);
 FUNC_0(VAR_1, "\tmmu_prefetch_mode=%s\n",
     VAR_0[VAR_3->mmu_prefetch_mode]);
 FUNC_0(VAR_1, "\tmmu_prefetch_pgsize=%d\n", VAR_3->mmu_prefetch_pgsize);
}
