
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int re_nsub; scalar_t__ buffer; } ;
typedef TYPE_3__ regex_t ;
typedef int reg_syntax_t ;
typedef scalar_t__ reg_errcode_t ;
struct TYPE_20__ {scalar_t__ type; } ;
typedef TYPE_4__ re_token_t ;
typedef int re_string_t ;
struct TYPE_21__ {int completed_bkref_map; } ;
typedef TYPE_5__ re_dfa_t ;
struct TYPE_17__ {size_t idx; } ;
struct TYPE_18__ {TYPE_1__ opr; } ;
struct TYPE_22__ {TYPE_2__ token; } ;
typedef TYPE_6__ bin_tree_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_1 (TYPE_5__*,TYPE_6__*,int *,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 TYPE_6__* FUNC_3 (int *,TYPE_3__*,TYPE_4__*,int,int,scalar_t__*) ;

__attribute__((used)) static bin_tree_t *
FUNC_4 (re_string_t *VAR_6, regex_t *VAR_7, re_token_t *VAR_8,
        reg_syntax_t VAR_9, int VAR_10, reg_errcode_t *VAR_11)
{
  re_dfa_t *VAR_12 = (re_dfa_t *) VAR_7->buffer;
  bin_tree_t *VAR_13;
  size_t VAR_14;
  VAR_14 = VAR_7->re_nsub++;

  FUNC_2 (VAR_8, VAR_6, VAR_9 | VAR_4);


  if (VAR_8->type == VAR_0)
    VAR_13 = ((void*)0);
  else
    {
      VAR_13 = FUNC_3 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
      if (FUNC_0 (*VAR_11 == VAR_3 && VAR_8->type != VAR_0, 0))
 *VAR_11 = VAR_1;
      if (FUNC_0 (*VAR_11 != VAR_3, 0))
 return ((void*)0);
    }

  if (VAR_14 <= '9' - '1')
    VAR_12->completed_bkref_map |= 1 << VAR_14;

  VAR_13 = FUNC_1 (VAR_12, VAR_13, ((void*)0), VAR_5);
  if (FUNC_0 (VAR_13 == ((void*)0), 0))
    {
      *VAR_11 = VAR_2;
      return ((void*)0);
    }
  VAR_13->token.opr.idx = VAR_14;
  return VAR_13;
}
