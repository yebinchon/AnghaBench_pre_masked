
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pos; scalar_t__ mult; } ;
struct TYPE_6__ {int pos; scalar_t__ mult; } ;
struct wordlist_tree_iterator {scalar_t__ mult; int pos; TYPE_1__ WS; TYPE_3__ TS; int jump_to; } ;
typedef scalar_t__ iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5 (iterator_t VAR_2, int VAR_3) {
  struct wordlist_tree_iterator *VAR_4 = (struct wordlist_tree_iterator *) VAR_2;
  int VAR_5 = VAR_4->TS.pos;
  if (VAR_5 < VAR_3) {
    VAR_5 = FUNC_1 (&VAR_4->TS, VAR_3);
  }
  int VAR_6 = VAR_4->WS.pos;
  if (VAR_6 < VAR_3) {
    VAR_6 = FUNC_3 (&VAR_4->WS, VAR_3);
  }
  while (1) {
    if (VAR_5 < VAR_6) {
      FUNC_0 ((VAR_4->mult = VAR_4->TS.mult) > 0);
      return VAR_4->pos = VAR_5;
    } else if (VAR_5 > VAR_6) {
      FUNC_0 ((VAR_4->mult = VAR_4->WS.mult) > 0);
      return VAR_4->pos = VAR_6;
    } else if (VAR_5 == VAR_0) {
      VAR_4->jump_to = VAR_1;
      return VAR_4->pos = VAR_5;
    } else if (VAR_4->WS.mult + VAR_4->TS.mult > 0) {
      VAR_4->mult = VAR_4->WS.mult + VAR_4->TS.mult;
      return VAR_4->pos = VAR_5;
    }
    VAR_5 = FUNC_2 (&VAR_4->TS);
    VAR_6 = FUNC_4 (&VAR_4->WS);
  }
}
