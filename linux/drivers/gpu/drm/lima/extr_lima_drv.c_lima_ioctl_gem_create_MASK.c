
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_lima_gem_create {scalar_t__ size; int handle; scalar_t__ flags; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 struct drm_lima_gem_create *VAR_4 = VAR_2;

 if (VAR_4->pad)
  return -VAR_0;

 if (VAR_4->flags)
  return -VAR_0;

 if (VAR_4->size == 0)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3, VAR_4->size, VAR_4->flags, &VAR_4->handle);
}
