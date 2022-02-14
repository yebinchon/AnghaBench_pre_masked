
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct active_node {int base; } ;


 int FUNC_0 (int) ;
 struct intel_engine_cs* FUNC_1 (struct active_node*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct intel_engine_cs *
FUNC_3(struct active_node *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->base));
 return FUNC_1(VAR_0);
}
