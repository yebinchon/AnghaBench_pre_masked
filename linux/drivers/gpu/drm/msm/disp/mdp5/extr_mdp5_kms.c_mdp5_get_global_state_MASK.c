
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct mdp5_kms {int glob_state; int glob_state_lock; } ;
struct mdp5_global_state {int dummy; } ;
struct drm_private_state {int dummy; } ;
struct drm_atomic_state {int acquire_ctx; TYPE_1__* dev; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 struct mdp5_global_state* FUNC_0 (struct drm_private_state*) ;
 struct mdp5_global_state* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_private_state*) ;
 struct drm_private_state* FUNC_3 (struct drm_atomic_state*,int *) ;
 int FUNC_4 (int *,int ) ;
 struct mdp5_global_state* FUNC_5 (struct drm_private_state*) ;
 struct mdp5_kms* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

struct mdp5_global_state *FUNC_8(struct drm_atomic_state *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev->dev_private;
 struct mdp5_kms *VAR_2 = FUNC_6(FUNC_7(VAR_1->kms));
 struct drm_private_state *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(&VAR_2->glob_state_lock, VAR_0->acquire_ctx);
 if (VAR_4)
  return FUNC_1(VAR_4);

 VAR_3 = FUNC_3(VAR_0, &VAR_2->glob_state);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 return FUNC_5(VAR_3);
}
