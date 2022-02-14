
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_lm_instance {size_t id; int dspp; int pp; int caps; } ;
struct mdp5_hw_mixer {size_t lm; int flush_mask; int dspp; int pp; int caps; int name; } ;


 int VAR_0 ;
 struct mdp5_hw_mixer* FUNC_0 (int ) ;
 int VAR_1 ;
 struct mdp5_hw_mixer* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t) ;
 int * VAR_2 ;

struct mdp5_hw_mixer *FUNC_3(const struct mdp5_lm_instance *VAR_3)
{
 struct mdp5_hw_mixer *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->name = VAR_2[VAR_3->id];
 VAR_4->lm = VAR_3->id;
 VAR_4->caps = VAR_3->caps;
 VAR_4->pp = VAR_3->pp;
 VAR_4->dspp = VAR_3->dspp;
 VAR_4->flush_mask = FUNC_2(VAR_3->id);

 return VAR_4;
}
