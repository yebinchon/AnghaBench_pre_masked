
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t digits; size_t exponent; size_t* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef size_t Unit ;
typedef size_t Int ;
typedef scalar_t__ Flag ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 size_t FUNC_1 (size_t const,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 size_t* VAR_4 ;

__attribute__((used)) static Int FUNC_3(const decNumber *VAR_5) {
  Int VAR_6;
  const Unit *VAR_7;
  Int VAR_8;
  Int VAR_9=VAR_5->digits+VAR_5->exponent;
  Flag VAR_10=FUNC_2(VAR_5);
  if (FUNC_0(VAR_5)) return 0;

  VAR_7=VAR_5->lsu;
  VAR_6=0;
  if (VAR_5->exponent>=0) {

    VAR_8=VAR_5->exponent;
    }
   else {
    Int VAR_11=-VAR_5->exponent;

    for (; VAR_11>=VAR_3; VAR_7++) {
      if (*VAR_7!=0) return VAR_0;
      VAR_11-=VAR_3;
      }
    if (VAR_11==0) VAR_8=0;
     else {
      Int VAR_12;


        VAR_6=FUNC_1(*VAR_7, VAR_11);
        VAR_12=*VAR_7-VAR_6*VAR_4[VAR_11];




      if (VAR_12!=0) return VAR_0;

      VAR_8=VAR_3-VAR_11;
      VAR_7++;
      }
    }



  if (VAR_8==0) {VAR_6=*VAR_7; VAR_8+=VAR_3; VAR_7++;}

  if (VAR_9<11) {
    Int VAR_13=VAR_6;

    for (; VAR_8<VAR_9; VAR_7++) {
      VAR_6+=*VAR_7*VAR_4[VAR_8];
      VAR_8+=VAR_3;
      }
    if (VAR_9==10) {
      if (VAR_6/(Int)VAR_4[VAR_8-VAR_3]!=(Int)*(VAR_7-1)) VAR_9=11;

       else if (VAR_10 && VAR_6>1999999997) VAR_9=11;
       else if (!VAR_10 && VAR_6>999999999) VAR_9=11;
      if (VAR_9==11) VAR_6=VAR_13;
      }
    }

  if (VAR_9>10) {
    if (VAR_6&1) return VAR_2;
    return VAR_1;
    }

  if (VAR_10) VAR_6=-VAR_6;
  return VAR_6;
  }
