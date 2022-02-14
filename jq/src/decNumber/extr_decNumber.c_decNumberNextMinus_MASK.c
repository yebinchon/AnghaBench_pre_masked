
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_19__ {int bits; int* lsu; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_20__ {int round; } ;
typedef TYPE_2__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_2__*) ;

decNumber * FUNC_5(decNumber *VAR_7, const decNumber *VAR_8,
                               decContext *VAR_9) {
  decNumber VAR_10;
  decContext VAR_11=*VAR_9;
  uInt VAR_12=0;





  if ((VAR_8->bits&(VAR_0|VAR_1))==VAR_0) {
    FUNC_3(VAR_7, VAR_9);

    return VAR_7;
    }
  FUNC_2(&VAR_10);
  VAR_10.lsu[0]=1;
  VAR_10.exponent=VAR_4-1;
  VAR_11.round=VAR_5;
  FUNC_0(VAR_7, VAR_8, &VAR_10, &VAR_11, VAR_1, &VAR_12);
  VAR_12&=VAR_3|VAR_6;
  if (VAR_12!=0) FUNC_4(VAR_7, VAR_12, VAR_9);
  return VAR_7;
  }
