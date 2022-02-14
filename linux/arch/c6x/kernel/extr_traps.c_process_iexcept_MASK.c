
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ pc; } ;
struct exception_info {char* member_0; int member_2; int member_1; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct exception_info*,struct pt_regs*) ;
 unsigned int FUNC_3 () ;
 struct exception_info* VAR_4 ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = FUNC_3();
 unsigned int VAR_7;

 FUNC_1(VAR_1);

 FUNC_4("IEXCEPT: PC[0x%lx]\n", VAR_5->pc);

 while (VAR_6) {
  VAR_7 = FUNC_0(VAR_6);
  VAR_6 &= ~(1 << VAR_7);
  FUNC_5(VAR_6);
  if (*(unsigned int *)VAR_5->pc == VAR_0) {

   struct exception_info VAR_8 = {
    "Oops - undefined instruction",
      VAR_2, VAR_3
   };
   FUNC_2(&VAR_8, VAR_5);
   VAR_6 &= ~(0xFF);
   FUNC_5(VAR_6);
   continue;
  }

  FUNC_2(&VAR_4[VAR_7], VAR_5);
 }
 return 0;
}
