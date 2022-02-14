
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct drm_syncobj_array {scalar_t__ pad; scalar_t__ count_handles; int handles; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,int ,scalar_t__,struct drm_syncobj***) ;
 int FUNC_2 (struct drm_syncobj**,size_t) ;
 int FUNC_3 (struct drm_syncobj*,int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct drm_device *VAR_3, void *VAR_4,
   struct drm_file *VAR_5)
{
 struct drm_syncobj_array *VAR_6 = VAR_4;
 struct drm_syncobj **VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 if (VAR_6->pad != 0)
  return -VAR_1;

 if (VAR_6->count_handles == 0)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5,
         FUNC_4(VAR_6->handles),
         VAR_6->count_handles,
         &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->count_handles; VAR_8++)
  FUNC_3(VAR_7[VAR_8], ((void*)0));

 FUNC_2(VAR_7, VAR_6->count_handles);

 return 0;
}
