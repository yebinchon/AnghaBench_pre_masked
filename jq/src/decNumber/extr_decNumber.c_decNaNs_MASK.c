
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_11__ {int bits; int digits; scalar_t__ exponent; int * lsu; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_12__ {int digits; } ;
typedef TYPE_2__ decContext ;
typedef int Unit ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;

__attribute__((used)) static decNumber * FUNC_3(decNumber *VAR_5, const decNumber *VAR_6,
                           const decNumber *VAR_7, decContext *VAR_8,
                           uInt *VAR_9) {


  if (VAR_6->bits & VAR_2)
    *VAR_9|=VAR_3 | VAR_4;
   else if (VAR_7==((void*)0));
   else if (VAR_7->bits & VAR_2) {
    VAR_6=VAR_7;
    *VAR_9|=VAR_3 | VAR_4;
    }
   else if (VAR_6->bits & VAR_1);
   else VAR_6=VAR_7;


  if (VAR_6->digits<=VAR_8->digits) FUNC_2(VAR_5, VAR_6);
   else {
    const Unit *VAR_10;
    Unit *VAR_11, *VAR_12;

    VAR_5->bits=VAR_6->bits;
    VAR_12=VAR_5->lsu+FUNC_0(VAR_8->digits);
    for (VAR_11=VAR_5->lsu, VAR_10=VAR_6->lsu; VAR_11<VAR_12; VAR_11++, VAR_10++) *VAR_11=*VAR_10;
    VAR_5->digits=FUNC_0(VAR_8->digits)*VAR_0;

    if (VAR_5->digits>VAR_8->digits) FUNC_1(VAR_5, VAR_5->digits-VAR_8->digits);
    }

  VAR_5->bits&=~VAR_2;
  VAR_5->bits|=VAR_1;
  VAR_5->exponent=0;

  return VAR_5;
  }
