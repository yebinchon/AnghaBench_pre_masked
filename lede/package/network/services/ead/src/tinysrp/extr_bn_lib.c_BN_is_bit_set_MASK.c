
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;

int FUNC_0(const BIGNUM *VAR_1, int VAR_2)
 {
 int VAR_3,VAR_4;

 if (VAR_2 < 0) return(0);
 VAR_3=VAR_2/VAR_0;
 VAR_4=VAR_2%VAR_0;
 if (VAR_1->top <= VAR_3) return(0);
 return((VAR_1->d[VAR_3]&(((BN_ULONG)1)<<VAR_4))?1:0);
 }
