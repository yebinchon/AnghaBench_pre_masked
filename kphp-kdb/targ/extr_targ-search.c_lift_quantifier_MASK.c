
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; scalar_t__ type; struct TYPE_9__* last; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ query_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

query_t *FUNC_4 (int VAR_2, query_t *VAR_3) {
  if ((VAR_3->flags & 1) || !FUNC_0 (VAR_3)) {
    return 0;
  }
  if (VAR_3->type == VAR_0 || VAR_3->type == VAR_1) {
    query_t *VAR_4 = FUNC_4 (VAR_2, VAR_3->left);
    query_t *VAR_5 = FUNC_4 (VAR_2, VAR_3->right);
    if (!VAR_4) {
      return VAR_5;
    }
    if (!VAR_5) {
      return VAR_4;
    }
    query_t *VAR_6 = FUNC_2 (VAR_3->type, 0);
    VAR_6->left = VAR_4;
    VAR_6->right = VAR_5;
    FUNC_3 (VAR_6);
    if (VAR_5->type == VAR_3->type && !(VAR_5->flags & 1)) {
      VAR_6->last = VAR_5->last;
    } else {
      VAR_6->last = VAR_6;
    }
    return VAR_6;
  }
  return FUNC_1 (VAR_2, VAR_3);
}
