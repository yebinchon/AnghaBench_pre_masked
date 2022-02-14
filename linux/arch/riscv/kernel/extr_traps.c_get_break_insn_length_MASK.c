
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bug_insn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_2)
{
 bug_insn_t VAR_3;

 if (FUNC_0((bug_insn_t *)VAR_2, VAR_3))
  return 0;
 return (((VAR_3 & VAR_1) == VAR_0) ? 4UL : 2UL);
}
