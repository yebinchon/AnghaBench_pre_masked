
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned int* uregs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (unsigned int,unsigned long) ;
 int FUNC_5 (unsigned int,unsigned long) ;
 int FUNC_6 (unsigned int,unsigned long) ;
 int FUNC_7 (unsigned int,unsigned long) ;
 int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_11(unsigned long VAR_3, u32 VAR_4, struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = FUNC_3(VAR_4);

 VAR_2 += 1;

 if ((!FUNC_1(VAR_4) && FUNC_2(VAR_4)) || FUNC_10(VAR_5))
  goto trans;

 if (FUNC_0(VAR_4)) {
  unsigned int VAR_7;
  FUNC_4(VAR_7, VAR_3);
  VAR_5->uregs[VAR_6] = VAR_7;
 } else
  FUNC_6(VAR_5->uregs[VAR_6], VAR_3);
 return VAR_1;

 trans:
 if (FUNC_0(VAR_4)) {
  unsigned int VAR_8;
  unsigned int VAR_9 = FUNC_9();
  FUNC_5(VAR_8, VAR_3);
  FUNC_8(VAR_9);
  VAR_5->uregs[VAR_6] = VAR_8;
 } else {
  unsigned int VAR_10 = FUNC_9();
  FUNC_7(VAR_5->uregs[VAR_6], VAR_3);
  FUNC_8(VAR_10);
 }
 return VAR_1;

 fault:
 return VAR_0;
}
