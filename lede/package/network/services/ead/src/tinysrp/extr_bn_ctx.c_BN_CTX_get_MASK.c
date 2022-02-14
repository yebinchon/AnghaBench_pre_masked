
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ depth; scalar_t__ tos; int too_many; int * bn; } ;
typedef TYPE_1__ BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

BIGNUM *FUNC_0(BN_CTX *VAR_2)
 {
 if (VAR_2->depth > VAR_1 || VAR_2->tos >= VAR_0)
  {
  if (!VAR_2->too_many)
   {

   VAR_2->too_many = 1;
   }
  return ((void*)0);
  }
 return (&(VAR_2->bn[VAR_2->tos++]));
 }
