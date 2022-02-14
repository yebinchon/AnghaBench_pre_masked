
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_24__ {scalar_t__ digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_25__ {scalar_t__ digits; int extended; } ;
typedef TYPE_2__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;

decNumber * FUNC_8(decNumber *VAR_2, const decNumber *VAR_3,
                        decContext *VAR_4) {
  uInt VAR_5=0;
  if (!FUNC_2(VAR_3, VAR_4, &VAR_5)) do {
    FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_5);
    } while(0);





  if (VAR_5!=0) FUNC_6(VAR_2, VAR_5, VAR_4);



  return VAR_2;
  }
