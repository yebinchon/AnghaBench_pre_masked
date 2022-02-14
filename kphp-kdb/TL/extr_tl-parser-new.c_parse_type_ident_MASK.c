
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tree {int dummy; } ;
struct TYPE_6__ {int flags; int len; int text; } ;
struct TYPE_4__ {scalar_t__ type; int flags; int len; int ptr; } ;
struct TYPE_5__ {TYPE_1__ lex; } ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_6 ;

struct tree *FUNC_4 (void) {
  FUNC_1 (VAR_6);
  if (VAR_5.lex.type == VAR_4 && !(VAR_5.lex.flags & 2)) {
    VAR_2->text = VAR_5.lex.ptr;
    VAR_2->len = VAR_5.lex.len;
    VAR_2->flags = VAR_5.lex.flags;
    FUNC_3 ();
    VAR_1;
  } else if (VAR_5.lex.type == VAR_3 && !(VAR_5.lex.flags & 2)) {
    VAR_2->text = VAR_5.lex.ptr;
    VAR_2->len = VAR_5.lex.len;
    VAR_2->flags = VAR_5.lex.flags;
    FUNC_3 ();
    VAR_1;
  } else if (FUNC_0 ('#')) {
    VAR_2->text = VAR_5.lex.ptr;
    VAR_2->len = VAR_5.lex.len;
    VAR_2->flags = VAR_5.lex.flags;
    FUNC_3 ();
    VAR_1;
  } else {
    FUNC_2 ("Can not parse type ident");
    VAR_0;
  }
}
