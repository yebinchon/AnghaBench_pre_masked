
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_15__ {scalar_t__ bytes; } ;
typedef TYPE_1__ decimal128 ;
struct TYPE_16__ {scalar_t__ exponent; int digits; int bits; scalar_t__* lsu; } ;
typedef TYPE_2__ decNumber ;
struct TYPE_17__ {int status; int round; } ;
typedef TYPE_3__ decContext ;
typedef scalar_t__ Int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__ const*,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*,TYPE_3__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

decimal128 * FUNC_6(decimal128 *VAR_19, const decNumber *VAR_20,
                                  decContext *VAR_21) {
  uInt VAR_22=0;
  Int VAR_23;
  decNumber VAR_24;
  decContext VAR_25;
  uInt VAR_26, VAR_27;
  uInt VAR_28;
  uInt VAR_29[4]={0,0,0,0};
  VAR_23=VAR_20->exponent+VAR_20->digits-1;
  if (VAR_20->digits>VAR_4
   || VAR_23>VAR_2
   || VAR_23<VAR_3) {
    FUNC_1(&VAR_25, VAR_14);
    VAR_25.round=VAR_21->round;
    FUNC_5(&VAR_24, VAR_20, &VAR_25);

    VAR_24.bits|=VAR_20->bits&VAR_11;
    VAR_22=VAR_25.status;
    VAR_20=&VAR_24;
    }

  if (VAR_20->bits&VAR_12) {
    if (VAR_20->bits&VAR_8) VAR_29[3]=VAR_5<<24;
     else {
      if ((*VAR_20->lsu!=0 || VAR_20->digits>1)
       && (VAR_20->digits<VAR_4)) {
        FUNC_3(VAR_20, VAR_29, 0);
        }
      if (VAR_20->bits&VAR_10) VAR_29[3]|=VAR_6<<24;
       else VAR_29[3]|=VAR_7<<24;
      }
    }

   else {
    if (FUNC_4(VAR_20)) {

      if (VAR_20->exponent<-VAR_0) {
        VAR_27=0;
        VAR_22|=VAR_13;
        }
       else {
        VAR_27=VAR_20->exponent+VAR_0;
        if (VAR_27>VAR_1) {
          VAR_27=VAR_1;
          VAR_22|=VAR_13;
          }
        }
      VAR_26=(VAR_27>>9) & 0x18;
      }
     else {
      uInt VAR_30;
      Int VAR_31=0;


      VAR_27=(uInt)(VAR_20->exponent+VAR_0);
      if (VAR_27>VAR_1) {
        VAR_31=VAR_27-VAR_1;
        VAR_27=VAR_1;
        VAR_22|=VAR_13;
        }


      FUNC_3(VAR_20, VAR_29, VAR_31);

      VAR_30=VAR_29[3]>>14;
      VAR_29[3]&=0x00003fff;


      if (VAR_30>=8) VAR_26=0x18 | ((VAR_27>>11) & 0x06) | (VAR_30 & 0x01);
             else VAR_26=((VAR_27>>9) & 0x18) | VAR_30;
      }
    VAR_29[3]|=VAR_26<<26;
    VAR_29[3]|=(VAR_27&0xfff)<<14;
    }

  if (VAR_20->bits&VAR_11) VAR_29[3]|=0x80000000;


  if (VAR_9) {

    FUNC_0(VAR_19->bytes, VAR_29[0]);
    FUNC_0(VAR_19->bytes+4, VAR_29[1]);
    FUNC_0(VAR_19->bytes+8, VAR_29[2]);
    FUNC_0(VAR_19->bytes+12, VAR_29[3]);
    }
   else {

    FUNC_0(VAR_19->bytes, VAR_29[3]);
    FUNC_0(VAR_19->bytes+4, VAR_29[2]);
    FUNC_0(VAR_19->bytes+8, VAR_29[1]);
    FUNC_0(VAR_19->bytes+12, VAR_29[0]);
    }

  if (VAR_22!=0) FUNC_2(VAR_21, VAR_22);

  return VAR_19;
  }
