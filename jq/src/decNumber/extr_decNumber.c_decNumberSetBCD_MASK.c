
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uInt ;
typedef scalar_t__ uByte ;
struct TYPE_4__ {int digits; scalar_t__* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;
typedef scalar_t__ Int ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ const FUNC_2 (scalar_t__) ;

decNumber * FUNC_3(decNumber *VAR_1, const uByte *VAR_2, uInt VAR_3) {
  Unit *VAR_4=VAR_1->lsu+FUNC_0(VAR_1->digits)-1;
  const uByte *VAR_5=VAR_2;





    Int VAR_6=FUNC_1(VAR_3);
    for (;VAR_4>=VAR_1->lsu; VAR_4--) {
      *VAR_4=0;
      for (; VAR_6>0; VAR_5++, VAR_6--) *VAR_4=FUNC_2(*VAR_4)+*VAR_5;
      VAR_6=VAR_0;
      }

  VAR_1->digits=VAR_3;
  return VAR_1;
  }
