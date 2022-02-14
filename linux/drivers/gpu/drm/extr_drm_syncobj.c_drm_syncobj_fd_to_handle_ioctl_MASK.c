
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_handle {int flags; int handle; int fd; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int ,int *) ;
 int FUNC_2 (struct drm_file*,int ,int ) ;

int
FUNC_3(struct drm_device *VAR_4, void *VAR_5,
       struct drm_file *VAR_6)
{
 struct drm_syncobj_handle *VAR_7 = VAR_5;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_3;

 if (VAR_7->pad)
  return -VAR_2;

 if (VAR_7->flags != 0 &&
     VAR_7->flags != VAR_1)
  return -VAR_2;

 if (VAR_7->flags & VAR_1)
  return FUNC_2(VAR_6,
         VAR_7->fd,
         VAR_7->handle);

 return FUNC_1(VAR_6, VAR_7->fd,
     &VAR_7->handle);
}
