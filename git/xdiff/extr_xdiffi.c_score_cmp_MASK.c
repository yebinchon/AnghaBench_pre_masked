
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_score {scalar_t__ effective_indent; int penalty; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct split_score *VAR_1, struct split_score *VAR_2)
{

 int VAR_3 = ((VAR_1->effective_indent > VAR_2->effective_indent) -
      (VAR_1->effective_indent < VAR_2->effective_indent));

 return VAR_0 * VAR_3 + (VAR_1->penalty - VAR_2->penalty);
}
