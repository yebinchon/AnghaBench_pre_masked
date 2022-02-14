
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vmw_shader_create_arg {int shader_handle; int offset; int size; int buffer_handle; int shader_type; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_file*,int ,int ,int ,int ,int ,int ,int *) ;

int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
        struct drm_file *VAR_2)
{
 struct drm_vmw_shader_create_arg *VAR_3 =
  (struct drm_vmw_shader_create_arg *)VAR_1;

 return FUNC_0(VAR_0, VAR_2, VAR_3->shader_type,
     VAR_3->buffer_handle,
     VAR_3->size, VAR_3->offset,
     0, 0,
     &VAR_3->shader_handle);
}
