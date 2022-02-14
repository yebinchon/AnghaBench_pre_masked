
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_kms {int num_hwmixers; struct mdp5_hw_mixer** hwmixers; } ;
struct mdp5_hw_mixer {int lm; int idx; } ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mdp5_kms *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = VAR_1[VAR_3];
 if (VAR_5 < 0)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_hwmixers; VAR_4++) {
  struct mdp5_hw_mixer *VAR_6 = VAR_2->hwmixers[VAR_4];

  if (VAR_6->lm == VAR_5)
   return VAR_6->idx;
 }

 return -1;
}
