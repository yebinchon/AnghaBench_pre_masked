
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; scalar_t__ sub_items_size; scalar_t__ holder_size; int * items; } ;
typedef size_t GModule ;
typedef TYPE_1__ GHolder ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (GHolder ** VAR_0, GModule VAR_1)
{
  int VAR_2;

  if ((*VAR_0) == ((void*)0))
    return;

  for (VAR_2 = 0; VAR_2 < (*VAR_0)[VAR_1].idx; VAR_2++) {
    FUNC_1 ((*VAR_0)[VAR_1].items[VAR_2]);
  }
  FUNC_0 ((*VAR_0)[VAR_1].items);

  (*VAR_0)[VAR_1].holder_size = 0;
  (*VAR_0)[VAR_1].idx = 0;
  (*VAR_0)[VAR_1].sub_items_size = 0;
}
