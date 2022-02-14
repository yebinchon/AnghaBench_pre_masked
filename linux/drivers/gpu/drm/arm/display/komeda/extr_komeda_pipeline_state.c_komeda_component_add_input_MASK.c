
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_component_state {int affected_inputs; int active_inputs; int changed_active_inputs; int * inputs; struct komeda_component* component; } ;
struct komeda_component_output {int dummy; } ;
struct komeda_component {int max_active_inputs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *,struct komeda_component_output*,int) ;
 int FUNC_4 (int *,struct komeda_component_output*,int) ;

__attribute__((used)) static void
FUNC_5(struct komeda_component_state *VAR_0,
      struct komeda_component_output *VAR_1,
      int VAR_2)
{
 struct komeda_component *VAR_3 = VAR_0->component;

 FUNC_1((VAR_2 < 0 || VAR_2 >= VAR_3->max_active_inputs));






 if (!FUNC_2(VAR_2, VAR_0->affected_inputs) ||
     FUNC_3(&VAR_0->inputs[VAR_2], VAR_1, sizeof(*VAR_1))) {
  FUNC_4(&VAR_0->inputs[VAR_2], VAR_1, sizeof(*VAR_1));
  VAR_0->changed_active_inputs |= FUNC_0(VAR_2);
 }
 VAR_0->active_inputs |= FUNC_0(VAR_2);
 VAR_0->affected_inputs |= FUNC_0(VAR_2);
}
