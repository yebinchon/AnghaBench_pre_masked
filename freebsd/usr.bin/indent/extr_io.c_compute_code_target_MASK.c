
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ind_size; int continuation_indent; scalar_t__ max_col; scalar_t__ lineup_to_parens_always; int lineup_to_parens; } ;
struct TYPE_3__ {int ind_level; int paren_level; scalar_t__ ind_stmt; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int
FUNC_1(void)
{
    int VAR_4 = VAR_0.ind_size * VAR_2.ind_level + 1;

    if (VAR_2.paren_level)
 if (!VAR_0.lineup_to_parens)
     VAR_4 += VAR_0.continuation_indent *
  (2 * VAR_0.continuation_indent == VAR_0.ind_size ? 1 : VAR_2.paren_level);
 else if (VAR_0.lineup_to_parens_always)
     VAR_4 = VAR_1;
 else {
     int VAR_5;
     int VAR_6 = VAR_1;

     if ((VAR_5 = FUNC_0(VAR_6, VAR_3) - VAR_0.max_col) > 0
      && FUNC_0(VAR_4, VAR_3) <= VAR_0.max_col) {
  VAR_6 -= VAR_5 + 1;
  if (VAR_6 > VAR_4)
      VAR_4 = VAR_6;
     }
     else
  VAR_4 = VAR_6;
 }
    else if (VAR_2.ind_stmt)
 VAR_4 += VAR_0.continuation_indent;
    return VAR_4;
}
