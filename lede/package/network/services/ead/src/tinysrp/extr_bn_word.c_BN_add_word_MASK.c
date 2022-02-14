
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int neg; int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(BIGNUM *VAR_1, BN_ULONG VAR_2)
 {
 BN_ULONG VAR_3;
 int VAR_4;

 if (VAR_1->neg)
  {
  VAR_1->neg=0;
  VAR_4=FUNC_1(VAR_1,VAR_2);
  if (!FUNC_0(VAR_1))
   VAR_1->neg=!(VAR_1->neg);
  return(VAR_4);
  }
 VAR_2&=VAR_0;
 if (FUNC_2(VAR_1,VAR_1->top+1) == ((void*)0)) return(0);
 VAR_4=0;
 for (;;)
  {
  VAR_3=(VAR_1->d[VAR_4]+(BN_ULONG)VAR_2)&VAR_0;
  VAR_1->d[VAR_4]=VAR_3;
  if (VAR_2 > VAR_3)
   VAR_2=1;
  else
   break;
  VAR_4++;
  }
 if (VAR_4 >= VAR_1->top)
  VAR_1->top++;
 return(1);
 }
