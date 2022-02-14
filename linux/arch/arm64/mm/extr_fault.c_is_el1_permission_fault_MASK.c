
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pstate; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline bool FUNC_3(unsigned long VAR_6, unsigned int VAR_7,
        struct pt_regs *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10 = VAR_7 & VAR_4;

 if (VAR_9 != VAR_0 && VAR_9 != VAR_1)
  return 0;

 if (VAR_10 == VAR_3)
  return 1;

 if (FUNC_1(VAR_6) && FUNC_2())
  return VAR_10 == VAR_2 &&
   (VAR_8->pstate & VAR_5);

 return 0;
}
