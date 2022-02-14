
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int next_idx; size_t module; } ;
struct TYPE_7__ {size_t current; int dash; int expanded; TYPE_1__* module; } ;
struct TYPE_6__ {int scroll; int offset; } ;
typedef TYPE_2__ GScroll ;
typedef size_t GModule ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (GScroll * VAR_2, GModule VAR_3)
{
  int *VAR_4, *VAR_5;
  int VAR_6 = FUNC_1 ();


  if (VAR_2->current != VAR_3)
    FUNC_2 (VAR_2);

  VAR_4 = &VAR_2->module[VAR_3].scroll;
  VAR_5 = &VAR_2->module[VAR_3].offset;

  (*VAR_4) = VAR_1.next_idx;
  if (*VAR_4 >= VAR_6 && *VAR_4 >= *VAR_5 + VAR_6)
    (*VAR_5) = (*VAR_4) < VAR_6 - 1 ? 0 : (*VAR_4) - VAR_6 + 1;

  VAR_2->current = VAR_3;
  VAR_2->dash = FUNC_0 (VAR_3) * VAR_0;
  VAR_2->expanded = 1;
  VAR_1.module = VAR_3;
}
