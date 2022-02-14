
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mult; } ;
struct tree_iterator {int pos; TYPE_1__ TS; int mult; int jump_to; } ;
typedef scalar_t__ iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2 (iterator_t VAR_2, int VAR_3) {
  struct tree_iterator *VAR_4 = (struct tree_iterator *) VAR_2;
  int VAR_5 = FUNC_1 (&VAR_4->TS, VAR_3);
  if (VAR_5 == VAR_0) {
    VAR_4->jump_to = VAR_1;
  } else {
    FUNC_0 ((VAR_4->mult = VAR_4->TS.mult) > 0);
  }
  return VAR_4->pos = VAR_5;
}
