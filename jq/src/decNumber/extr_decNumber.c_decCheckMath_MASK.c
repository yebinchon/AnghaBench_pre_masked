
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_6__ {int digits; int exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_7__ {int digits; int emax; int emin; } ;
typedef TYPE_2__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static uInt FUNC_1(const decNumber *VAR_3, decContext *VAR_4,
                         uInt *VAR_5) {
  uInt VAR_6=*VAR_5;
  if (VAR_4->digits>VAR_2
   || VAR_4->emax>VAR_2
   || -VAR_4->emin>VAR_2) *VAR_5|=VAR_0;
   else if ((VAR_3->digits>VAR_2
     || VAR_3->exponent+VAR_3->digits>VAR_2+1
     || VAR_3->exponent+VAR_3->digits<2*(1-VAR_2))
     && !FUNC_0(VAR_3)) *VAR_5|=VAR_1;
  return (*VAR_5!=VAR_6);
  }
