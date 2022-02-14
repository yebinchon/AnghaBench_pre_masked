
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_msm_gem_new {int flags; int handle; int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ,int,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct drm_msm_gem_new *VAR_5 = VAR_3;

 if (VAR_5->flags & ~VAR_1) {
  FUNC_0("invalid flags: %08x\n", VAR_5->flags);
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_4, VAR_5->size,
   VAR_5->flags, &VAR_5->handle, ((void*)0));
}
