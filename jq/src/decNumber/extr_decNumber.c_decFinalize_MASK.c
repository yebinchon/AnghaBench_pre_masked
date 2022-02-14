
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_15__ {scalar_t__ digits; scalar_t__ exponent; int* lsu; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_16__ {scalar_t__ emin; scalar_t__ emax; scalar_t__ digits; int clamp; } ;
typedef TYPE_2__ decContext ;
typedef scalar_t__ Int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (int*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(decNumber *VAR_3, decContext *VAR_4, Int *VAR_5,
                        uInt *VAR_6) {
  Int VAR_7;
  Int VAR_8=VAR_4->emin-VAR_3->digits+1;







  if (VAR_3->exponent<=VAR_8) {
    Int VAR_9;
    decNumber VAR_10;

    if (VAR_3->exponent<VAR_8) {

      FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
      return;
      }

    FUNC_3(&VAR_10);
    VAR_10.lsu[0]=1;
    VAR_10.exponent=VAR_4->emin;
    VAR_9=FUNC_2(VAR_3, &VAR_10, 1);
    if (VAR_9==VAR_0) {
      *VAR_6|=VAR_2;
      return;
      }
    if (*VAR_5<0 && VAR_9==0) {
      FUNC_1(VAR_3, VAR_4, *VAR_5, VAR_6);
      FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
      return;
      }
    }


  if (*VAR_5!=0) FUNC_1(VAR_3, VAR_4, *VAR_5, VAR_6);


  if (VAR_3->exponent<=VAR_4->emax-VAR_4->digits+1) return;



  if (VAR_3->exponent>VAR_4->emax-VAR_3->digits+1) {
    FUNC_4(VAR_3, VAR_4, VAR_6);
    return;
    }

  if (!VAR_4->clamp) return;


  VAR_7=VAR_3->exponent-(VAR_4->emax-VAR_4->digits+1);


  if (!FUNC_0(VAR_3)) {
    VAR_3->digits=FUNC_6(VAR_3->lsu, VAR_3->digits, VAR_7);
    }
  VAR_3->exponent-=VAR_7;
  *VAR_6|=VAR_1;
  return;
  }
