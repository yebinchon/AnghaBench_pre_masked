
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,unsigned long,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pt_regs*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct pt_regs*,int) ;
 unsigned long FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_5, struct pt_regs *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = (VAR_5 & VAR_1) >> VAR_2;
 int VAR_10 = 0;

 VAR_7 = FUNC_6(FUNC_5(VAR_6, VAR_8));

 switch (VAR_9) {
 case 129:
  FUNC_1("dc civac", VAR_7, VAR_10);
  break;
 case 132:
  FUNC_1("dc civac", VAR_7, VAR_10);
  break;
 case 131:
  FUNC_1("sys 3, c7, c13, 1", VAR_7, VAR_10);
  break;
 case 130:
  FUNC_1("sys 3, c7, c12, 1", VAR_7, VAR_10);
  break;
 case 133:
  FUNC_1("dc civac", VAR_7, VAR_10);
  break;
 case 128:
  FUNC_1("ic ivau", VAR_7, VAR_10);
  break;
 default:
  FUNC_4(VAR_4, VAR_3, VAR_6->pc);
  return;
 }

 if (VAR_10)
  FUNC_2(VAR_7);
 else
  FUNC_3(VAR_6, VAR_0);
}
