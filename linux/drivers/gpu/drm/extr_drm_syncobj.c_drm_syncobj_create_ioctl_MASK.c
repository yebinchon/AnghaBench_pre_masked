
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_create {int flags; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int *,int) ;

int
FUNC_2(struct drm_device *VAR_4, void *VAR_5,
    struct drm_file *VAR_6)
{
 struct drm_syncobj_create *VAR_7 = VAR_5;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_3;


 if (VAR_7->flags & ~VAR_1)
  return -VAR_2;

 return FUNC_1(VAR_6,
         &VAR_7->handle, VAR_7->flags);
}
