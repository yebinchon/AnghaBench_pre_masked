
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int frag; int data_try; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct params*) ;

void FUNC_1(struct params *VAR_1)
{
 switch (VAR_1->frag) {
 case 1:
  FUNC_0(VAR_1);
  break;

 case 2:
  VAR_1->state = VAR_0;
  VAR_1->data_try = 69;
  break;
 }
}
