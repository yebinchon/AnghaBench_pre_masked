
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t digits; size_t exponent; scalar_t__ bits; scalar_t__* lsu; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_6__ {size_t digits; size_t emax; } ;
typedef TYPE_2__ decContext ;
typedef scalar_t__ Unit ;
typedef size_t Int ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(decNumber *VAR_3, decContext *VAR_4) {
  Unit *VAR_5;
  Int VAR_6=VAR_4->digits;
  VAR_3->digits=VAR_6;

  for (VAR_5=VAR_3->lsu; ; VAR_5++) {
    if (VAR_6>VAR_0) *VAR_5=VAR_1;
     else {
      *VAR_5=(Unit)(VAR_2[VAR_6]-1);
      break;
      }
    VAR_6-=VAR_0;
    }
  VAR_3->bits=0;
  VAR_3->exponent=VAR_4->emax-VAR_4->digits+1;
  }
