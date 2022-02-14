
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_object_file {int dummy; } ;
struct ttm_buffer_object {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct drm_file {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 TYPE_1__* FUNC_0 (struct drm_file*) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_object_file*) ;

__attribute__((used)) static int FUNC_2(struct ttm_buffer_object *VAR_0, struct file *VAR_1)
{
 struct ttm_object_file *VAR_2 =
  FUNC_0((struct drm_file *)VAR_1->private_data)->tfile;

 return FUNC_1(VAR_0, VAR_2);
}
