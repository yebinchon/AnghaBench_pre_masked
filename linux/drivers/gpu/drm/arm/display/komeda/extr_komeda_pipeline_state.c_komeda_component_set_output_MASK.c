
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct komeda_component_output {int output_port; struct komeda_component* component; } ;
struct komeda_component {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct komeda_component_output *VAR_0,
       struct komeda_component *VAR_1,
       u8 VAR_2)
{
 VAR_0->component = VAR_1;
 VAR_0->output_port = VAR_2;
}
