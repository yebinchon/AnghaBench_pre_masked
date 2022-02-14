
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_23__ {scalar_t__ digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_24__ {scalar_t__ digits; int extended; } ;
typedef TYPE_2__ decContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,scalar_t__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,TYPE_2__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

decNumber * FUNC_7(decNumber *VAR_1, const decNumber *VAR_2,
                         decContext *VAR_3) {
  uInt VAR_4=0;
  if (!FUNC_1(VAR_2, VAR_3, &VAR_4)) do {
    FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_4);
    } while(0);





  if (VAR_4!=0) FUNC_5(VAR_1, VAR_4, VAR_3);



  return VAR_1;
  }
