
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int*,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int * FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3)
 {
 register int VAR_4;
 int VAR_5,VAR_6;
 BN_ULONG *VAR_7,*VAR_8,*VAR_9,VAR_10,VAR_11;
 const BIGNUM *VAR_12;

 FUNC_1(VAR_2);
 FUNC_1(VAR_3);

 if (VAR_2->top < VAR_3->top)
  { VAR_12=VAR_2; VAR_2=VAR_3; VAR_3=VAR_12; }
 VAR_5=VAR_2->top;
 VAR_6=VAR_3->top;

 if (FUNC_2(VAR_1,VAR_5+1) == ((void*)0))
  return(0);

 VAR_1->top=VAR_5;


 VAR_7=VAR_2->d;
 VAR_8=VAR_3->d;
 VAR_9=VAR_1->d;
 VAR_10=0;

 VAR_10=FUNC_0(VAR_9,VAR_7,VAR_8,VAR_6);
 VAR_9+=VAR_6;
 VAR_7+=VAR_6;
 VAR_8+=VAR_6;
 VAR_4=VAR_6;

 if (VAR_10)
  {
  while (VAR_4 < VAR_5)
   {
   VAR_4++;
   VAR_11= *(VAR_7++);
   if ((*(VAR_9++)=(VAR_11+1)&VAR_0) >= VAR_11)
    {
    VAR_10=0;
    break;
    }
   }
  if ((VAR_4 >= VAR_5) && VAR_10)
   {
   *(VAR_9++)=1;
   VAR_1->top++;
   }
  }
 if (VAR_9 != VAR_7)
  {
  for (; VAR_4<VAR_5; VAR_4++)
   *(VAR_9++)= *(VAR_7++);
  }

 return(1);
 }
