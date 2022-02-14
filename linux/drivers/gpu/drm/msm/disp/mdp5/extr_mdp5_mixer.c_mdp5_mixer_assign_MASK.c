
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_drm_private {int kms; } ;
struct mdp5_kms {int num_hwmixers; struct mdp5_hw_mixer** hwmixers; } ;
struct mdp5_hw_mixer_state {struct drm_crtc** hwmixer_to_crtc; } ;
struct mdp5_hw_mixer {size_t idx; int caps; int lm; } ;
struct mdp5_global_state {struct mdp5_hw_mixer_state hwmixer; } ;
struct drm_crtc {int name; } ;
struct drm_atomic_state {TYPE_1__* dev; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mdp5_global_state*) ;
 int VAR_2 ;
 int FUNC_2 (struct mdp5_global_state*) ;
 int FUNC_3 (struct mdp5_kms*,int ) ;
 struct mdp5_global_state* FUNC_4 (struct drm_atomic_state*) ;
 struct mdp5_kms* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct drm_atomic_state *VAR_3, struct drm_crtc *VAR_4,
        uint32_t VAR_5, struct mdp5_hw_mixer **VAR_6,
        struct mdp5_hw_mixer **VAR_7)
{
 struct msm_drm_private *VAR_8 = VAR_3->dev->dev_private;
 struct mdp5_kms *VAR_9 = FUNC_5(FUNC_6(VAR_8->kms));
 struct mdp5_global_state *VAR_10 = FUNC_4(VAR_3);
 struct mdp5_hw_mixer_state *VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_11 = &VAR_10->hwmixer;

 for (VAR_12 = 0; VAR_12 < VAR_9->num_hwmixers; VAR_12++) {
  struct mdp5_hw_mixer *VAR_13 = VAR_9->hwmixers[VAR_12];
  if (VAR_11->hwmixer_to_crtc[VAR_13->idx] &&
      VAR_11->hwmixer_to_crtc[VAR_13->idx] != VAR_4)
   continue;


  if (VAR_5 & ~VAR_13->caps)
   continue;

  if (VAR_7) {
   int VAR_14;

   VAR_14 = FUNC_3(VAR_9, VAR_13->lm);
   if (VAR_14 < 0)
    return -VAR_0;

   if (VAR_11->hwmixer_to_crtc[VAR_14])
    continue;

   *VAR_7 = VAR_9->hwmixers[VAR_14];
  }
  if (!(*VAR_6) || VAR_13->caps & VAR_2)
   *VAR_6 = VAR_13;
 }

 if (!(*VAR_6))
  return -VAR_1;

 if (VAR_7 && !(*VAR_7))
  return -VAR_1;

 FUNC_0("assigning Layer Mixer %d to crtc %s", (*VAR_6)->lm, VAR_4->name);

 VAR_11->hwmixer_to_crtc[(*VAR_6)->idx] = VAR_4;
 if (VAR_7) {
  FUNC_0("assigning Right Layer Mixer %d to crtc %s", (*VAR_7)->lm,
      VAR_4->name);
  VAR_11->hwmixer_to_crtc[(*VAR_7)->idx] = VAR_4;
 }

 return 0;
}
