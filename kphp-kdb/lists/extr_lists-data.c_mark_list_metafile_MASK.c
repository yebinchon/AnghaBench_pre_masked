
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int list_id_t ;
struct TYPE_2__ {scalar_t__ prev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 long long FUNC_3 (int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;

int FUNC_4 (list_id_t VAR_4) {


  int VAR_5 = FUNC_2 (VAR_4);
  FUNC_0 (VAR_5 >= 0);



  if (VAR_0[VAR_5]->prev >= 0) {
    long long VAR_6 = FUNC_3 (VAR_5 + 1) - FUNC_3 (VAR_5);
    VAR_3 -= VAR_6;
    VAR_2 += VAR_6;
    FUNC_1 (VAR_5);
    VAR_1 ++;
    return 1;
  }
  return 0;
}
