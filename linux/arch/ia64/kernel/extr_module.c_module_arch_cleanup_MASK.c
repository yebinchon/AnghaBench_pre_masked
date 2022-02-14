
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * core_unw_table; int * init_unw_table; } ;
struct module {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;

void
FUNC_1 (struct module *VAR_0)
{
 if (VAR_0->arch.init_unw_table) {
  FUNC_0(VAR_0->arch.init_unw_table);
  VAR_0->arch.init_unw_table = ((void*)0);
 }
 if (VAR_0->arch.core_unw_table) {
  FUNC_0(VAR_0->arch.core_unw_table);
  VAR_0->arch.core_unw_table = ((void*)0);
 }
}
