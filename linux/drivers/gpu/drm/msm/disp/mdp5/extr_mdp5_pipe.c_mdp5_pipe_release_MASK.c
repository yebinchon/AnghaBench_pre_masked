
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct mdp5_kms {scalar_t__ smp; } ;
struct mdp5_hw_pipe_state {TYPE_2__** hwpipe_to_plane; } ;
struct mdp5_hw_pipe {size_t idx; int pipe; int name; } ;
struct mdp5_global_state {int smp; struct mdp5_hw_pipe_state hwpipe; } ;
struct drm_atomic_state {TYPE_1__* dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (int) ;
 struct mdp5_global_state* FUNC_2 (struct drm_atomic_state*) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 struct mdp5_kms* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct drm_atomic_state *VAR_0, struct mdp5_hw_pipe *VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct mdp5_kms *VAR_3 = FUNC_4(FUNC_5(VAR_2->kms));
 struct mdp5_global_state *VAR_4 = FUNC_2(VAR_0);
 struct mdp5_hw_pipe_state *VAR_5 = &VAR_4->hwpipe;

 if (!VAR_1)
  return;

 if (FUNC_1(!VAR_5->hwpipe_to_plane[VAR_1->idx]))
  return;

 FUNC_0("%s: release from plane %s", VAR_1->name,
  VAR_5->hwpipe_to_plane[VAR_1->idx]->name);

 if (VAR_3->smp) {
  FUNC_0("%s: free SMP blocks", VAR_1->name);
  FUNC_3(VAR_3->smp, &VAR_4->smp, VAR_1->pipe);
 }

 VAR_5->hwpipe_to_plane[VAR_1->idx] = ((void*)0);
}
