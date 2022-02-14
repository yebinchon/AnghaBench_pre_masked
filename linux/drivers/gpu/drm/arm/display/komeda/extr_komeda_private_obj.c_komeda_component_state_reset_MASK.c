
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_component_state {scalar_t__ changed_active_inputs; scalar_t__ active_inputs; scalar_t__ affected_inputs; int * binding_user; } ;



__attribute__((used)) static void
FUNC_0(struct komeda_component_state *VAR_0)
{
 VAR_0->binding_user = ((void*)0);
 VAR_0->affected_inputs = VAR_0->active_inputs;
 VAR_0->active_inputs = 0;
 VAR_0->changed_active_inputs = 0;
}
