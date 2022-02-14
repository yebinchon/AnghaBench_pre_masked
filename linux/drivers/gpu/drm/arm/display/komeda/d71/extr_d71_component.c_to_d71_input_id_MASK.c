
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct komeda_component_state {int active_inputs; struct komeda_component_output* inputs; } ;
struct komeda_component_output {scalar_t__ output_port; TYPE_1__* component; } ;
struct TYPE_2__ {scalar_t__ hw_id; } ;


 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct komeda_component_state *VAR_0, int VAR_1)
{
 struct komeda_component_output *VAR_2 = &VAR_0->inputs[VAR_1];


 if (FUNC_0(VAR_1, VAR_0->active_inputs))
  return VAR_2->component->hw_id + VAR_2->output_port;
 else
  return 0;
}
