
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_component {int supported_outputs; int max_active_outputs; int supported_inputs; int max_active_inputs; int id; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_2(struct komeda_component *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1("	%s: ID %d-0x%08lx.\n",
    VAR_0->name, VAR_0->id, FUNC_0(VAR_0->id));
 FUNC_1("		max_active_inputs:%d, supported_inputs: 0x%08x.\n",
    VAR_0->max_active_inputs, VAR_0->supported_inputs);
 FUNC_1("		max_active_outputs:%d, supported_outputs: 0x%08x.\n",
    VAR_0->max_active_outputs, VAR_0->supported_outputs);
}
