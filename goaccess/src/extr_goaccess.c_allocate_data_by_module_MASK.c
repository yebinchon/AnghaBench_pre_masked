
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int mutex; } ;
struct TYPE_12__ {size_t current; scalar_t__ expanded; } ;
struct TYPE_11__ {TYPE_1__* module; int total_alloc; } ;
struct TYPE_10__ {int idx; int ht_size; } ;
struct TYPE_9__ {int alloc_data; scalar_t__ dash_size; scalar_t__ pos_y; scalar_t__ idx_data; int ht_size; int desc; int head; } ;
typedef size_t GModule ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,size_t,TYPE_4__*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (GModule VAR_6, int VAR_7)
{
  int VAR_8 = 0, VAR_9 = FUNC_0 ();

  VAR_2->module[VAR_6].head = FUNC_3 (VAR_6);
  VAR_2->module[VAR_6].desc = FUNC_2 (VAR_6);

  VAR_8 = VAR_5[VAR_6].idx;
  if (VAR_4.expanded && VAR_6 == VAR_4.current) {
    VAR_8 = VAR_8 > VAR_9 ? VAR_9 : VAR_5[VAR_6].idx;
  } else {
    VAR_8 = VAR_5[VAR_6].idx > VAR_7 ? VAR_7 : VAR_5[VAR_6].idx;
  }

  VAR_2->module[VAR_6].alloc_data = VAR_8;
  VAR_2->module[VAR_6].ht_size = VAR_5[VAR_6].ht_size;
  VAR_2->module[VAR_6].idx_data = 0;
  VAR_2->module[VAR_6].pos_y = 0;

  if (VAR_4.expanded && VAR_6 == VAR_4.current)
    VAR_2->module[VAR_6].dash_size = VAR_1;
  else
    VAR_2->module[VAR_6].dash_size = VAR_0;
  VAR_2->total_alloc += VAR_2->module[VAR_6].dash_size;

  FUNC_4 (&VAR_3.mutex);
  FUNC_1 (&VAR_5[VAR_6], VAR_2, VAR_6, &VAR_4);
  FUNC_5 (&VAR_3.mutex);
}
