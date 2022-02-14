
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int const num_parents; int num_new_columns; int num_columns; int const commit_index; int * new_columns; } ;


 int FUNC_0 (struct strbuf*,int *,char) ;

__attribute__((used)) static int FUNC_1(struct git_graph *VAR_0,
        struct strbuf *VAR_1)
{
 const int VAR_2 = 2;
 int VAR_3 = VAR_0->num_parents - VAR_2;
 int VAR_4 = (VAR_0->num_new_columns - VAR_0->num_columns);
 int VAR_5 = VAR_0->num_parents - VAR_4;




 int VAR_6 = VAR_0->commit_index + VAR_2
     - VAR_5;

 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(VAR_1, &VAR_0->new_columns[VAR_7+VAR_6], '-');
  FUNC_0(VAR_1, &VAR_0->new_columns[VAR_7+VAR_6],
        VAR_7 == VAR_3-1 ? '.' : '-');
 }
 return 2 * VAR_3;
}
