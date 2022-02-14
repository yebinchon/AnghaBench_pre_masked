
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_12__ {TYPE_2__* nodes; } ;
typedef TYPE_4__ re_dfa_t ;
struct TYPE_11__ {int ctx_type; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_3__ opr; } ;
struct TYPE_13__ {int node_idx; TYPE_7__ token; struct TYPE_13__* first; TYPE_1__* left; } ;
typedef TYPE_5__ bin_tree_t ;
struct TYPE_10__ {int constraint; } ;
struct TYPE_9__ {int node_idx; TYPE_5__* first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_7__) ;

__attribute__((used)) static reg_errcode_t
FUNC_2 (void *VAR_4, bin_tree_t *VAR_5)
{
  re_dfa_t *VAR_6 = (re_dfa_t *) VAR_4;
  if (VAR_5->token.type == VAR_1)
    {
      VAR_5->first = VAR_5->left->first;
      VAR_5->node_idx = VAR_5->left->node_idx;
    }
  else
    {
      VAR_5->first = VAR_5;
      VAR_5->node_idx = FUNC_1 (VAR_6, VAR_5->token);
      if (FUNC_0 (VAR_5->node_idx == -1, 0))
 return VAR_2;
      if (VAR_5->token.type == VAR_0)
 VAR_6->nodes[VAR_5->node_idx].constraint = VAR_5->token.opr.ctx_type;
    }
  return VAR_3;
}
