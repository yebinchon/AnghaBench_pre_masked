
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int num_columns; int num_parents; scalar_t__ prev_state; int prev_commit_index; struct commit* commit; struct column* columns; } ;
struct commit {int dummy; } ;
struct column {struct commit* commit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct git_graph*,struct strbuf*) ;
 scalar_t__ FUNC_1 (struct git_graph*) ;
 int FUNC_2 (struct git_graph*,struct strbuf*) ;
 int FUNC_3 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_4 (struct git_graph*,scalar_t__) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,struct column*,char) ;

__attribute__((used)) static void FUNC_7(struct git_graph *VAR_3, struct strbuf *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7;
 VAR_5 = 0;
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 <= VAR_3->num_columns; VAR_6++) {
  struct column *VAR_8 = &VAR_3->columns[VAR_6];
  struct commit *VAR_9;
  if (VAR_6 == VAR_3->num_columns) {
   if (VAR_5)
    break;
   VAR_9 = VAR_3->commit;
  } else {
   VAR_9 = VAR_3->columns[VAR_6].commit;
  }

  if (VAR_9 == VAR_3->commit) {
   VAR_5 = 1;
   FUNC_2(VAR_3, VAR_4);
   VAR_7++;

   if (VAR_3->num_parents > 2)
    VAR_7 += FUNC_0(VAR_3,
           VAR_4);
  } else if (VAR_5 && (VAR_3->num_parents > 2)) {
   FUNC_6(VAR_4, VAR_8, '\\');
   VAR_7++;
  } else if (VAR_5 && (VAR_3->num_parents == 2)) {
   if (VAR_3->prev_state == VAR_2 &&
       VAR_3->prev_commit_index < VAR_6)
    FUNC_6(VAR_4, VAR_8, '\\');
   else
    FUNC_6(VAR_4, VAR_8, '|');
   VAR_7++;
  } else {
   FUNC_6(VAR_4, VAR_8, '|');
   VAR_7++;
  }
  FUNC_5(VAR_4, ' ');
  VAR_7++;
 }

 FUNC_3(VAR_3, VAR_4, VAR_7);




 if (VAR_3->num_parents > 1)
  FUNC_4(VAR_3, VAR_2);
 else if (FUNC_1(VAR_3))
  FUNC_4(VAR_3, VAR_1);
 else
  FUNC_4(VAR_3, VAR_0);
}
