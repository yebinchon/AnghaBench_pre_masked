
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ reg_errcode_t ;
struct TYPE_15__ {int nelem; } ;
typedef TYPE_3__ re_node_set ;
struct TYPE_16__ {TYPE_3__* eclosures; TYPE_2__* edests; TYPE_1__* nodes; } ;
typedef TYPE_4__ re_dfa_t ;
struct TYPE_14__ {int nelem; size_t* elems; } ;
struct TYPE_13__ {int type; scalar_t__ constraint; int duplicated; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int,int,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static reg_errcode_t
FUNC_7 (re_node_set *VAR_2, re_dfa_t *VAR_3, int VAR_4, int VAR_5)
{
  reg_errcode_t VAR_6;
  int VAR_7;
  re_node_set VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  VAR_6 = FUNC_3 (&VAR_8, VAR_3->edests[VAR_4].nelem + 1);
  if (FUNC_0 (VAR_6 != VAR_1, 0))
    return VAR_6;



  VAR_3->eclosures[VAR_4].nelem = -1;



  if (VAR_3->nodes[VAR_4].constraint
      && VAR_3->edests[VAR_4].nelem
      && !VAR_3->nodes[VAR_3->edests[VAR_4].elems[0]].duplicated)
    {
      VAR_6 = FUNC_2 (VAR_3, VAR_4, VAR_4, VAR_4,
        VAR_3->nodes[VAR_4].constraint);
      if (FUNC_0 (VAR_6 != VAR_1, 0))
 return VAR_6;
    }


  if (FUNC_1(VAR_3->nodes[VAR_4].type))
    for (VAR_7 = 0; VAR_7 < VAR_3->edests[VAR_4].nelem; ++VAR_7)
      {
 re_node_set VAR_11;
 int VAR_12 = VAR_3->edests[VAR_4].elems[VAR_7];


 if (VAR_3->eclosures[VAR_12].nelem == -1)
   {
     VAR_10 = 1;
     continue;
   }


 if (VAR_3->eclosures[VAR_12].nelem == 0)
   {
     VAR_6 = FUNC_7 (&VAR_11, VAR_3, VAR_12, 0);
     if (FUNC_0 (VAR_6 != VAR_1, 0))
       return VAR_6;
   }
 else
   VAR_11 = VAR_3->eclosures[VAR_12];

 VAR_6 = FUNC_6 (&VAR_8, &VAR_11);
 if (FUNC_0 (VAR_6 != VAR_1, 0))
   return VAR_6;


 if (VAR_3->eclosures[VAR_12].nelem == 0)
   {
     VAR_10 = 1;
     FUNC_4 (&VAR_11);
   }
      }


  VAR_9 = FUNC_5 (&VAR_8, VAR_4);
  if (FUNC_0 (VAR_9 < 0, 0))
    return VAR_0;
  if (VAR_10 && !VAR_5)
    VAR_3->eclosures[VAR_4].nelem = 0;
  else
    VAR_3->eclosures[VAR_4] = VAR_8;
  *VAR_2 = VAR_8;
  return VAR_1;
}
