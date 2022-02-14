
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{

 if (VAR_0)
  FUNC_0("WARNING: Running on a broken hypervisor that does "
      "not support mandatory H_CLEAR_MOD and H_CLEAR_REF "
      "hypercalls. Performance will be suboptimal.\n");
}
