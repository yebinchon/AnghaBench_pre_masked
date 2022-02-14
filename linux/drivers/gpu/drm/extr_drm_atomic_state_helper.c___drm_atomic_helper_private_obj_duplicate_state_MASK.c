
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_private_state {int dummy; } ;
struct drm_private_obj {int state; } ;


 int FUNC_0 (struct drm_private_state*,int ,int) ;

void FUNC_1(struct drm_private_obj *VAR_0,
           struct drm_private_state *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->state, sizeof(*VAR_1));
}
