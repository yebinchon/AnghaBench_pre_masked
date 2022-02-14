
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int num_parents; int commit_index; int num_columns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_1 (struct git_graph*,int ) ;
 int FUNC_2 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_3(struct git_graph *VAR_2, struct strbuf *VAR_3)
{




 FUNC_2(VAR_3, "...");
 FUNC_0(VAR_2, VAR_3, 3);

 if (VAR_2->num_parents >= 3 &&
     VAR_2->commit_index < (VAR_2->num_columns - 1))
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_1(VAR_2, VAR_0);
}
