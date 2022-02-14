
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_wait {int flags; scalar_t__ count_handles; int handles; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int ,scalar_t__,struct drm_syncobj***) ;
 int FUNC_2 (struct drm_syncobj**,scalar_t__) ;
 int FUNC_3 (struct drm_device*,struct drm_file*,struct drm_syncobj_wait*,int *,struct drm_syncobj**,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct drm_device *VAR_5, void *VAR_6,
         struct drm_file *VAR_7)
{
 struct drm_syncobj_wait *VAR_8 = VAR_6;
 struct drm_syncobj **VAR_9;
 int VAR_10 = 0;

 if (!FUNC_0(VAR_5, VAR_0))
  return -VAR_4;

 if (VAR_8->flags & ~(VAR_1 |
       VAR_2))
  return -VAR_3;

 if (VAR_8->count_handles == 0)
  return -VAR_3;

 VAR_10 = FUNC_1(VAR_7,
         FUNC_4(VAR_8->handles),
         VAR_8->count_handles,
         &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_7,
         VAR_8, ((void*)0), VAR_9, 0);

 FUNC_2(VAR_9, VAR_8->count_handles);

 return VAR_10;
}
