
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_file*) ;

__attribute__((used)) static int FUNC_2(struct drm_file *VAR_3,
          enum drm_sched_priority VAR_4)
{

 if (VAR_4 <= VAR_1)
  return 0;

 if (FUNC_0(VAR_0))
  return 0;

 if (FUNC_1(VAR_3))
  return 0;

 return -VAR_2;
}
