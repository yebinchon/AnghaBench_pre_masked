
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ treeref_t ;
struct TYPE_4__ {scalar_t__ mult; scalar_t__ pos; } ;
struct TYPE_3__ {scalar_t__ mult; scalar_t__ pos; } ;
struct wordlist_tree_iterator {scalar_t__ mult; scalar_t__ pos; TYPE_2__ TS; TYPE_1__ WS; int (* jump_to ) (int ,scalar_t__) ;} ;
struct wordlist_iterator {scalar_t__ mult; scalar_t__ pos; int jump_to; TYPE_1__ WS; } ;
struct tree_iterator {scalar_t__ mult; scalar_t__ pos; int jump_to; TYPE_2__ TS; } ;
struct hash_word {scalar_t__ word_tree; } ;
typedef int iterator_t ;
typedef int hash_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct hash_word* FUNC_2 (int ,int ) ;
 unsigned char* FUNC_3 (int ,int*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (int) ;

iterator_t FUNC_8 (hash_t VAR_2) {
  struct hash_word *VAR_3 = FUNC_2 (VAR_2, 0);
  treeref_t VAR_4 = VAR_3 ? VAR_3->word_tree : 0;
  int VAR_5;
  unsigned char *VAR_6 = FUNC_3 (VAR_2, &VAR_5);
  FUNC_0 (VAR_4 || VAR_6);
  if (!VAR_4 && !VAR_6) {
    return FUNC_1 ();
  }
  if (!VAR_6) {
    struct tree_iterator *VAR_7 = FUNC_7 (sizeof (struct tree_iterator));
    FUNC_4 (&VAR_7->TS, VAR_4);
    FUNC_0 ((VAR_7->mult = VAR_7->TS.mult) > 0);
    VAR_7->pos = VAR_7->TS.pos;
    VAR_7->jump_to = VAR_0;
    return (iterator_t) VAR_7;
  }
  if (!VAR_4) {
    struct wordlist_iterator *VAR_8 = FUNC_7 (sizeof (struct wordlist_iterator));
    FUNC_5 (&VAR_8->WS, VAR_6, VAR_5);
    FUNC_0 ((VAR_8->mult = VAR_8->WS.mult) > 0);
    VAR_8->pos = VAR_8->WS.pos;
    VAR_8->jump_to = VAR_1;
    return (iterator_t) VAR_8;
  }
  struct wordlist_tree_iterator *VAR_9 = FUNC_7 (sizeof (struct wordlist_tree_iterator));
  FUNC_5 (&VAR_9->WS, VAR_6, VAR_5);
  FUNC_4 (&VAR_9->TS, VAR_4);
  VAR_9->jump_to = FUNC_6;
  if (VAR_9->TS.pos < VAR_9->WS.pos) {
    FUNC_0 ((VAR_9->mult = VAR_9->TS.mult) > 0);
    VAR_9->pos = VAR_9->TS.pos;
  } else if (VAR_9->TS.pos > VAR_9->WS.pos) {
    FUNC_0 ((VAR_9->mult = VAR_9->WS.mult) > 0);
    VAR_9->pos = VAR_9->WS.pos;
  } else if (VAR_9->TS.mult + VAR_9->WS.mult > 0) {
    VAR_9->mult = VAR_9->TS.mult + VAR_9->WS.mult;
    VAR_9->pos = VAR_9->TS.pos;
  } else {
    FUNC_0 (VAR_9->TS.mult + VAR_9->WS.mult == 0);
    FUNC_6 ((iterator_t) VAR_9, VAR_9->TS.pos + 1);
  }
  return (iterator_t) VAR_9;
}
