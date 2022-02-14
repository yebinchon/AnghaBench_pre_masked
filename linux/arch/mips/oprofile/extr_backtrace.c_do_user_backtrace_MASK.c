
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {unsigned long sp; int ra; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stackframe*,unsigned int const) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_1,
         struct stackframe *VAR_2,
         unsigned int VAR_3)
{
 const unsigned int VAR_4 = 512;
 const unsigned long VAR_5 = VAR_1 + VAR_0;

 while (VAR_3-- && !FUNC_1(VAR_2, VAR_4)) {
  FUNC_0(VAR_2->ra);
  if (VAR_2->sp < VAR_1 || VAR_2->sp > VAR_5)
   break;
 }
}
