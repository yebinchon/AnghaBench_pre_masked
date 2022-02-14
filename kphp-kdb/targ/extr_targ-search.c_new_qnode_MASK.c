
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int value2; int value; int max_res; struct TYPE_6__* right; } ;
typedef TYPE_1__ query_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

query_t *FUNC_2 (int VAR_5, int VAR_6) {
  query_t *VAR_7;
  if (VAR_3) {
    VAR_7 = VAR_3;
    FUNC_0 (VAR_7 >= VAR_2 && VAR_7 < VAR_2 + VAR_1 && !VAR_7->type);
    VAR_3 = VAR_7->right;
  } else {
    FUNC_0 (VAR_4 >= 0 && VAR_4 <= VAR_1);
    if (VAR_4 >= VAR_1) { return 0; }
    VAR_7 = VAR_2 + VAR_4;
    VAR_4++;
  }
  FUNC_1 (VAR_7, 0, sizeof(query_t));
  VAR_7->max_res = VAR_0;
  VAR_7->type = VAR_5;
  VAR_7->value2 = VAR_7->value = VAR_6;
  return VAR_7;
}
