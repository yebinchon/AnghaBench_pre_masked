
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct js_corr {int type; int* coef; } ;




 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct js_corr *VAR_1)
{
 switch (VAR_1->type) {

 case 128:
  break;

 case 129:
  VAR_0 = VAR_0 > VAR_1->coef[0] ? (VAR_0 < VAR_1->coef[1] ? 0 :
   ((VAR_1->coef[3] * (VAR_0 - VAR_1->coef[1])) >> 14)) :
   ((VAR_1->coef[2] * (VAR_0 - VAR_1->coef[0])) >> 14);
  break;

 default:
  return 0;
 }

 return FUNC_0(VAR_0, -32767, 32767);
}
