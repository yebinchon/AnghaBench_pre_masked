
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bits; scalar_t__ exponent; int digits; int lsu; } ;
typedef TYPE_1__ decNumber ;
typedef int Int ;
typedef scalar_t__ Flag ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static Int FUNC_5(const decNumber *VAR_2, const decNumber *VAR_3,
                      Flag VAR_4) {
  Int VAR_5;
  Int VAR_6;
  Int VAR_7;

  VAR_5=1;
  if (FUNC_1(VAR_2)) VAR_5=0;
  if (VAR_4) {
    if (FUNC_1(VAR_3)) return VAR_5;

    if (VAR_5==0) return -1;

    }
   else {
    if (VAR_5 && FUNC_3(VAR_2)) VAR_5=-1;
    VAR_6=1;
    if (FUNC_1(VAR_3)) VAR_6=0;
     else if (FUNC_3(VAR_3)) VAR_6=-1;
    if (VAR_5 > VAR_6) return +1;
    if (VAR_5 < VAR_6) return -1;
    if (VAR_5==0) return 0;
    }


  if ((VAR_2->bits | VAR_3->bits) & VAR_1) {
    if (FUNC_2(VAR_3)) {
      if (FUNC_2(VAR_2)) VAR_5=0;
       else VAR_5=-VAR_5;
      }
    return VAR_5;
    }

  if (VAR_2->exponent>VAR_3->exponent) {

    const decNumber *VAR_8=VAR_2;
    VAR_2=VAR_3;
    VAR_3=VAR_8;
    VAR_5=-VAR_5;
    }
  VAR_7=FUNC_4(VAR_2->lsu, FUNC_0(VAR_2->digits),
                         VAR_3->lsu, FUNC_0(VAR_3->digits),
                         VAR_3->exponent-VAR_2->exponent);
  if (VAR_7!=VAR_0) VAR_7*=VAR_5;
  return VAR_7;
  }
