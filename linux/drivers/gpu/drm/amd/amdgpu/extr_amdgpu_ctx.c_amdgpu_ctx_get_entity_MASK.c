
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_sched_entity {int dummy; } ;
struct amdgpu_ctx {TYPE_1__** entities; } ;
struct TYPE_2__ {struct drm_sched_entity entity; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

int FUNC_2(struct amdgpu_ctx *VAR_3, u32 VAR_4, u32 VAR_5,
     u32 VAR_6, struct drm_sched_entity **VAR_7)
{
 if (VAR_4 >= VAR_0) {
  FUNC_1("unknown HW IP type: %d\n", VAR_4);
  return -VAR_1;
 }


 if (VAR_5 != 0) {
  FUNC_0("invalid ip instance: %d\n", VAR_5);
  return -VAR_1;
 }

 if (VAR_6 >= VAR_2[VAR_4]) {
  FUNC_0("invalid ring: %d %d\n", VAR_4, VAR_6);
  return -VAR_1;
 }

 *VAR_7 = &VAR_3->entities[VAR_4][VAR_6].entity;
 return 0;
}
