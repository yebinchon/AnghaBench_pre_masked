
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ BN_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

BN_CTX *FUNC_2(void)
 {
 BN_CTX *VAR_1;

 VAR_1=(BN_CTX *)FUNC_1(sizeof(BN_CTX));
 if (VAR_1 == ((void*)0))
  {
  return(((void*)0));
  }

 FUNC_0(VAR_1);
 VAR_1->flags=VAR_0;
 return(VAR_1);
 }
