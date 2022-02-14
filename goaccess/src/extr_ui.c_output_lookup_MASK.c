
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ module; } ;
typedef TYPE_1__ GOutput ;
typedef scalar_t__ GModule ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

GOutput *
FUNC_1 (GModule VAR_1)
{
  int VAR_2, VAR_3 = FUNC_0 (VAR_0);

  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    if (VAR_0[VAR_2].module == VAR_1)
      return &VAR_0[VAR_2];
  }
  return ((void*)0);
}
