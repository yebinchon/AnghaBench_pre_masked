
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_line_tracker {scalar_t__ is_parent; scalar_t__ s_lno; } ;



__attribute__((used)) static int FUNC_0(struct blame_line_tracker *VAR_0,
         struct blame_line_tracker *VAR_1)
{
 return VAR_0->is_parent == VAR_1->is_parent &&
        VAR_0->s_lno + 1 == VAR_1->s_lno;
}
