
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static inline int FUNC_1(struct pt_regs *VAR_2,
        unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2) + VAR_0;
 return ((VAR_3 & ~(VAR_1 - 1)) ==
  (VAR_4 & ~(VAR_1 - 1)));
}
