
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_1(phys_addr_t VAR_3)
{
 if (FUNC_0()) {
  if (VAR_3 >= VAR_0)
   return 1;
 } else if (VAR_3 >= VAR_1 && VAR_3 <= VAR_2) {
  return 1;
 }

 return 0;
}
