
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ list_agents; } ;
struct TYPE_5__ {int * sub_list; } ;
typedef int GPercTotals ;
typedef int GJSON ;
typedef TYPE_1__ GHolderItem ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 (GJSON * VAR_1, GHolderItem * VAR_2, GPercTotals VAR_3,
                       int VAR_4, int VAR_5)
{
  (void) VAR_3;

  if (VAR_4 > 0 && VAR_2->sub_list != ((void*)0))
    FUNC_0 (VAR_1, VAR_2->sub_list, VAR_5);


  if (VAR_0.list_agents)
    FUNC_1 (VAR_1, VAR_2, VAR_5);
}
