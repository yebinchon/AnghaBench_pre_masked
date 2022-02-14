
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_27__ {scalar_t__ digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_28__ {scalar_t__ digits; int extended; } ;
typedef TYPE_2__ decContext ;
typedef int Int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int *,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int *,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,TYPE_2__*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int,int ,int *) ;
 int FUNC_8 (TYPE_1__*) ;

decNumber * FUNC_9(decNumber *VAR_1, const decNumber *VAR_2,
                            decContext *VAR_3) {



  uInt VAR_4=0;
  Int VAR_5=0;
  Int VAR_6;





  do {
    if (FUNC_4(VAR_2)) {
      FUNC_3(VAR_1, VAR_2, ((void*)0), VAR_3, &VAR_4);
      break;
      }


    FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_4);
    FUNC_2(VAR_1, VAR_3, &VAR_5, &VAR_4);
    FUNC_7(VAR_1, VAR_3, 1, 0, &VAR_6);

    } while(0);




  if (VAR_4!=0) FUNC_6(VAR_1, VAR_4, VAR_3);
  return VAR_1;
  }
