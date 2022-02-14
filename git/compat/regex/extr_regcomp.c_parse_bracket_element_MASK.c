
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int reg_syntax_t ;
typedef int reg_errcode_t ;
struct TYPE_11__ {int c; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ opr; } ;
typedef TYPE_3__ re_token_t ;
typedef int re_string_t ;
typedef int re_dfa_t ;
struct TYPE_10__ {int ch; int wch; } ;
struct TYPE_13__ {TYPE_1__ opr; int type; } ;
typedef TYPE_4__ bracket_elem_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static reg_errcode_t
FUNC_7 (bracket_elem_t *VAR_9, re_string_t *VAR_10,
         re_token_t *VAR_11, int VAR_12, re_dfa_t *VAR_13,
         reg_syntax_t VAR_14, int VAR_15)
{
  FUNC_5 (VAR_10, VAR_12);
  if (VAR_11->type == VAR_4 || VAR_11->type == VAR_3
      || VAR_11->type == VAR_5)
    return FUNC_1 (VAR_9, VAR_10, VAR_11);
  if (FUNC_0 (VAR_11->type == VAR_1, 0) && !VAR_15)
    {


      re_token_t VAR_16;
      (void) FUNC_2 (&VAR_16, VAR_10, VAR_14);
      if (VAR_16 != VAR_2)


 return VAR_6;
    }
  VAR_9->type = VAR_8;
  VAR_9->opr.ch = VAR_11->opr.c;
  return VAR_7;
}
