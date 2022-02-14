
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_hw_mixer_state {TYPE_1__** hwmixer_to_crtc; } ;
struct mdp5_hw_mixer {size_t idx; int name; } ;
struct mdp5_global_state {struct mdp5_hw_mixer_state hwmixer; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mdp5_global_state* FUNC_2 (struct drm_atomic_state*) ;

void FUNC_3(struct drm_atomic_state *VAR_0, struct mdp5_hw_mixer *VAR_1)
{
 struct mdp5_global_state *VAR_2 = FUNC_2(VAR_0);
 struct mdp5_hw_mixer_state *VAR_3 = &VAR_2->hwmixer;

 if (!VAR_1)
  return;

 if (FUNC_1(!VAR_3->hwmixer_to_crtc[VAR_1->idx]))
  return;

 FUNC_0("%s: release from crtc %s", VAR_1->name,
     VAR_3->hwmixer_to_crtc[VAR_1->idx]->name);

 VAR_3->hwmixer_to_crtc[VAR_1->idx] = ((void*)0);
}
