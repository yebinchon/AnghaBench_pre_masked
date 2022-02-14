
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_25__ {int bits; scalar_t__ digits; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_26__ {int digits; } ;
typedef TYPE_2__ decContext ;
typedef scalar_t__ Int ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int *,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,TYPE_2__*) ;

decNumber * FUNC_11(decNumber *VAR_4, const decNumber *VAR_5,
                          decContext *VAR_6) {
  uInt VAR_7=0;






  if (FUNC_6(VAR_5)) FUNC_2(VAR_4, VAR_5, ((void*)0), VAR_6, &VAR_7);
   else if (FUNC_5(VAR_5)) FUNC_3(VAR_4, VAR_5);
   else if (FUNC_7(VAR_5)) {
    FUNC_9(VAR_4);
    VAR_4->bits=VAR_1|VAR_0;
    VAR_7|=VAR_3;
    }
   else {
    Int VAR_8=VAR_5->exponent+VAR_5->digits-1;
    if (VAR_6->digits>=10) FUNC_4(VAR_4, VAR_8);
     else {
      decNumber VAR_9[FUNC_0(10)];
      decNumber *VAR_10=VAR_9;
      FUNC_4(VAR_10, VAR_8);
      FUNC_8(VAR_4, VAR_10, VAR_6);
      }
    }

  if (VAR_7!=0) FUNC_10(VAR_4, VAR_7, VAR_6);
  return VAR_4;
  }
