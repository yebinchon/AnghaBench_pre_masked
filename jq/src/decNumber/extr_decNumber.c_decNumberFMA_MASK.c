
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_31__ {int bits; scalar_t__ digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_32__ {scalar_t__ digits; int emin; int emax; int extended; } ;
typedef TYPE_2__ decContext ;
typedef int bufa ;
typedef int Unit ;
typedef int LI ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*,int*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*,int ) ;

decNumber * FUNC_13(decNumber *VAR_8, const decNumber *VAR_9,
                         const decNumber *VAR_10, const decNumber *VAR_11,
                         decContext *VAR_12) {
  uInt VAR_13=0;
  decContext VAR_14;
  uInt VAR_15;
  decNumber VAR_16[FUNC_0(VAR_0*2+1)];
  decNumber *VAR_17=((void*)0);
  decNumber *VAR_18;
  decNumber VAR_19;






  do {






    if ((!FUNC_7(VAR_9) && FUNC_4(VAR_9, VAR_12, &VAR_13))
     || (!FUNC_7(VAR_10) && FUNC_4(VAR_10, VAR_12, &VAR_13))
     || (!FUNC_7(VAR_11) && FUNC_4(VAR_11, VAR_12, &VAR_13))) break;

    VAR_14=*VAR_12;
    VAR_14.digits=VAR_9->digits+VAR_10->digits;

    VAR_14.emax=VAR_5;
    VAR_14.emin=VAR_6;

    VAR_18=VAR_16;
    VAR_15=sizeof(decNumber)+(FUNC_1(VAR_14.digits)-1)*sizeof(Unit);
    if (VAR_15>sizeof(VAR_16)) {
      VAR_17=(decNumber *)FUNC_11(VAR_15);
      if (VAR_17==((void*)0)) {
        VAR_13|=VAR_3;
        break;}
      VAR_18=VAR_17;
      }


    FUNC_6(VAR_18, VAR_9, VAR_10, &VAR_14, &VAR_13);






    if ((VAR_13&VAR_4)!=0) {
      if (!(VAR_13&VAR_7)) {
        FUNC_8(VAR_8);
        VAR_8->bits=VAR_1;
        break;
        }
      FUNC_8(&VAR_19);
      VAR_11=&VAR_19;
      }






    FUNC_2(VAR_8, VAR_18, VAR_11, VAR_12, 0, &VAR_13);
    } while(0);

  if (VAR_17!=((void*)0)) FUNC_10(VAR_17);
  if (VAR_13!=0) FUNC_9(VAR_8, VAR_13, VAR_12);



  return VAR_8;
  }
