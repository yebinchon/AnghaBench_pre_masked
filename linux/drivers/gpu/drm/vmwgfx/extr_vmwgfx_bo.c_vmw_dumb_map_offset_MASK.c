
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int vma_node; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vmw_buffer_object {TYPE_2__ base; } ;
struct ttm_object_file {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {struct ttm_object_file* tfile; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmw_buffer_object**) ;
 TYPE_3__* FUNC_2 (struct drm_file*) ;
 int FUNC_3 (struct ttm_object_file*,int ,struct vmw_buffer_object**,int *) ;

int FUNC_4(struct drm_file *VAR_1,
   struct drm_device *VAR_2, uint32_t VAR_3,
   uint64_t *VAR_4)
{
 struct ttm_object_file *VAR_5 = FUNC_2(VAR_1)->tfile;
 struct vmw_buffer_object *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_6, ((void*)0));
 if (VAR_7 != 0)
  return -VAR_0;

 *VAR_4 = FUNC_0(&VAR_6->base.base.vma_node);
 FUNC_1(&VAR_6);
 return 0;
}
