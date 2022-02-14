
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ pc; scalar_t__* regs; } ;
typedef int insn_size_t ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (void*,scalar_t__*,int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct pt_regs*,int,int,int,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int,unsigned long) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_0,
       insn_size_t VAR_1,
       int VAR_2,
       int VAR_3)
{

 int VAR_4;
 int VAR_5;
 __u64 VAR_6;

 VAR_4 = FUNC_2(VAR_0, VAR_1,
   VAR_2, VAR_3, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = (VAR_1 >> 4) & 0x3f;
 if (FUNC_5(VAR_0)) {
  __u64 VAR_7;

  if (!FUNC_1((unsigned long) VAR_6, 1UL<<VAR_3)) {
   return -1;
  }

  switch (VAR_3) {
  case 1:
   *(__u16 *) &VAR_7 = (__u16) VAR_0->regs[VAR_5];
   break;
  case 2:
   *(__u32 *) &VAR_7 = (__u32) VAR_0->regs[VAR_5];
   break;
  case 3:
   VAR_7 = VAR_0->regs[VAR_5];
   break;
  default:
   FUNC_4("Unexpected width_shift %d in misaligned_store, PC=%08lx\n",
    VAR_3, (unsigned long) VAR_0->pc);
   break;
  }

  if (FUNC_0((void *)(int)VAR_6, &VAR_7, (1 << VAR_3)) > 0) {
   return -1;
  }
 } else {

  __u64 VAR_8 = VAR_0->regs[VAR_5];

  switch (VAR_3) {
  case 1:
   FUNC_3(VAR_6, VAR_8);
   break;
  case 2:
   asm ("stlo.l %1, 0, %0" : : "r" (VAR_8), "r" (VAR_6));
   asm ("sthi.l %1, 3, %0" : : "r" (VAR_8), "r" (VAR_6));
   break;
  case 3:
   asm ("stlo.q %1, 0, %0" : : "r" (VAR_8), "r" (VAR_6));
   asm ("sthi.q %1, 7, %0" : : "r" (VAR_8), "r" (VAR_6));
   break;

  default:
   FUNC_4("Unexpected width_shift %d in misaligned_store, PC=%08lx\n",
    VAR_3, (unsigned long) VAR_0->pc);
   break;
  }
 }

 return 0;
}
