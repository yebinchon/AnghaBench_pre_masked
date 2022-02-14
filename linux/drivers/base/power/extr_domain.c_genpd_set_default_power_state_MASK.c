
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpd_power_state {int dummy; } ;
struct generic_pm_domain {int state_count; int free_states; struct genpd_power_state* states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct genpd_power_state* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct generic_pm_domain *VAR_3)
{
 struct genpd_power_state *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->states = VAR_4;
 VAR_3->state_count = 1;
 VAR_3->free_states = VAR_2;

 return 0;
}
