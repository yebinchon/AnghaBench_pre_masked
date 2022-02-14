
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int num_new_columns; int * new_columns; int commit; } ;


 int FUNC_0 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int *,char) ;

__attribute__((used)) static void FUNC_3(struct git_graph *VAR_0,
          struct strbuf *VAR_1)
{
 int VAR_2;
 if (!VAR_0->commit)
  return;




 for (VAR_2 = 0; VAR_2 < VAR_0->num_new_columns; VAR_2++) {
  FUNC_2(VAR_1, &VAR_0->new_columns[VAR_2], '|');
  FUNC_1(VAR_1, ' ');
 }

 FUNC_0(VAR_0, VAR_1, VAR_0->num_new_columns * 2);
}
