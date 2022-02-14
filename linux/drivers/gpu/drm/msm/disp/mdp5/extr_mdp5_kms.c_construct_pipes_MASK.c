
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp5_kms {int num_hwpipes; struct mdp5_hw_pipe** hwpipes; struct drm_device* dev; } ;
struct mdp5_hw_pipe {int idx; } ;
struct drm_device {int dev; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct mdp5_hw_pipe*) ;
 int FUNC_2 (struct mdp5_hw_pipe*) ;
 struct mdp5_hw_pipe* FUNC_3 (int const,int const,int ) ;
 int FUNC_4 (int const) ;

__attribute__((used)) static int FUNC_5(struct mdp5_kms *VAR_0, int VAR_1,
  const enum mdp5_pipe *VAR_2, const uint32_t *VAR_3,
  uint32_t VAR_4)
{
 struct drm_device *VAR_5 = VAR_0->dev;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct mdp5_hw_pipe *VAR_8;

  VAR_8 = FUNC_3(VAR_2[VAR_6], VAR_3[VAR_6], VAR_4);
  if (FUNC_1(VAR_8)) {
   VAR_7 = FUNC_2(VAR_8);
   FUNC_0(VAR_5->dev, "failed to construct pipe for %s (%d)\n",
     FUNC_4(VAR_2[VAR_6]), VAR_7);
   return VAR_7;
  }
  VAR_8->idx = VAR_0->num_hwpipes;
  VAR_0->hwpipes[VAR_0->num_hwpipes++] = VAR_8;
 }

 return 0;
}
