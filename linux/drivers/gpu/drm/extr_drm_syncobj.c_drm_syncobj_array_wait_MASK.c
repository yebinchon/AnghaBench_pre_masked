
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct drm_syncobj_wait {void* first_signaled; int flags; int count_handles; int timeout_nsec; } ;
struct drm_syncobj_timeline_wait {void* first_signaled; int flags; int count_handles; int points; int timeout_nsec; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 long FUNC_0 (struct drm_syncobj**,int *,int ,int ,long,void**) ;
 long FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0,
      struct drm_file *VAR_1,
      struct drm_syncobj_wait *VAR_2,
      struct drm_syncobj_timeline_wait *VAR_3,
      struct drm_syncobj **VAR_4, bool VAR_5)
{
 signed long VAR_6 = 0;
 uint32_t VAR_7 = ~0;

 if (!VAR_5) {
  VAR_6 = FUNC_1(VAR_2->timeout_nsec);
  VAR_6 = FUNC_0(VAR_4,
        ((void*)0),
        VAR_2->count_handles,
        VAR_2->flags,
        VAR_6, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_2->first_signaled = VAR_7;
 } else {
  VAR_6 = FUNC_1(VAR_3->timeout_nsec);
  VAR_6 = FUNC_0(VAR_4,
        FUNC_2(VAR_3->points),
        VAR_3->count_handles,
        VAR_3->flags,
        VAR_6, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_3->first_signaled = VAR_7;
 }
 return 0;
}
