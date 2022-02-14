
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_visited; } ;
typedef TYPE_1__ user_t ;
typedef int olist_t ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4 (user_t *VAR_3) {
  if (FUNC_0 (VAR_3->last_visited)) {
    int VAR_4 = FUNC_1 (VAR_3->last_visited);
    FUNC_2 ((olist_t *)&VAR_0[VAR_4], FUNC_3 (VAR_3));
    VAR_2[VAR_4 + VAR_1]++;
  }
}
