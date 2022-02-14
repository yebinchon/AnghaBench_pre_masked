
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int state; } ;




 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct params*) ;
 int FUNC_3 (struct params*) ;

void FUNC_4(struct params *VAR_0)
{
 switch (VAR_0->state) {
 case 129:
  FUNC_2(VAR_0);
  break;

 case 128:
  FUNC_3(VAR_0);
  break;

 default:
  FUNC_1("wtf %d\n", VAR_0->state);
  FUNC_0();
  break;
 }
}
