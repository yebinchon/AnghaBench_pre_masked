
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_stack {unsigned long ar_unat; unsigned long caller_unat; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,unsigned long,...) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_3 (struct pt_regs*,unsigned long,unsigned long,int) ;

__attribute__((used)) static void
FUNC_4 (unsigned long VAR_1, unsigned long VAR_2, int VAR_3, struct pt_regs *VAR_4)
{
 struct switch_stack *VAR_5 = (struct switch_stack *) VAR_4 - 1;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long *VAR_8;




 if (VAR_1 >= VAR_0) {
  FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3);
  return;
 }
 if (FUNC_1(VAR_1)) {
  VAR_6 = (unsigned long)VAR_5;
  VAR_8 = &VAR_5->ar_unat;
 } else {
  VAR_6 = (unsigned long)VAR_4;
  VAR_8 = &VAR_5->caller_unat;
 }
 FUNC_0("tmp_base=%lx switch_stack=%s offset=%d\n",
        VAR_6, VAR_8==&VAR_5->ar_unat ? "yes":"no", FUNC_2(VAR_1));




 VAR_6 += FUNC_2(VAR_1);

 *(unsigned long *)VAR_6 = VAR_2;





 VAR_7 = 1UL << (VAR_6 >> 3 & 0x3f);
 FUNC_0("*0x%lx=0x%lx NaT=%d prev_unat @%p=%lx\n", VAR_6, VAR_2, VAR_3, (void *) VAR_8, *VAR_8);
 if (VAR_3) {
  *VAR_8 |= VAR_7;
 } else {
  *VAR_8 &= ~VAR_7;
 }
 FUNC_0("*0x%lx=0x%lx NaT=%d new unat: %p=%lx\n", VAR_6, VAR_2, VAR_3, (void *) VAR_8,*VAR_8);
}
