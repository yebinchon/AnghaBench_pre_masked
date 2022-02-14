
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_17__ {int bits; int digits; } ;
typedef TYPE_1__ decNumber ;
typedef int decContext ;
typedef int bufb ;
typedef int bufa ;
typedef int Unit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *,int ,int*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*,int,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;

decNumber * FUNC_9(decNumber *VAR_4, const decNumber *VAR_5,
                                     const decNumber *VAR_6, decContext *VAR_7) {
  uInt VAR_8=0;
  uInt VAR_9;
  decNumber VAR_10[FUNC_0(VAR_1+1)];
  decNumber *VAR_11=((void*)0);
  decNumber VAR_12[FUNC_0(VAR_1+1)];
  decNumber *VAR_13=((void*)0);
  decNumber *VAR_14, *VAR_15;





  do {

    if (FUNC_5(VAR_5)) {
      VAR_14=VAR_10;
      VAR_9=sizeof(decNumber)+(FUNC_1(VAR_5->digits)-1)*sizeof(Unit);
      if (VAR_9>sizeof(VAR_10)) {
        VAR_11=(decNumber *)FUNC_8(VAR_9);
        if (VAR_11==((void*)0)) {
          VAR_8|=VAR_3;
          break;}
        VAR_14=VAR_11;
        }
      FUNC_4(VAR_14, VAR_5);
      VAR_14->bits&=~VAR_2;
      VAR_5=VAR_14;
      }
    if (FUNC_5(VAR_6)) {
      VAR_15=VAR_12;
      VAR_9=sizeof(decNumber)+(FUNC_1(VAR_6->digits)-1)*sizeof(Unit);
      if (VAR_9>sizeof(VAR_12)) {
        VAR_13=(decNumber *)FUNC_8(VAR_9);
        if (VAR_13==((void*)0)) {
          VAR_8|=VAR_3;
          break;}
        VAR_15=VAR_13;
        }
      FUNC_4(VAR_15, VAR_6);
      VAR_15->bits&=~VAR_2;
      VAR_6=VAR_15;
      }
    FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_0, &VAR_8);
    } while(0);

  if (VAR_11!=((void*)0)) FUNC_7(VAR_11);
  if (VAR_13!=((void*)0)) FUNC_7(VAR_13);
  if (VAR_8!=0) FUNC_6(VAR_4, VAR_8, VAR_7);
  return VAR_4;
  }
