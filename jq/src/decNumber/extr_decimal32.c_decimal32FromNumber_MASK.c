
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_15__ {int bytes; } ;
typedef TYPE_1__ decimal32 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__ const*,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*,TYPE_3__*) ;

decimal32 * FUNC_6(decimal32 *VAR_16, const decNumber *VAR_17,
                              decContext *VAR_18) {
  uInt VAR_19=0;
  Int VAR_20;
  decNumber VAR_21;
  decContext VAR_22;
  uInt VAR_23, VAR_24;
  uInt VAR_25;
  uInt VAR_26=0;






  VAR_20=VAR_17->exponent+VAR_17->digits-1;
  if (VAR_17->digits>VAR_6
   || VAR_20>VAR_4
   || VAR_20<VAR_5) {
    FUNC_1(&VAR_22, VAR_15);
    VAR_22.round=VAR_18->round;
    FUNC_5(&VAR_21, VAR_17, &VAR_22);

    VAR_21.bits|=VAR_17->bits&VAR_12;
    VAR_19=VAR_22.status;
    VAR_17=&VAR_21;
    }

  if (VAR_17->bits&VAR_13) {
    if (VAR_17->bits&VAR_10) VAR_26=VAR_7<<24;
     else {
      if ((*VAR_17->lsu!=0 || VAR_17->digits>1)
       && (VAR_17->digits<VAR_6)) {
        FUNC_3(VAR_17, &VAR_26, 0);
        }
      if (VAR_17->bits&VAR_11) VAR_26|=VAR_8<<24;
       else VAR_26|=VAR_9<<24;
      }
    }

   else {
    if (FUNC_4(VAR_17)) {

      if (VAR_17->exponent<-VAR_2) {
        VAR_24=0;
        VAR_19|=VAR_14;
        }
       else {
        VAR_24=VAR_17->exponent+VAR_2;
        if (VAR_24>VAR_3) {
          VAR_24=VAR_3;
          VAR_19|=VAR_14;
          }
        }
      VAR_23=(VAR_24>>3) & 0x18;
      }
     else {
      uInt VAR_27;
      Int VAR_28=0;


      VAR_24=(uInt)(VAR_17->exponent+VAR_2);
      if (VAR_24>VAR_3) {
        VAR_28=VAR_24-VAR_3;
        VAR_24=VAR_3;
        VAR_19|=VAR_14;
        }


      if (VAR_1==3 && VAR_28==0) {
        VAR_26=VAR_0[VAR_17->lsu[0]];
        if (VAR_17->digits>3) VAR_26|=(uInt)(VAR_0[VAR_17->lsu[1]])<<10;
        VAR_27=(VAR_17->digits==7 ? VAR_17->lsu[2] : 0);
        }
       else {
        FUNC_3(VAR_17, &VAR_26, VAR_28);

        VAR_27=VAR_26>>20;
        VAR_26&=0x000fffff;
        }


      if (VAR_27>=8) VAR_23=0x18 | ((VAR_24>>5) & 0x06) | (VAR_27 & 0x01);
             else VAR_23=((VAR_24>>3) & 0x18) | VAR_27;
      }
    VAR_26|=VAR_23<<26;
    VAR_26|=(VAR_24&0x3f)<<20;
    }

  if (VAR_17->bits&VAR_12) VAR_26|=0x80000000;


  FUNC_0(VAR_16->bytes, VAR_26);

  if (VAR_19!=0) FUNC_2(VAR_18, VAR_19);

  return VAR_16;
  }
