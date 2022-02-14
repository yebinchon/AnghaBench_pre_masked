
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int column_capacity; int new_mapping; int mapping; int new_columns; int columns; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct git_graph *VAR_0, int VAR_1)
{
 if (VAR_0->column_capacity >= VAR_1)
  return;

 do {
  VAR_0->column_capacity *= 2;
 } while (VAR_0->column_capacity < VAR_1);

 FUNC_0(VAR_0->columns, VAR_0->column_capacity);
 FUNC_0(VAR_0->new_columns, VAR_0->column_capacity);
 FUNC_0(VAR_0->mapping, VAR_0->column_capacity * 2);
 FUNC_0(VAR_0->new_mapping, VAR_0->column_capacity * 2);
}
