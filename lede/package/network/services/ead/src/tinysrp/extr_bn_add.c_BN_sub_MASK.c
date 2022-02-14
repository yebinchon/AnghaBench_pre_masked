
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int neg; int top; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int * FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2)
 {
 int VAR_3;
 int VAR_4=0,VAR_5=0;
 const BIGNUM *VAR_6;

 FUNC_3(VAR_1);
 FUNC_3(VAR_2);






 if (VAR_1->neg)
  {
  if (VAR_2->neg)
   { VAR_6=VAR_1; VAR_1=VAR_2; VAR_2=VAR_6; }
  else
   { VAR_4=1; VAR_5=1; }
  }
 else
  {
  if (VAR_2->neg) { VAR_4=1; VAR_5=0; }
  }

 if (VAR_4)
  {
  if (!FUNC_0(VAR_0,VAR_1,VAR_2)) return(0);
  VAR_0->neg=VAR_5;
  return(1);
  }



 VAR_3=(VAR_1->top > VAR_2->top)?VAR_1->top:VAR_2->top;
 if (FUNC_4(VAR_0,VAR_3) == ((void*)0)) return(0);
 if (FUNC_1(VAR_1,VAR_2) < 0)
  {
  if (!FUNC_2(VAR_0,VAR_2,VAR_1)) return(0);
  VAR_0->neg=1;
  }
 else
  {
  if (!FUNC_2(VAR_0,VAR_1,VAR_2)) return(0);
  VAR_0->neg=0;
  }
 return(1);
 }
