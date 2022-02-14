
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_component_state {int active_inputs; struct komeda_component* component; } ;
struct komeda_component_output {TYPE_1__* component; } ;
struct komeda_component {int max_active_inputs; int name; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(struct komeda_component_state *VAR_1,
        struct komeda_component_output *VAR_2,
        int VAR_3)
{
 struct komeda_component *VAR_4 = VAR_1->component;

 if ((VAR_3 < 0) || (VAR_3 >= VAR_4->max_active_inputs)) {
  FUNC_0("%s required an invalid %s-input[%d].\n",
     VAR_2->component->name, VAR_4->name, VAR_3);
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, VAR_1->active_inputs)) {
  FUNC_0("%s required %s-input[%d] has been occupied already.\n",
     VAR_2->component->name, VAR_4->name, VAR_3);
  return -VAR_0;
 }

 return 0;
}
