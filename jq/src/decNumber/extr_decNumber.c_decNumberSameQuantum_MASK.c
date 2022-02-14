
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ exponent; int* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef int Unit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*) ;

decNumber * FUNC_4(decNumber *VAR_2, const decNumber *VAR_3,
                                 const decNumber *VAR_4) {
  Unit VAR_5=0;





  if (VAR_1) {
    if (FUNC_2(VAR_3) && FUNC_2(VAR_4)) VAR_5=1;
     else if (FUNC_1(VAR_3) && FUNC_1(VAR_4)) VAR_5=1;

    }
   else if (VAR_3->exponent==VAR_4->exponent) VAR_5=1;

  FUNC_3(VAR_2);
  *VAR_2->lsu=VAR_5;
  return VAR_2;
  }
