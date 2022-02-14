
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct mm_struct {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_amdgpu_bo_list_entry {int bo_priority; int bo_handle; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {TYPE_2__* bo; } ;
struct amdgpu_bo_list_entry {TYPE_1__ tv; int priority; } ;
struct amdgpu_bo_list {unsigned int first_userptr; unsigned int num_entries; struct amdgpu_bo* oa_obj; struct amdgpu_bo* gws_obj; struct amdgpu_bo* gds_obj; int refcount; } ;
struct TYPE_5__ {int ttm; } ;
struct amdgpu_bo {scalar_t__ preferred_domains; TYPE_2__ tbo; } ;
struct TYPE_6__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct amdgpu_bo_list_entry* FUNC_0 (struct amdgpu_bo_list*,int ) ;
 struct amdgpu_bo* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo**) ;
 struct mm_struct* FUNC_4 (int ) ;
 TYPE_3__* VAR_10 ;
 struct drm_gem_object* FUNC_5 (struct drm_file*,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct amdgpu_bo_list*) ;
 struct amdgpu_bo_list* FUNC_10 (size_t,int ) ;
 int FUNC_11 (struct amdgpu_bo_list_entry*,int ,unsigned int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct amdgpu_bo_list*,struct amdgpu_bo*) ;
 int FUNC_14 (unsigned int,int ) ;
 struct amdgpu_bo* FUNC_15 (TYPE_2__*) ;

int FUNC_16(struct amdgpu_device *VAR_11, struct drm_file *VAR_12,
     struct drm_amdgpu_bo_list_entry *VAR_13,
     unsigned VAR_14, struct amdgpu_bo_list **VAR_15)
{
 unsigned VAR_16 = 0, VAR_17 = VAR_14;
 struct amdgpu_bo_list_entry *VAR_18;
 struct amdgpu_bo_list *VAR_19;
 uint64_t VAR_20 = 0;
 size_t VAR_21;
 unsigned VAR_22;
 int VAR_23;

 if (VAR_14 > (VAR_9 - sizeof(struct amdgpu_bo_list))
    / sizeof(struct amdgpu_bo_list_entry))
  return -VAR_4;

 VAR_21 = sizeof(struct amdgpu_bo_list);
 VAR_21 += VAR_14 * sizeof(struct amdgpu_bo_list_entry);
 VAR_19 = FUNC_10(VAR_21, VAR_8);
 if (!VAR_19)
  return -VAR_6;

 FUNC_8(&VAR_19->refcount);
 VAR_19->gds_obj = ((void*)0);
 VAR_19->gws_obj = ((void*)0);
 VAR_19->oa_obj = ((void*)0);

 VAR_18 = FUNC_0(VAR_19, 0);
 FUNC_11(VAR_18, 0, VAR_14 * sizeof(struct amdgpu_bo_list_entry));

 for (VAR_22 = 0; VAR_22 < VAR_14; ++VAR_22) {
  struct amdgpu_bo_list_entry *VAR_24;
  struct drm_gem_object *VAR_25;
  struct amdgpu_bo *VAR_26;
  struct mm_struct *VAR_27;

  VAR_25 = FUNC_5(VAR_12, VAR_13[VAR_22].bo_handle);
  if (!VAR_25) {
   VAR_23 = -VAR_5;
   goto error_free;
  }

  VAR_26 = FUNC_1(FUNC_7(VAR_25));
  FUNC_6(VAR_25);

  VAR_27 = FUNC_4(VAR_26->tbo.ttm);
  if (VAR_27) {
   if (VAR_27 != VAR_10->mm) {
    FUNC_3(&VAR_26);
    VAR_23 = -VAR_7;
    goto error_free;
   }
   VAR_24 = &VAR_18[--VAR_17];
  } else {
   VAR_24 = &VAR_18[VAR_16++];
  }

  VAR_24->priority = FUNC_12(VAR_13[VAR_22].bo_priority,
          VAR_0);
  VAR_24->tv.bo = &VAR_26->tbo;

  if (VAR_26->preferred_domains == VAR_1)
   VAR_19->gds_obj = VAR_26;
  if (VAR_26->preferred_domains == VAR_2)
   VAR_19->gws_obj = VAR_26;
  if (VAR_26->preferred_domains == VAR_3)
   VAR_19->oa_obj = VAR_26;

  VAR_20 += FUNC_2(VAR_26);
  FUNC_13(VAR_19, VAR_26);
 }

 VAR_19->first_userptr = VAR_17;
 VAR_19->num_entries = VAR_14;

 FUNC_14(VAR_19->num_entries, VAR_20);

 *VAR_15 = VAR_19;
 return 0;

error_free:
 for (VAR_22 = 0; VAR_22 < VAR_16; ++VAR_22) {
  struct amdgpu_bo *VAR_28 = FUNC_15(VAR_18[VAR_22].tv.bo);

  FUNC_3(&VAR_28);
 }
 for (VAR_22 = VAR_17; VAR_22 < VAR_14; ++VAR_22) {
  struct amdgpu_bo *VAR_29 = FUNC_15(VAR_18[VAR_22].tv.bo);

  FUNC_3(&VAR_29);
 }
 FUNC_9(VAR_19);
 return VAR_23;

}
