
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* module; scalar_t__ total_alloc; } ;
struct TYPE_7__ {size_t current; TYPE_2__* module; scalar_t__ dash; int expanded; } ;
struct TYPE_6__ {int scroll; int offset; } ;
struct TYPE_5__ {int idx_data; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_3 = FUNC_0 ();
  int VAR_4 = 0, VAR_5 = 0;

  if (!VAR_1.expanded)
    VAR_1.dash = VAR_0->total_alloc - VAR_2;
  else {
    VAR_4 = VAR_0->module[VAR_1.current].idx_data - 1;
    if (VAR_4 >= VAR_3 && VAR_4 >= VAR_5 + VAR_3)
      VAR_5 = VAR_4 < VAR_3 - 1 ? 0 : VAR_4 - VAR_3 + 1;
    VAR_1.module[VAR_1.current].scroll = VAR_4;
    VAR_1.module[VAR_1.current].offset = VAR_5;
  }
}
