
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ exponent; int* lsu; scalar_t__ bits; int digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_15__ {int digits; } ;
typedef TYPE_2__ decContext ;
typedef int Unit ;
typedef size_t Int ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__* VAR_3 ;

decNumber * FUNC_7(decNumber *VAR_4, const decNumber *VAR_5,
                            decContext *VAR_6) {
  const Unit *VAR_7, *VAR_8;
  Unit *VAR_9, *VAR_10;
  Int VAR_11;




  if (VAR_5->exponent!=0 || FUNC_5(VAR_5) || FUNC_4(VAR_5)) {
    FUNC_6(VAR_4, VAR_2, VAR_6);
    return VAR_4;
    }

  VAR_7=VAR_5->lsu;
  VAR_9=VAR_4->lsu;
  VAR_8=VAR_7+FUNC_0(VAR_5->digits)-1;
  VAR_10=VAR_9+FUNC_0(VAR_6->digits)-1;
  VAR_11=FUNC_1(VAR_6->digits);
  for (; VAR_9<=VAR_10; VAR_7++, VAR_9++) {
    Unit VAR_12;
    Int VAR_13, VAR_14;
    if (VAR_7>VAR_8) VAR_12=0;
     else VAR_12=*VAR_7;
    *VAR_9=0;


    for (VAR_13=0; VAR_13<VAR_0; VAR_13++) {
      if ((~VAR_12)&1) *VAR_9=*VAR_9+(Unit)VAR_3[VAR_13];
      VAR_14=VAR_12%10;
      VAR_12=VAR_12/10;
      if (VAR_14>1) {
        FUNC_6(VAR_4, VAR_2, VAR_6);
        return VAR_4;
        }
      if (VAR_9==VAR_10 && VAR_13==VAR_11-1) break;
      }
    }

  VAR_4->digits=FUNC_3(VAR_4->lsu, VAR_9-VAR_4->lsu);
  VAR_4->exponent=0;
  VAR_4->bits=0;
  return VAR_4;
  }
