
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct komeda_component_state {int changed_active_inputs; } ;


 int FUNC_0 (struct komeda_component_state*) ;

__attribute__((used)) static inline u16 FUNC_1(struct komeda_component_state *VAR_0)
{
 return FUNC_0(VAR_0) | VAR_0->changed_active_inputs;
}
