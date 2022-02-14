
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int default_column_color; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct git_graph *VAR_1)
{
 VAR_1->default_column_color = (VAR_1->default_column_color + 1) %
  VAR_0;
}
