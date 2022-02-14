
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned long* uregs; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_9(unsigned long VAR_3, u32 VAR_4, struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_4);

 VAR_2 += 1;

 if (FUNC_8(VAR_5))
  goto user;

 if (FUNC_0(VAR_4)) {
  unsigned long VAR_7;
  FUNC_2(VAR_7, VAR_3);


  if (VAR_4 & 0x40)
   VAR_7 = (signed long)((signed short) VAR_7);

  VAR_5->uregs[VAR_6] = VAR_7;
 } else
  FUNC_4(VAR_5->uregs[VAR_6], VAR_3);

 return VAR_1;

 user:
 if (FUNC_0(VAR_4)) {
  unsigned long VAR_8;
  unsigned int VAR_9 = FUNC_7();

  FUNC_3(VAR_8, VAR_3);
  FUNC_6(VAR_9);


  if (VAR_4 & 0x40)
   VAR_8 = (signed long)((signed short) VAR_8);

  VAR_5->uregs[VAR_6] = VAR_8;
 } else {
  unsigned int VAR_10 = FUNC_7();
  FUNC_5(VAR_5->uregs[VAR_6], VAR_3);
  FUNC_6(VAR_10);
 }

 return VAR_1;

 fault:
 return VAR_0;
}
