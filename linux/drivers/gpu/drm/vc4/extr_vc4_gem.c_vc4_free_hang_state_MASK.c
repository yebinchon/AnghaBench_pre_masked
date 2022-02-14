
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bo_count; } ;
struct vc4_hang_state {int * bo; TYPE_1__ user_state; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vc4_hang_state*) ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_0, struct vc4_hang_state *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->user_state.bo_count; VAR_2++)
  FUNC_0(VAR_1->bo[VAR_2]);

 FUNC_1(VAR_1);
}
