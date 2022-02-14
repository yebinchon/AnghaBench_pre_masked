
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {scalar_t__ oneliner; int value; int * (* colorval ) () ;int field; int * (* colorlbl ) () ;} ;
typedef int GColors ;
typedef TYPE_1__ Field ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t,int,int *) ;
 int FUNC_1 (int *,int ,size_t,int,int *) ;
 size_t FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (WINDOW * VAR_1, Field VAR_2[], size_t VAR_3)
{
  GColors *VAR_4 = ((void*)0);
  int VAR_5 = 2, VAR_6 = 0;
  size_t VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13;

  for (VAR_7 = 0, VAR_9 = 0, VAR_13 = 2; VAR_7 < VAR_3; VAR_7++) {

    VAR_12 = VAR_9 % VAR_0;


    if (VAR_9 > 0 && VAR_12 == 0) {
      VAR_11 = VAR_10 = 0;
      VAR_6 = VAR_5 = 2;
      VAR_13++;
    }


    VAR_5 += VAR_10;

    VAR_4 = (*VAR_2[VAR_7].colorlbl) ();
    FUNC_0 (VAR_1, VAR_2[VAR_7].field, VAR_13, VAR_5, VAR_4);


    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      size_t VAR_14 = FUNC_2 (VAR_2[VAR_8].field);
      if (VAR_8 % VAR_0 == VAR_12 && VAR_14 > VAR_10 &&
          !VAR_2[VAR_8].oneliner)
        VAR_10 = VAR_14;
    }

    VAR_11 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      size_t VAR_15 = FUNC_2 (VAR_2[VAR_8].value);
      if (VAR_8 % VAR_0 == VAR_12 && VAR_15 > VAR_11 &&
          !VAR_2[VAR_8].oneliner)
        VAR_11 = VAR_15;
    }


    VAR_6 = VAR_10 + VAR_5 + 1;
    VAR_10 += VAR_11 + 2;

    VAR_4 = (*VAR_2[VAR_7].colorval) ();
    FUNC_1 (VAR_1, VAR_2[VAR_7].value, VAR_13, VAR_6, VAR_4);
    VAR_9 += VAR_2[VAR_7].oneliner ? VAR_0 : 1;
  }
}
