
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_12__ {size_t module; int idx_data; } ;
struct TYPE_11__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_10__ {size_t current; TYPE_1__* module; scalar_t__ expanded; } ;
struct TYPE_9__ {int scroll; } ;
typedef TYPE_2__ GScroll ;
typedef size_t GModule ;
typedef TYPE_3__ GDashRender ;
typedef TYPE_4__ GDashModule ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__,int) ;

__attribute__((used)) static void
FUNC_2 (WINDOW * VAR_0, GDashModule * VAR_1, int *VAR_2, int VAR_3,
                  GScroll * VAR_4)
{
  GDashRender VAR_5;
  GModule VAR_6 = VAR_1->module;
  int VAR_7 = 0, VAR_8 = 0;
  int VAR_9, VAR_10;

  FUNC_0 (VAR_0, VAR_10, VAR_9);
  (void) VAR_10;

  if (VAR_4->expanded && VAR_6 == VAR_4->current)
    VAR_7 = 1;

  if (VAR_3 >= VAR_1->idx_data)
    goto out;

  VAR_8 = VAR_7 && VAR_3 == VAR_4->module[VAR_6].scroll ? 1 : 0;

  VAR_5.win = VAR_0;
  VAR_5.y = *VAR_2;
  VAR_5.w = VAR_9;
  VAR_5.idx = VAR_3;
  VAR_5.sel = VAR_8;

  FUNC_1 (VAR_1, VAR_5, VAR_7);

out:
  (*VAR_2)++;
}
