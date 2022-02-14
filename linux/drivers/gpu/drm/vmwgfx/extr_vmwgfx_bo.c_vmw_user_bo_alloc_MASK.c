
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_base_object {int handle; int refcount; } ;
struct TYPE_2__ {struct ttm_base_object base; } ;
struct vmw_buffer_object {int base; } ;
struct vmw_user_buffer_object {TYPE_1__ prime; struct vmw_buffer_object vbo; } ;
struct vmw_private {scalar_t__ has_mob; } ;
struct ttm_object_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct vmw_user_buffer_object* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct ttm_object_file*,int ,TYPE_1__*,int,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_private*,struct vmw_buffer_object*,int ,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_8(struct vmw_private *VAR_8,
        struct ttm_object_file *VAR_9,
        uint32_t VAR_10,
        bool VAR_11,
        uint32_t *VAR_12,
        struct vmw_buffer_object **VAR_13,
        struct ttm_base_object **VAR_14)
{
 struct vmw_user_buffer_object *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_1);
 if (FUNC_6(!VAR_15)) {
  FUNC_0("Failed to allocate a buffer.\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(VAR_8, &VAR_15->vbo, VAR_10,
     (VAR_8->has_mob) ?
     &VAR_3 :
     &VAR_7, 1,
     &VAR_4);
 if (FUNC_6(VAR_16 != 0))
  return VAR_16;

 FUNC_3(&VAR_15->vbo.base);
 VAR_16 = FUNC_5(VAR_9,
        VAR_10,
        &VAR_15->prime,
        VAR_11,
        VAR_2,
        &VAR_6,
        &VAR_5);
 if (FUNC_6(VAR_16 != 0)) {
  FUNC_4(&VAR_15->vbo.base);
  goto out_no_base_object;
 }

 *VAR_13 = &VAR_15->vbo;
 if (VAR_14) {
  *VAR_14 = &VAR_15->prime.base;
  FUNC_1(&(*VAR_14)->refcount);
 }
 *VAR_12 = VAR_15->prime.base.handle;

out_no_base_object:
 return VAR_16;
}
