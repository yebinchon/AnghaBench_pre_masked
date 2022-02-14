
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_5 ;

struct tree *FUNC_3 (void) {
  FUNC_0 (VAR_5);
  if (VAR_4.lex.type == VAR_3 && !(VAR_4.lex.flags & 2)) {
    VAR_2->text = VAR_4.lex.ptr;
    VAR_2->len = VAR_4.lex.len;
    VAR_2->flags = VAR_4.lex.flags;
    FUNC_2 ();
    VAR_1;
  } else {
    FUNC_1 ("Can not parse combinator id");
    VAR_0;
  }
}
