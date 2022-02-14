
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {int rcl_write_bo_count; struct drm_gem_cma_object** rcl_write_bo; } ;
struct drm_vc4_submit_rcl_surface {scalar_t__ flags; scalar_t__ bits; int offset; int hindex; } ;
struct drm_gem_cma_object {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vc4_exec_info*,struct drm_gem_cma_object*,struct drm_vc4_submit_rcl_surface*) ;
 struct drm_gem_cma_object* FUNC_2 (struct vc4_exec_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct vc4_exec_info *VAR_1,
          struct drm_gem_cma_object **VAR_2,
          struct drm_vc4_submit_rcl_surface *VAR_3)
{
 if (VAR_3->flags != 0 || VAR_3->bits != 0) {
  FUNC_0("MSAA surface had nonzero flags/bits\n");
  return -VAR_0;
 }

 if (VAR_3->hindex == ~0)
  return 0;

 *VAR_2 = FUNC_2(VAR_1, VAR_3->hindex);
 if (!*VAR_2)
  return -VAR_0;

 VAR_1->rcl_write_bo[VAR_1->rcl_write_bo_count++] = *VAR_2;

 if (VAR_3->offset & 0xf) {
  FUNC_0("MSAA write must be 16b aligned.\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, *VAR_2, VAR_3);
}
