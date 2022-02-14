
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct pt_regs *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0();
}
