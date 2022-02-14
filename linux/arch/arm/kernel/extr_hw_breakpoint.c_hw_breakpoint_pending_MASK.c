
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;



 int FUNC_2 (int,char*) ;
 int FUNC_3 (unsigned long,struct pt_regs*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long,unsigned int,struct pt_regs*) ;

__attribute__((used)) static int FUNC_9(unsigned long VAR_2, unsigned int VAR_3,
     struct pt_regs *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 FUNC_6();

 if (FUNC_4(VAR_4))
  FUNC_5();


 FUNC_0(VAR_0, VAR_1, 0, VAR_6);


 switch (FUNC_1(VAR_6)) {
 case 129:
  FUNC_3(VAR_2, VAR_4);
  break;
 case 130:
  FUNC_2(1, "Asynchronous watchpoint exception taken. Debugging results may be unreliable\n");

 case 128:
  FUNC_8(VAR_2, VAR_3, VAR_4);
  break;
 default:
  VAR_5 = 1;
 }

 FUNC_7();

 return VAR_5;
}
