
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int dummy; } ;
struct parse {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ lex; } ;


 int FUNC_0 (struct parse*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct parse) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 () ;
 struct tree* FUNC_3 () ;

struct tree *FUNC_4 (struct parse *VAR_3) {
  FUNC_0 (VAR_3);
  FUNC_1 (*VAR_3);
  if (VAR_2.lex.type == VAR_1) {
    FUNC_2 ();
  }
  if (VAR_2.lex.type == VAR_0) {
    return 0;
  }
  return FUNC_3 ();
}
