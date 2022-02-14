
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vc4_exec_info {size_t shader_state_count; int * shader_state; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct vc4_exec_info*,int *) ;

int
FUNC_1(struct drm_device *VAR_0,
    struct vc4_exec_info *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->shader_state_count; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_1->shader_state[VAR_2]);
  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
