
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ line_pos; } ;
typedef TYPE_1__ pot_orig_line_entry_t ;



int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const pot_orig_line_entry_t *VAR_2 = (const pot_orig_line_entry_t *) VAR_0;
  const pot_orig_line_entry_t *VAR_3 = (const pot_orig_line_entry_t *) VAR_1;

  return VAR_2->line_pos > VAR_3->line_pos;
}
