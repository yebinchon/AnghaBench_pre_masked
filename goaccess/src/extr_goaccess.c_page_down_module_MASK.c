
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* module; } ;
struct TYPE_7__ {size_t current; int expanded; TYPE_1__* module; } ;
struct TYPE_6__ {int idx_data; } ;
struct TYPE_5__ {int scroll; int offset; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_2 = FUNC_0 ();
  int *VAR_3, *VAR_4;

  VAR_3 = &VAR_1.module[VAR_1.current].scroll;
  VAR_4 = &VAR_1.module[VAR_1.current].offset;

  if (!VAR_1.expanded)
    return;

  *VAR_3 += VAR_2;
  if (*VAR_3 >= VAR_0->module[VAR_1.current].idx_data - 1)
    *VAR_3 = VAR_0->module[VAR_1.current].idx_data - 1;
  if (*VAR_3 >= VAR_2 && *VAR_3 >= *VAR_4 + VAR_2)
    *VAR_4 += VAR_2;
  if (*VAR_4 + VAR_2 >= VAR_0->module[VAR_1.current].idx_data - 1)
    *VAR_4 = VAR_0->module[VAR_1.current].idx_data - VAR_2;
  if (*VAR_3 < VAR_2 - 1)
    *VAR_4 = 0;
}
