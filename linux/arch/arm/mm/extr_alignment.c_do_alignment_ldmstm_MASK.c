
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned int ARM_pc; unsigned long* uregs; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (unsigned int,unsigned long) ;
 int FUNC_8 (unsigned int,unsigned long) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (unsigned int,unsigned long) ;
 int FUNC_13 (unsigned int,unsigned long) ;
 int FUNC_14 (struct pt_regs*) ;
 int FUNC_15 (unsigned int) ;
 unsigned int FUNC_16 () ;
 scalar_t__ FUNC_17 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_18(unsigned long VAR_4, u32 VAR_5, struct pt_regs *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;

 if (FUNC_0(VAR_5))
  goto bad;

 VAR_9 = 4;
 VAR_6->ARM_pc += VAR_9;

 VAR_3 += 1;


 VAR_10 = FUNC_9(FUNC_5(VAR_5)) * 4;

 VAR_8 = FUNC_6(VAR_5);
 VAR_13 = VAR_12 = VAR_6->uregs[VAR_8];

 if (!FUNC_3(VAR_5))
  VAR_10 = -VAR_10;
 VAR_13 += VAR_10;
 if (!FUNC_3(VAR_5))
  VAR_12 = VAR_13;

 if (FUNC_2(VAR_5))
  VAR_12 += 4;
 if (VAR_4 != VAR_12) {
  FUNC_11("LDMSTM: PC = %08lx, instr = %08x, "
   "addr = %08lx, eaddr = %08lx\n",
    FUNC_10(VAR_6), VAR_5, VAR_4, VAR_12);
  FUNC_14(VAR_6);
 }


 if (FUNC_17(VAR_6)) {
  unsigned int VAR_14 = FUNC_16();
  for (VAR_11 = FUNC_5(VAR_5), VAR_7 = 0; VAR_11;
       VAR_11 >>= 1, VAR_7 += 1)
   if (VAR_11 & 1) {
    if (FUNC_1(VAR_5)) {
     unsigned int VAR_15;
     FUNC_8(VAR_15, VAR_12);
     VAR_6->uregs[VAR_7] = VAR_15;
    } else
     FUNC_13(VAR_6->uregs[VAR_7], VAR_12);
    VAR_12 += 4;
   }
  FUNC_15(VAR_14);
 } else {
  for (VAR_11 = FUNC_5(VAR_5), VAR_7 = 0; VAR_11;
       VAR_11 >>= 1, VAR_7 += 1)
   if (VAR_11 & 1) {
    if (FUNC_1(VAR_5)) {
     unsigned int VAR_16;
     FUNC_7(VAR_16, VAR_12);
     VAR_6->uregs[VAR_7] = VAR_16;
    } else
     FUNC_12(VAR_6->uregs[VAR_7], VAR_12);
    VAR_12 += 4;
   }
 }

 if (FUNC_4(VAR_5))
  VAR_6->uregs[VAR_8] = VAR_13;
 if (!FUNC_1(VAR_5) || !(FUNC_5(VAR_5) & (1 << 15)))
  VAR_6->ARM_pc -= VAR_9;
 return VAR_0;

fault:
 VAR_6->ARM_pc -= VAR_9;
 return VAR_2;

bad:
 FUNC_11("Alignment trap: not handling ldm with s-bit set\n");
 return VAR_1;
}
