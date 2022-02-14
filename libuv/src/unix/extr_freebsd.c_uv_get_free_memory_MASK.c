
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int freecount ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int*,size_t*,int *,int ) ;

uint64_t FUNC_3(void) {
  int VAR_2;
  size_t VAR_3 = sizeof(VAR_2);

  if (FUNC_2("vm.stats.vm.v_free_count", &VAR_2, &VAR_3, ((void*)0), 0))
    return FUNC_0(VAR_1);

  return (uint64_t) VAR_2 * FUNC_1(VAR_0);

}
