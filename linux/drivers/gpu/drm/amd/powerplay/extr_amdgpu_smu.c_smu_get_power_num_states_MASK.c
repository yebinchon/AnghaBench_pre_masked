
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
struct pp_states_info {int nums; int * states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_states_info*,int ,int) ;

int FUNC_1(struct smu_context *VAR_2,
        struct pp_states_info *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;


 FUNC_0(VAR_3, 0, sizeof(struct pp_states_info));
 VAR_3->nums = 1;
 VAR_3->states[0] = VAR_1;

 return 0;
}
