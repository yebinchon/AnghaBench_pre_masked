
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_kms {int num_hwmixers; struct mdp5_hw_mixer** hwmixers; int cfg; struct drm_device* dev; } ;
struct mdp5_hw_mixer {int idx; } ;
struct TYPE_2__ {int count; int * instances; } ;
struct mdp5_cfg_hw {TYPE_1__ lm; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (struct mdp5_hw_mixer*) ;
 int FUNC_2 (struct mdp5_hw_mixer*) ;
 struct mdp5_cfg_hw* FUNC_3 (int ) ;
 struct mdp5_hw_mixer* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mdp5_kms *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 const struct mdp5_cfg_hw *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_3(VAR_0->cfg);

 for (VAR_3 = 0; VAR_3 < VAR_2->lm.count; VAR_3++) {
  struct mdp5_hw_mixer *VAR_5;

  VAR_5 = FUNC_4(&VAR_2->lm.instances[VAR_3]);
  if (FUNC_1(VAR_5)) {
   VAR_4 = FUNC_2(VAR_5);
   FUNC_0(VAR_1->dev, "failed to construct LM%d (%d)\n",
    VAR_3, VAR_4);
   return VAR_4;
  }

  VAR_5->idx = VAR_0->num_hwmixers;
  VAR_0->hwmixers[VAR_0->num_hwmixers++] = VAR_5;
 }

 return 0;
}
