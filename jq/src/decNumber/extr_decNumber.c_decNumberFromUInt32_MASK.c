
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_5__ {scalar_t__* lsu; int digits; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

decNumber * FUNC_2(decNumber *VAR_1, uInt VAR_2) {
  Unit *VAR_3;
  FUNC_1(VAR_1);
  if (VAR_2==0) return VAR_1;
  for (VAR_3=VAR_1->lsu; VAR_2>0; VAR_3++) {
    *VAR_3=(Unit)(VAR_2%(VAR_0+1));
    VAR_2=VAR_2/(VAR_0+1);
    }
  VAR_1->digits=FUNC_0(VAR_1->lsu, VAR_3-VAR_1->lsu);
  return VAR_1;
  }
