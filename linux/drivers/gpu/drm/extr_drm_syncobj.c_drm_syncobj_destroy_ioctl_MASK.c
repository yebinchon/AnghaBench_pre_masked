
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_destroy {int handle; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int ) ;

int
FUNC_2(struct drm_device *VAR_3, void *VAR_4,
     struct drm_file *VAR_5)
{
 struct drm_syncobj_destroy *VAR_6 = VAR_4;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;


 if (VAR_6->pad)
  return -VAR_1;
 return FUNC_1(VAR_5, VAR_6->handle);
}
