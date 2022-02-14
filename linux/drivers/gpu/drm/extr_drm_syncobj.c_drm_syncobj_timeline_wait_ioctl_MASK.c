
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_timeline_wait {int flags; scalar_t__ count_handles; int handles; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int ,scalar_t__,struct drm_syncobj***) ;
 int FUNC_2 (struct drm_syncobj**,scalar_t__) ;
 int FUNC_3 (struct drm_device*,struct drm_file*,int *,struct drm_syncobj_timeline_wait*,struct drm_syncobj**,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct drm_device *VAR_6, void *VAR_7,
    struct drm_file *VAR_8)
{
 struct drm_syncobj_timeline_wait *VAR_9 = VAR_7;
 struct drm_syncobj **VAR_10;
 int VAR_11 = 0;

 if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_5;

 if (VAR_9->flags & ~(VAR_1 |
       VAR_3 |
       VAR_2))
  return -VAR_4;

 if (VAR_9->count_handles == 0)
  return -VAR_4;

 VAR_11 = FUNC_1(VAR_8,
         FUNC_4(VAR_9->handles),
         VAR_9->count_handles,
         &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_8,
         ((void*)0), VAR_9, VAR_10, 1);

 FUNC_2(VAR_10, VAR_9->count_handles);

 return VAR_11;
}
