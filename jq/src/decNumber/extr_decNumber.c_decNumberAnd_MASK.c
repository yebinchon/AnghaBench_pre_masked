
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ exponent; int* lsu; scalar_t__ bits; int digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_17__ {int digits; } ;
typedef TYPE_2__ decContext ;
typedef int Unit ;
typedef size_t Int ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__* VAR_2 ;

decNumber * FUNC_7(decNumber *VAR_3, const decNumber *VAR_4,
                         const decNumber *VAR_5, decContext *VAR_6) {
  const Unit *VAR_7, *VAR_8;
  const Unit *VAR_9, *VAR_10;
  Unit *VAR_11, *VAR_12;
  Int VAR_13;




  if (VAR_4->exponent!=0 || FUNC_5(VAR_4) || FUNC_4(VAR_4)
   || VAR_5->exponent!=0 || FUNC_5(VAR_5) || FUNC_4(VAR_5)) {
    FUNC_6(VAR_3, VAR_1, VAR_6);
    return VAR_3;
    }


  VAR_7=VAR_4->lsu;
  VAR_8=VAR_5->lsu;
  VAR_11=VAR_3->lsu;
  VAR_9=VAR_7+FUNC_0(VAR_4->digits)-1;
  VAR_10=VAR_8+FUNC_0(VAR_5->digits)-1;
  VAR_12=VAR_11+FUNC_0(VAR_6->digits)-1;
  VAR_13=FUNC_1(VAR_6->digits);
  for (; VAR_11<=VAR_12; VAR_7++, VAR_8++, VAR_11++) {
    Unit VAR_14, VAR_15;
    if (VAR_7>VAR_9) VAR_14=0;
     else VAR_14=*VAR_7;
    if (VAR_8>VAR_10) VAR_15=0;
     else VAR_15=*VAR_8;
    *VAR_11=0;
    if (VAR_14|VAR_15) {
      Int VAR_16, VAR_17;
      *VAR_11=0;

      for (VAR_16=0; VAR_16<VAR_0; VAR_16++) {
        if (VAR_14&VAR_15&1) *VAR_11=*VAR_11+(Unit)VAR_2[VAR_16];
        VAR_17=VAR_14%10;
        VAR_14=VAR_14/10;
        VAR_17|=VAR_15%10;
        VAR_15=VAR_15/10;
        if (VAR_17>1) {
          FUNC_6(VAR_3, VAR_1, VAR_6);
          return VAR_3;
          }
        if (VAR_11==VAR_12 && VAR_16==VAR_13-1) break;
        }
      }
    }

  VAR_3->digits=FUNC_3(VAR_3->lsu, VAR_11-VAR_3->lsu);
  VAR_3->exponent=0;
  VAR_3->bits=0;
  return VAR_3;
  }
