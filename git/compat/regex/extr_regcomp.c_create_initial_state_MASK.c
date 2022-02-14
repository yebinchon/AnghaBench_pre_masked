
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ reg_errcode_t ;
typedef scalar_t__ re_token_type_t ;
struct TYPE_18__ {scalar_t__ idx; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_3__ opr; } ;
typedef TYPE_6__ re_token_t ;
struct TYPE_22__ {int nelem; int* elems; } ;
typedef TYPE_7__ re_node_set ;
struct TYPE_23__ {int init_node; scalar_t__ nbackref; TYPE_5__* init_state; TYPE_5__* init_state_begbuf; TYPE_5__* init_state_nl; TYPE_5__* init_state_word; scalar_t__ eclosures; TYPE_4__* edests; TYPE_6__* nodes; TYPE_2__* str_tree; } ;
typedef TYPE_8__ re_dfa_t ;
struct TYPE_20__ {scalar_t__ has_constraint; } ;
struct TYPE_19__ {int* elems; } ;
struct TYPE_17__ {TYPE_1__* first; } ;
struct TYPE_16__ {int node_idx; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (scalar_t__*,TYPE_8__*,TYPE_7__*,int) ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static reg_errcode_t
FUNC_6 (re_dfa_t *VAR_6)
{
  int VAR_7, VAR_8;
  reg_errcode_t VAR_9;
  re_node_set VAR_10;



  VAR_7 = VAR_6->str_tree->first->node_idx;
  VAR_6->init_node = VAR_7;
  VAR_9 = FUNC_4 (&VAR_10, VAR_6->eclosures + VAR_7);
  if (FUNC_0 (VAR_9 != VAR_5, 0))
    return VAR_9;





  if (VAR_6->nbackref > 0)
    for (VAR_8 = 0; VAR_8 < VAR_10.nelem; ++VAR_8)
      {
 int VAR_11 = VAR_10.elems[VAR_8];
 re_token_type_t VAR_12 = VAR_6->nodes[VAR_11].type;

 int VAR_13;
 if (VAR_12 != VAR_3)
   continue;
 for (VAR_13 = 0; VAR_13 < VAR_10.nelem; ++VAR_13)
   {
     re_token_t *VAR_14;
     VAR_14 = VAR_6->nodes + VAR_10.elems[VAR_13];
     if (VAR_14->type == VAR_4
  && VAR_14->opr.idx == VAR_6->nodes[VAR_11].opr.idx)
       break;
   }
 if (VAR_13 == VAR_10.nelem)
   continue;

 if (VAR_12 == VAR_3)
   {
     int VAR_15 = VAR_6->edests[VAR_11].elems[0];
     if (!FUNC_2 (&VAR_10, VAR_15))
       {
  reg_errcode_t VAR_16 = FUNC_5 (&VAR_10,
             VAR_6->eclosures
             + VAR_15);
  if (VAR_16 != VAR_5)
    return VAR_16;
  VAR_8 = 0;
       }
   }
      }


  VAR_6->init_state = FUNC_1 (&VAR_9, VAR_6, &VAR_10, 0);

  if (FUNC_0 (VAR_6->init_state == ((void*)0), 0))
    return VAR_9;
  if (VAR_6->init_state->has_constraint)
    {
      VAR_6->init_state_word = FUNC_1 (&VAR_9, VAR_6, &VAR_10,
             VAR_2);
      VAR_6->init_state_nl = FUNC_1 (&VAR_9, VAR_6, &VAR_10,
           VAR_1);
      VAR_6->init_state_begbuf = FUNC_1 (&VAR_9, VAR_6,
        &VAR_10,
        VAR_1
        | VAR_0);
      if (FUNC_0 (VAR_6->init_state_word == ((void*)0) || VAR_6->init_state_nl == ((void*)0)
       || VAR_6->init_state_begbuf == ((void*)0), 0))
 return VAR_9;
    }
  else
    VAR_6->init_state_word = VAR_6->init_state_nl
      = VAR_6->init_state_begbuf = VAR_6->init_state;

  FUNC_3 (&VAR_10);
  return VAR_5;
}
