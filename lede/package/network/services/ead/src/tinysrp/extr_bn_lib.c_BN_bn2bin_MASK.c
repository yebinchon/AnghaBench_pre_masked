
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const BIGNUM *VAR_1, unsigned char *VAR_2)
 {
 int VAR_3,VAR_4;
 BN_ULONG VAR_5;

 VAR_3=VAR_4=FUNC_0(VAR_1);
 while (VAR_4-- > 0)
  {
  VAR_5=VAR_1->d[VAR_4/VAR_0];
  *(VAR_2++)=(unsigned char)(VAR_5>>(8*(VAR_4%VAR_0)))&0xff;
  }
 return(VAR_3);
 }
