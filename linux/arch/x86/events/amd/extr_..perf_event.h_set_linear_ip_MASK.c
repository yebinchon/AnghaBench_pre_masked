
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; unsigned long ip; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct pt_regs *VAR_4, unsigned long VAR_5)
{
 VAR_4->cs = FUNC_0(VAR_5) ? VAR_2 : VAR_3;
 if (VAR_4->flags & VAR_1)
  VAR_4->flags ^= (VAR_0 | VAR_1);
 VAR_4->ip = VAR_5;
}
