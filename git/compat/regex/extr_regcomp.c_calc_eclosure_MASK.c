
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ reg_errcode_t ;
typedef int re_node_set ;
struct TYPE_6__ {int nodes_len; TYPE_1__* eclosures; } ;
typedef TYPE_2__ re_dfa_t ;
struct TYPE_5__ {int nelem; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static reg_errcode_t
FUNC_4 (re_dfa_t *VAR_1)
{
  int VAR_2, VAR_3;



  VAR_3 = 0;

  for (VAR_2 = 0; ; ++VAR_2)
    {
      reg_errcode_t VAR_4;
      re_node_set VAR_5;
      if (VAR_2 == VAR_1->nodes_len)
 {
   if (!VAR_3)
     break;
   VAR_3 = 0;
   VAR_2 = 0;
 }






      if (VAR_1->eclosures[VAR_2].nelem != 0)
 continue;

      VAR_4 = FUNC_2 (&VAR_5, VAR_1, VAR_2, 1);
      if (FUNC_0 (VAR_4 != VAR_0, 0))
 return VAR_4;

      if (VAR_1->eclosures[VAR_2].nelem == 0)
 {
   VAR_3 = 1;
   FUNC_3 (&VAR_5);
 }
    }
  return VAR_0;
}
