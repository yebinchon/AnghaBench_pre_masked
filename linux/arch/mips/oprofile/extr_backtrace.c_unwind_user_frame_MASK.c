
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int simmediate; } ;
union mips_instruction {TYPE_1__ i_format; } ;
struct stackframe {scalar_t__ pc; size_t sp; int ra; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long*) ;
 scalar_t__ FUNC_1 (union mips_instruction*) ;
 scalar_t__ FUNC_2 (union mips_instruction*) ;
 scalar_t__ FUNC_3 (union mips_instruction*) ;

__attribute__((used)) static inline int FUNC_4(struct stackframe *VAR_0,
        const unsigned int VAR_1)
{
 struct stackframe VAR_2 = *VAR_0;
 off_t VAR_3 = 0;
 size_t VAR_4 = 0;
 unsigned long VAR_5;

 if (VAR_0->pc == 0 || VAR_0->sp == 0 || VAR_0->ra == 0)
  return -9;

 for (VAR_5 = VAR_2.pc; (VAR_5 + VAR_1 > VAR_2.pc)
  && (!VAR_3 || !VAR_4); --VAR_5) {
  union mips_instruction VAR_6;

  if (FUNC_0(VAR_5, (unsigned long *) &VAR_6))
   return -11;

  if (FUNC_3(&VAR_6)) {
   int VAR_7 = VAR_6.i_format.simmediate;
   if (VAR_7 > 0)


    break;
   VAR_4 = (unsigned long) VAR_7;
  } else if (FUNC_2(&VAR_6)) {
   int VAR_8 = VAR_6.i_format.simmediate;
   if (VAR_8 < 0)

    break;
   VAR_3 = VAR_8;
  } else if (FUNC_1(&VAR_6))
   break;
 }

 if (!VAR_3 || !VAR_4)
  goto done;

 if (VAR_3) {
  VAR_2.ra = VAR_0->sp + VAR_3;
  if (FUNC_0(VAR_2.ra, &(VAR_2.ra)))
   return -13;
 }

 if (VAR_4) {
  VAR_2.sp = VAR_0->sp + VAR_4;
  if (FUNC_0(VAR_2.sp, &(VAR_2.sp)))
   return -14;
 }

 if (VAR_2.sp > VAR_0->sp)
  return -2;

done:
 VAR_2.pc = VAR_0->ra;
 *VAR_0 = VAR_2;

 return 0;
}
