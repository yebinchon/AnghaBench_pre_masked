
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct drm_gem_cma_object* uint32_t ;
struct vc4_exec_info {int bo_count; struct drm_gem_cma_object** bo; struct drm_vc4_submit_cl* args; } ;
struct drm_vc4_submit_cl {int bo_handle_count; int bo_handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_cma_object {int base; } ;
struct drm_file {int table_lock; int object_idr; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct drm_gem_cma_object**,int ,int) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int *) ;
 struct drm_gem_object* FUNC_5 (int *,struct drm_gem_cma_object*) ;
 int FUNC_6 (struct drm_gem_cma_object**) ;
 void* FUNC_7 (int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct drm_device *VAR_5,
    struct drm_file *VAR_6,
    struct vc4_exec_info *VAR_7)
{
 struct drm_vc4_submit_cl *VAR_8 = VAR_7->args;
 uint32_t *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_7->bo_count = VAR_8->bo_handle_count;

 if (!VAR_7->bo_count) {



  FUNC_0("Rendering requires BOs to validate\n");
  return -VAR_1;
 }

 VAR_7->bo = FUNC_7(VAR_7->bo_count,
        sizeof(struct drm_gem_cma_object *),
        VAR_3 | VAR_4);
 if (!VAR_7->bo) {
  FUNC_1("Failed to allocate validated BO pointers\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_7(VAR_7->bo_count, sizeof(uint32_t), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  FUNC_1("Failed to allocate incoming GEM handles\n");
  goto fail;
 }

 if (FUNC_2(VAR_9, FUNC_11(VAR_8->bo_handles),
      VAR_7->bo_count * sizeof(uint32_t))) {
  VAR_10 = -VAR_0;
  FUNC_1("Failed to copy in GEM handles\n");
  goto fail;
 }

 FUNC_8(&VAR_6->table_lock);
 for (VAR_11 = 0; VAR_11 < VAR_7->bo_count; VAR_11++) {
  struct drm_gem_object *VAR_12 = FUNC_5(&VAR_6->object_idr,
           VAR_9[VAR_11]);
  if (!VAR_12) {
   FUNC_0("Failed to look up GEM BO %d: %d\n",
      VAR_11, VAR_9[VAR_11]);
   VAR_10 = -VAR_1;
   break;
  }

  FUNC_3(VAR_12);
  VAR_7->bo[VAR_11] = (struct drm_gem_cma_object *)VAR_12;
 }
 FUNC_9(&VAR_6->table_lock);

 if (VAR_10)
  goto fail_put_bo;

 for (VAR_11 = 0; VAR_11 < VAR_7->bo_count; VAR_11++) {
  VAR_10 = FUNC_13(FUNC_10(&VAR_7->bo[VAR_11]->base));
  if (VAR_10)
   goto fail_dec_usecnt;
 }

 FUNC_6(VAR_9);
 return 0;

fail_dec_usecnt:
 for (VAR_11-- ; VAR_11 >= 0; VAR_11--)
  FUNC_12(FUNC_10(&VAR_7->bo[VAR_11]->base));

fail_put_bo:

 for (VAR_11 = 0; VAR_11 < VAR_7->bo_count && VAR_7->bo[VAR_11]; VAR_11++)
  FUNC_4(&VAR_7->bo[VAR_11]->base);

fail:
 FUNC_6(VAR_9);
 FUNC_6(VAR_7->bo);
 VAR_7->bo = ((void*)0);
 return VAR_10;
}
