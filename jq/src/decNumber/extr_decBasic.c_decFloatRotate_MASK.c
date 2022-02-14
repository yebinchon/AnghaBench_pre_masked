
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
typedef int decFloat ;
struct TYPE_8__ {int status; } ;
typedef TYPE_1__ decContext ;
struct TYPE_9__ {int sign; int exponent; int * msd; int * lsd; } ;
typedef TYPE_2__ bcdnum ;
typedef int Int ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*,scalar_t__) ;
 int* VAR_3 ;
 int FUNC_5 (int const*,int *) ;
 int FUNC_6 (int const*) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (int const*) ;
 int * FUNC_11 (int *,int const*) ;
 int * FUNC_12 (int *,TYPE_1__*) ;
 int * FUNC_13 (int *,int const*,int const*,TYPE_1__*) ;
 int FUNC_14 (int *,int *,int) ;

decFloat * FUNC_15(decFloat *VAR_5,
                         const decFloat *VAR_6, const decFloat *VAR_7,
                         decContext *VAR_8) {
  Int VAR_9;
  uByte VAR_10[VAR_1+VAR_4];
  uInt VAR_11, VAR_12;
  bcdnum VAR_13;
  uByte *VAR_14;

  if (FUNC_2(VAR_6)||FUNC_2(VAR_7)) return FUNC_13(VAR_5, VAR_6, VAR_7, VAR_8);
  if (!FUNC_1(VAR_7)) return FUNC_12(VAR_5, VAR_8);
  VAR_11=FUNC_10(VAR_7);
  if (VAR_11>2) return FUNC_12(VAR_5, VAR_8);
  VAR_9=VAR_3[FUNC_4(VAR_7, VAR_2-1)&0x3ff];
  if (VAR_9>VAR_1) return FUNC_12(VAR_5, VAR_8);

  if (FUNC_0(VAR_6)) return FUNC_11(VAR_5, VAR_6);

  if (VAR_9==0 || VAR_9==VAR_1) return FUNC_8(VAR_5, VAR_6);



  if (FUNC_3(VAR_7)) VAR_9=-VAR_9;
  if (FUNC_7(VAR_9)>VAR_4) {
    if (VAR_9<0) VAR_9=VAR_1+VAR_9;
     else VAR_9=VAR_9-VAR_1;
    }


  VAR_14=VAR_10;
  if (VAR_9<0) VAR_14+=VAR_4;
  FUNC_5(VAR_6, VAR_14);

  if (VAR_9<0) {
    FUNC_14(VAR_10, VAR_10+VAR_1, VAR_4);
    VAR_13.msd=VAR_10+VAR_4+VAR_9;
    }
   else {
    FUNC_14(VAR_10+VAR_1, VAR_10, VAR_4);
    VAR_13.msd=VAR_10+VAR_9;
    }

  VAR_13.lsd=VAR_13.msd+VAR_1-1;
  VAR_13.sign=FUNC_4(VAR_6, 0)&VAR_0;
  VAR_13.exponent=FUNC_6(VAR_6);
  VAR_12=VAR_8->status;
  FUNC_9(VAR_5, &VAR_13, VAR_8);
  VAR_8->status=VAR_12;
  return VAR_5;
  }
