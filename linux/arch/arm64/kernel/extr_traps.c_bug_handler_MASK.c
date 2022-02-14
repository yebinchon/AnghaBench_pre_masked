
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*,int ) ;
 int FUNC_1 (char*,struct pt_regs*,int ) ;
 int FUNC_2 (int ,struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_3, unsigned int VAR_4)
{
 switch (FUNC_2(VAR_3->pc, VAR_3)) {
 case 129:
  FUNC_1("Oops - BUG", VAR_3, 0);
  break;

 case 128:
  break;

 default:

  return VAR_1;
 }


 FUNC_0(VAR_3, VAR_0);
 return VAR_2;
}
