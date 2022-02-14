
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; struct TYPE_5__* next; } ;
typedef TYPE_1__ restore_list ;
typedef int map_int_vptr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

int FUNC_6 (int *VAR_0, int VAR_1, map_int_vptr *VAR_2) {
  int VAR_3;
  restore_list *VAR_4 = ((void*)0);
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    int VAR_5 = VAR_0[VAR_3];
    if (VAR_5 < 0) {
      VAR_4 = FUNC_4 (FUNC_0 (VAR_5));
    } else {
      FUNC_5 (VAR_4, VAR_5);
    }
    if (VAR_3 + 1 == VAR_1 || VAR_0[VAR_3 + 1] < 0) {
      FUNC_1 (VAR_4 != ((void*)0));
      FUNC_1 (VAR_4->next != VAR_4);
      FUNC_1 (FUNC_3 (VAR_2, VAR_4->val) == ((void*)0));
      *FUNC_2 (VAR_2, VAR_4->val) = VAR_4;
    }
  }
  return sizeof (int) * VAR_1;
}
