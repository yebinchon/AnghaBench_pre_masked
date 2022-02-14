
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
struct TYPE_32__ {scalar_t__ digits; int bits; int* lsu; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_33__ {scalar_t__ digits; int extended; } ;
typedef TYPE_2__ decContext ;
typedef int Int ;
typedef scalar_t__ Flag ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int*,int*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*,int*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__ const*,TYPE_2__*,int*) ;
 int FUNC_12 (int*,int ,int*,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;

decNumber * FUNC_14(decNumber *VAR_15, const decNumber *VAR_16,
                         const decNumber *VAR_17, decContext *VAR_18,
                         Flag VAR_19, uInt *VAR_20) {




  Int VAR_21=0;
  uByte VAR_22;





  do {
    if (VAR_19==VAR_8) {
      if (FUNC_7(VAR_16) & !FUNC_7(VAR_17)) {
        VAR_21=-1;
        break;
        }
      if (!(FUNC_7(VAR_16) & FUNC_7(VAR_17))) {
        VAR_21=+1;
        break;
        }
      }



    VAR_22=(VAR_16->bits | VAR_17->bits) & (VAR_11 | VAR_9);
    if (VAR_22) {
      if (VAR_19==VAR_1);
       else if (VAR_19==VAR_7)
        *VAR_20|=VAR_13 | VAR_14;
       else if (VAR_19==VAR_8) {


        if (!FUNC_6(VAR_16)) VAR_21=-1;
         else if (!FUNC_6(VAR_17)) VAR_21=+1;

         else if (FUNC_9(VAR_16) && FUNC_8(VAR_17)) VAR_21=-1;
         else if (FUNC_8(VAR_16) && FUNC_9(VAR_17)) VAR_21=+1;
         else {

          VAR_21=FUNC_12(VAR_16->lsu, FUNC_0(VAR_16->digits),
                                VAR_17->lsu, FUNC_0(VAR_17->digits), 0);

          }
        if (FUNC_7(VAR_16)) VAR_21=-VAR_21;
        break;
        }

       else if (VAR_22 & VAR_11);
       else {

        if (!FUNC_6(VAR_16) || !FUNC_6(VAR_17)) {

          VAR_19=VAR_2;
          if (VAR_16->bits & VAR_9) VAR_21=-1;
                             else VAR_21=+1;
          break;
          }
        }
      VAR_19=VAR_6;
      FUNC_5(VAR_15, VAR_16, VAR_17, VAR_18, VAR_20);
      break;
      }

    if (VAR_19==VAR_3 || VAR_19==VAR_5) VAR_21=FUNC_2(VAR_16, VAR_17, 1);
     else VAR_21=FUNC_2(VAR_16, VAR_17, 0);
    } while(0);

  if (VAR_21==VAR_0) *VAR_20|=VAR_12;
   else {
    if (VAR_19==VAR_1 || VAR_19==VAR_7 ||VAR_19==VAR_8) {
      if (VAR_19==VAR_8 && VAR_21==0) {


        if (VAR_16->exponent!=VAR_17->exponent) {
          if (VAR_16->exponent<VAR_17->exponent) VAR_21=-1;
           else VAR_21=+1;
          if (FUNC_7(VAR_16)) VAR_21=-VAR_21;
          }
        }
      FUNC_10(VAR_15);
      if (VAR_21!=0) {
        *VAR_15->lsu=1;
        if (VAR_21<0) VAR_15->bits=VAR_10;
        }
      }
     else if (VAR_19==VAR_6);
     else {
      Int VAR_23=0;

      const decNumber *VAR_24;
      if (VAR_21==0) {

        uByte VAR_25=(VAR_16->bits & VAR_10);
        uByte VAR_26=(VAR_17->bits & VAR_10);







        if (VAR_25!=VAR_26) {
          if (VAR_25) VAR_21=-1;
               else VAR_21=+1;
          }
         else if (VAR_25 && VAR_26) {
          if (VAR_16->exponent<VAR_17->exponent) VAR_21=+1;
                                      else VAR_21=-1;

          }
         else {
          if (VAR_16->exponent>VAR_17->exponent) VAR_21=+1;
                                      else VAR_21=-1;

          }
        }

      if (VAR_19==VAR_4 || VAR_19==VAR_5) VAR_21=-VAR_21;
      VAR_24=(VAR_21>0 ? VAR_16 : VAR_17);

      FUNC_3(VAR_15, VAR_24, VAR_18, &VAR_23, VAR_20);
      FUNC_4(VAR_15, VAR_18, &VAR_23, VAR_20);
      }
    }




  return VAR_15;
  }
