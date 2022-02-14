
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * uregs; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_8(unsigned long VAR_2, unsigned long VAR_3,
      struct pt_regs *VAR_4)
{
 unsigned int VAR_5 = FUNC_3(VAR_3);

 if (!FUNC_1(VAR_3) && FUNC_2(VAR_3))
  goto trans;

 if (FUNC_0(VAR_3))
  FUNC_4(VAR_4->uregs[VAR_5], VAR_2);
 else
  FUNC_6(VAR_4->uregs[VAR_5], VAR_2);
 return VAR_1;

trans:
 if (FUNC_0(VAR_3))
  FUNC_5(VAR_4->uregs[VAR_5], VAR_2);
 else
  FUNC_7(VAR_4->uregs[VAR_5], VAR_2);
 return VAR_1;

fault:
 return VAR_0;
}
