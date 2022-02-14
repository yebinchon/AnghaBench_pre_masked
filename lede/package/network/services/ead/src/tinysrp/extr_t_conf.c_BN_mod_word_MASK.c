
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef int BN_ULLONG ;
typedef TYPE_1__ BIGNUM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BN_ULONG FUNC_0(const BIGNUM *VAR_4, BN_ULONG VAR_5)
 {

 BN_ULONG VAR_6=0;



 int VAR_7;

 VAR_5&=VAR_2;
 for (VAR_7=VAR_4->top-1; VAR_7>=0; VAR_7--)
  {

  VAR_6=((VAR_6<<VAR_1)|((VAR_4->d[VAR_7]>>VAR_1)&VAR_3))%VAR_5;
  VAR_6=((VAR_6<<VAR_1)|(VAR_4->d[VAR_7]&VAR_3))%VAR_5;




  }
 return((BN_ULONG)VAR_6);
 }
