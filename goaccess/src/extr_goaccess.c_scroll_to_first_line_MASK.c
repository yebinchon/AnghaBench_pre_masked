
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t current; TYPE_1__* module; scalar_t__ dash; int expanded; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ scroll; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  if (!VAR_0.expanded)
    VAR_0.dash = 0;
  else {
    VAR_0.module[VAR_0.current].scroll = 0;
    VAR_0.module[VAR_0.current].offset = 0;
  }
}
