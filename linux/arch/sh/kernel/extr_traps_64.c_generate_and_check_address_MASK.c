
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* regs; } ;
typedef int insn_size_t ;
typedef scalar_t__ __u64 ;
typedef int __s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,struct pt_regs*,scalar_t__) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int,struct pt_regs*) ;
 scalar_t__ FUNC_10 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_11(struct pt_regs *VAR_3,
          insn_size_t VAR_4,
          int VAR_5,
          int VAR_6,
          __u64 *VAR_7)
{
 __u64 VAR_8, VAR_9;
 int VAR_10;

 switch (1 << VAR_6) {
 case 1: FUNC_1(); break;
 case 2: FUNC_6(); break;
 case 4: FUNC_2(); break;
 case 8: FUNC_4(); break;
 }

 VAR_10 = (VAR_4 >> 20) & 0x3f;
 VAR_8 = VAR_3->regs[VAR_10];
 if (VAR_5) {
  __s64 VAR_11;
  VAR_11 = (VAR_4 >> 10) & 0x3ff;
  VAR_11 = FUNC_8(VAR_11, 9);
  VAR_9 = (__u64)((__s64)VAR_8 + (VAR_11 << VAR_6));
 } else {
  __u64 VAR_12;
  int VAR_13;
  VAR_13 = (VAR_4 >> 10) & 0x3f;
  VAR_12 = VAR_3->regs[VAR_13];
  VAR_9 = VAR_8 + VAR_12;
 }


 if (!FUNC_0(VAR_9))
  return -1;




 if (FUNC_10(VAR_3)) {
  FUNC_5();

  if (VAR_9 >= VAR_1)
   return -1;
 } else
  FUNC_3();

 *VAR_7 = VAR_9;

 FUNC_7(VAR_0, 1, VAR_3, VAR_9);
 FUNC_9(VAR_2, VAR_4, VAR_3);

 return 0;
}
