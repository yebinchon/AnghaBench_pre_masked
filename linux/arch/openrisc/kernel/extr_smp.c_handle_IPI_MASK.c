
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,unsigned int,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 () ;

void FUNC_5(unsigned int VAR_0)
{
 unsigned int VAR_1 = FUNC_4();

 switch (VAR_0) {
 case 128:
  break;

 case 129:
  FUNC_3();
  break;

 case 131:
  FUNC_1();
  break;

 case 130:
  FUNC_2();
  break;

 default:
  FUNC_0(1, "CPU%u: Unknown IPI message 0x%x\n", VAR_1, VAR_0);
  break;
 }
}
