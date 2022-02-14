
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
struct TYPE_3__ {int flowsets_count; int * v9_flowsets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(priv_p VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->flowsets_count; VAR_2++)
  FUNC_0(VAR_1->v9_flowsets[VAR_2], VAR_0);
}
