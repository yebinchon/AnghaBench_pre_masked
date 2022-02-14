
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int holder_size; int ht_size; scalar_t__ sub_items_size; scalar_t__ idx; int items; int module; } ;
struct TYPE_12__ {int (* insert ) (int ,TYPE_3__*,int ,TYPE_2__ const*) ;} ;
struct TYPE_11__ {int size; int type; int * items; } ;
typedef int GSort ;
typedef TYPE_1__ GRawData ;
typedef TYPE_2__ GPanel ;
typedef int GModule ;
typedef TYPE_3__ GHolder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ,TYPE_2__ const*) ;

void
FUNC_7 (GRawData * VAR_0, GHolder * VAR_1, GModule VAR_2, GSort VAR_3)
{
  int VAR_4, VAR_5 = 0, VAR_6 = FUNC_1 ();
  const GPanel *VAR_7 = FUNC_3 (VAR_2);

  VAR_5 = VAR_0->size;
  VAR_1->holder_size = VAR_5 > VAR_6 ? VAR_6 : VAR_5;
  VAR_1->ht_size = VAR_5;
  VAR_1->idx = 0;
  VAR_1->module = VAR_2;
  VAR_1->sub_items_size = 0;
  VAR_1->items = FUNC_2 (VAR_1->holder_size);

  for (VAR_4 = 0; VAR_4 < VAR_1->holder_size; VAR_4++) {
    VAR_7->insert (VAR_0->items[VAR_4], VAR_1, VAR_0->type, VAR_7);
  }
  FUNC_4 (VAR_1->items, VAR_1->idx, VAR_3);
  if (VAR_1->sub_items_size)
    FUNC_5 (VAR_1, VAR_3);
  FUNC_0 (VAR_0);
}
