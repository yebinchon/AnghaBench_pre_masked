
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_5__ {int digits; int lsu; int exponent; int bits; } ;
typedef TYPE_1__ decNumber ;
typedef int decContext ;
typedef int Int ;


 int FUNC_0 (TYPE_1__*,int *,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(decNumber *VAR_0, const decNumber *VAR_1,
                       decContext *VAR_2, Int *VAR_3, uInt *VAR_4) {
  VAR_0->bits=VAR_1->bits;
  VAR_0->exponent=VAR_1->exponent;
  FUNC_0(VAR_0, VAR_2, VAR_1->lsu, VAR_1->digits, VAR_3, VAR_4);
  }
