
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {scalar_t__ x86_capability; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long*) ;
 int FUNC_1 (int *,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned int,unsigned long*) ;

__attribute__((used)) static inline void FUNC_3(struct cpuinfo_x86 *VAR_2, unsigned int VAR_3)
{





 if (!VAR_2) {
  FUNC_1(&VAR_0, VAR_3);
  FUNC_2(VAR_3, (unsigned long *)VAR_1);
 } else {
  FUNC_0(VAR_3, (unsigned long *)VAR_2->x86_capability);
 }
}
