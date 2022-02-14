
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int transaction_t ;
struct TYPE_2__ {int * th_last; int * th_first; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1 (int VAR_7) {
  int VAR_8;

  VAR_3 = VAR_2;

  FUNC_0 (!VAR_4 && !VAR_5 && !VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    VAR_1[VAR_8].th_first = VAR_1[VAR_8].th_last = (transaction_t *) &VAR_1[VAR_8];
  }

  return 0;
}
