
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned long* uregs; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_9(unsigned long VAR_4, u32 VAR_5, struct pt_regs *VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;
 int VAR_9;

 if ((VAR_5 & 0xfe000000) == 0xe8000000) {

  VAR_8 = (VAR_5 >> 8) & 0xf;
  VAR_9 = !!(FUNC_0(VAR_5));
 } else if (((VAR_7 & 1) == 1) || (VAR_7 == 14))
  goto bad;
 else {
  VAR_9 = ((VAR_5 & 0xf0) == 0xd0);
  VAR_8 = VAR_7 + 1;
 }

 VAR_3 += 1;

 if (FUNC_8(VAR_6))
  goto user;

 if (VAR_9) {
  unsigned long VAR_10;
  FUNC_2(VAR_10, VAR_4);
  VAR_6->uregs[VAR_7] = VAR_10;
  FUNC_2(VAR_10, VAR_4 + 4);
  VAR_6->uregs[VAR_8] = VAR_10;
 } else {
  FUNC_4(VAR_6->uregs[VAR_7], VAR_4);
  FUNC_4(VAR_6->uregs[VAR_8], VAR_4 + 4);
 }

 return VAR_2;

 user:
 if (VAR_9) {
  unsigned long VAR_11, VAR_12;
  unsigned int VAR_13 = FUNC_7();

  FUNC_3(VAR_11, VAR_4);
  FUNC_3(VAR_12, VAR_4 + 4);

  FUNC_6(VAR_13);

  VAR_6->uregs[VAR_7] = VAR_11;
  VAR_6->uregs[VAR_8] = VAR_12;
 } else {
  unsigned int VAR_14 = FUNC_7();
  FUNC_5(VAR_6->uregs[VAR_7], VAR_4);
  FUNC_5(VAR_6->uregs[VAR_8], VAR_4 + 4);
  FUNC_6(VAR_14);
 }

 return VAR_2;
 bad:
 return VAR_0;
 fault:
 return VAR_1;
}
