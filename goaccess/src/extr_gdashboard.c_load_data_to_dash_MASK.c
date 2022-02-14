
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_18__ {TYPE_1__* module; } ;
struct TYPE_17__ {TYPE_10__* items; scalar_t__ sub_items_size; int holder_size; } ;
struct TYPE_16__ {size_t current; scalar_t__ expanded; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_14__ {int alloc_data; int meta; int holder_size; int data; } ;
struct TYPE_13__ {TYPE_2__* metrics; } ;
typedef TYPE_3__ GScroll ;
typedef size_t GModule ;
typedef TYPE_4__ GHolder ;
typedef int GDashData ;
typedef TYPE_5__ GDash ;


 int FUNC_0 (TYPE_5__**,TYPE_10__,size_t) ;
 int FUNC_1 (TYPE_5__**,TYPE_10__,size_t,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;

void
FUNC_4 (GHolder * VAR_0, GDash * VAR_1, GModule VAR_2, GScroll * VAR_3)
{
  int VAR_4 = 0;
  int VAR_5, VAR_6;

  VAR_4 = VAR_1->module[VAR_2].alloc_data;
  if (VAR_3->expanded && VAR_2 == VAR_3->current)
    VAR_4 += VAR_0->sub_items_size;

  VAR_1->module[VAR_2].alloc_data = VAR_4;
  VAR_1->module[VAR_2].data = FUNC_3 (VAR_4);
  VAR_1->module[VAR_2].holder_size = VAR_0->holder_size;
  FUNC_2 (&VAR_1->module[VAR_2].meta, 0, sizeof (GDashData));

  for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4; VAR_5++) {
    if (VAR_0->items[VAR_6].metrics->data == ((void*)0))
      continue;

    FUNC_0 (&VAR_1, VAR_0->items[VAR_6], VAR_2);
    if (VAR_3->expanded && VAR_2 == VAR_3->current && VAR_0->sub_items_size)
      FUNC_1 (&VAR_1, VAR_0->items[VAR_6], VAR_2, &VAR_5);
    VAR_6++;
  }
}
