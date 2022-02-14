
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* last; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ query_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

query_t *FUNC_3 (int VAR_0, query_t **VAR_1, int VAR_2) {
  FUNC_0 (VAR_2 >= 2);
  query_t *VAR_3, *VAR_4, *VAR_5 = FUNC_1 (VAR_0, 0);
  VAR_5->left = VAR_1[VAR_2-2];
  VAR_5->right = VAR_1[VAR_2-1];
  FUNC_2 (VAR_5);
  VAR_3 = VAR_5;
  VAR_2 -= 2;
  while (VAR_2) {
    VAR_4 = FUNC_1 (VAR_0, 0);
    VAR_4->left = VAR_1[--VAR_2];
    VAR_4->right = VAR_3;
    VAR_3 = VAR_4;
    FUNC_2 (VAR_3);
  }
  VAR_3->last = VAR_5;
  return VAR_3;
}
