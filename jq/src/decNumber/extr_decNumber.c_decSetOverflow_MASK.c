
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
struct TYPE_9__ {int bits; int exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_10__ {int emax; int digits; int round; scalar_t__ clamp; } ;
typedef TYPE_2__ decContext ;
typedef int Int ;
typedef int Flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(decNumber *VAR_6, decContext *VAR_7, uInt *VAR_8) {
  Flag VAR_9=0;
  uByte VAR_10=VAR_6->bits&VAR_1;

  if (FUNC_0(VAR_6)) {
    Int VAR_11=VAR_7->emax;
    if (VAR_7->clamp) VAR_11-=VAR_7->digits-1;
    if (VAR_6->exponent>VAR_11) {
      VAR_6->exponent=VAR_11;
      *VAR_8|=VAR_2;
      }
    return;
    }

  FUNC_1(VAR_6);
  switch (VAR_7->round) {
    case 129: {
      VAR_9=1;
      break;}
    case 131: {
      VAR_9=1;
      break;}
    case 130: {
      if (VAR_10) VAR_9=1;
      break;}
    case 128: {
      if (!VAR_10) VAR_9=1;
      break;}
    default: break;
    }
  if (VAR_9) {
    FUNC_2(VAR_6, VAR_7);
    VAR_6->bits=VAR_10;
    }
   else VAR_6->bits=VAR_10|VAR_0;
  *VAR_8|=VAR_4 | VAR_3 | VAR_5;
  }
