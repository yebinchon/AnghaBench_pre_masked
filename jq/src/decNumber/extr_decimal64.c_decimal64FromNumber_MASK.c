
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_15__ {scalar_t__ bytes; } ;
typedef TYPE_1__ decimal64 ;
struct TYPE_16__ {scalar_t__ exponent; int digits; int bits; scalar_t__* lsu; } ;
typedef TYPE_2__ decNumber ;
struct TYPE_17__ {int status; int round; } ;
typedef TYPE_3__ decContext ;
typedef scalar_t__ Int ;


 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__ const*,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*,TYPE_3__*) ;
 int VAR_17 ;
 int VAR_18 ;

decimal64 * FUNC_6(decimal64 *VAR_19, const decNumber *VAR_20,
                                decContext *VAR_21) {
  uInt VAR_22=0;
  Int VAR_23;
  decNumber VAR_24;
  decContext VAR_25;
  uInt VAR_26, VAR_27;
  uInt VAR_28;
  uInt VAR_29[2]={0, 0};
  VAR_23=VAR_20->exponent+VAR_20->digits-1;
  if (VAR_20->digits>VAR_6
   || VAR_23>VAR_4
   || VAR_23<VAR_5) {
    FUNC_1(&VAR_25, VAR_16);
    VAR_25.round=VAR_21->round;
    FUNC_5(&VAR_24, VAR_20, &VAR_25);

    VAR_24.bits|=VAR_20->bits&VAR_13;
    VAR_22=VAR_25.status;
    VAR_20=&VAR_24;
    }

  if (VAR_20->bits&VAR_14) {
    if (VAR_20->bits&VAR_10) VAR_29[1]=VAR_7<<24;
     else {
      if ((*VAR_20->lsu!=0 || VAR_20->digits>1)
       && (VAR_20->digits<VAR_6)) {
        FUNC_3(VAR_20, VAR_29, 0);
        }
      if (VAR_20->bits&VAR_12) VAR_29[1]|=VAR_8<<24;
       else VAR_29[1]|=VAR_9<<24;
      }
    }

   else {
    if (FUNC_4(VAR_20)) {

      if (VAR_20->exponent<-VAR_2) {
        VAR_27=0;
        VAR_22|=VAR_15;
        }
       else {
        VAR_27=VAR_20->exponent+VAR_2;
        if (VAR_27>VAR_3) {
          VAR_27=VAR_3;
          VAR_22|=VAR_15;
          }
        }
      VAR_26=(VAR_27>>5) & 0x18;
      }
     else {
      uInt VAR_30;
      Int VAR_31=0;


      VAR_27=(uInt)(VAR_20->exponent+VAR_2);
      if (VAR_27>VAR_3) {
        VAR_31=VAR_27-VAR_3;
        VAR_27=VAR_3;
        VAR_22|=VAR_15;
        }


      if (VAR_1==3 && VAR_31==0) {
        uInt VAR_32[6]={0,0,0,0,0,0};
        uInt VAR_33;
        Int VAR_34=VAR_20->digits;
        for (VAR_33=0; VAR_34>0; VAR_33++, VAR_34-=3) VAR_32[VAR_33]=VAR_0[VAR_20->lsu[VAR_33]];
        VAR_29[0] =VAR_32[0];
        VAR_29[0]|=VAR_32[1]<<10;
        VAR_29[0]|=VAR_32[2]<<20;
        if (VAR_20->digits>6) {
          VAR_29[0]|=VAR_32[3]<<30;
          VAR_29[1] =VAR_32[3]>>2;
          VAR_29[1]|=VAR_32[4]<<8;
          }
        VAR_30=VAR_32[5];
        }
       else {
        FUNC_3(VAR_20, VAR_29, VAR_31);

        VAR_30=VAR_29[1]>>18;
        VAR_29[1]&=0x0003ffff;
        }


      if (VAR_30>=8) VAR_26=0x18 | ((VAR_27>>7) & 0x06) | (VAR_30 & 0x01);
             else VAR_26=((VAR_27>>5) & 0x18) | VAR_30;
      }
    VAR_29[1]|=VAR_26<<26;
    VAR_29[1]|=(VAR_27&0xff)<<18;
    }

  if (VAR_20->bits&VAR_13) VAR_29[1]|=0x80000000;


  if (VAR_11) {

    FUNC_0(VAR_19->bytes, VAR_29[0]);
    FUNC_0(VAR_19->bytes+4, VAR_29[1]);
    }
   else {

    FUNC_0(VAR_19->bytes, VAR_29[1]);
    FUNC_0(VAR_19->bytes+4, VAR_29[0]);
    }

  if (VAR_22!=0) FUNC_2(VAR_21, VAR_22);

  return VAR_19;
  }
