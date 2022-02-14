
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int num_columns; int num_parents; struct commit* commit; struct commit_list* columns; } ;
struct commit_list {int item; struct commit* commit; } ;
struct commit {int dummy; } ;
struct column {int item; struct commit* commit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit_list*) ;
 struct commit_list* FUNC_1 (struct git_graph*,int ) ;
 struct commit_list* FUNC_2 (struct git_graph*) ;
 scalar_t__ FUNC_3 (struct git_graph*) ;
 int FUNC_4 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_5 (struct git_graph*,int ) ;
 struct commit_list* FUNC_6 (struct git_graph*,struct commit_list*) ;
 int FUNC_7 (struct strbuf*,char) ;
 int FUNC_8 (struct strbuf*,struct commit_list*,char) ;

__attribute__((used)) static void FUNC_9(struct git_graph *VAR_2, struct strbuf *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5, VAR_6, VAR_7;




 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 <= VAR_2->num_columns; VAR_5++) {
  struct column *VAR_8 = &VAR_2->columns[VAR_5];
  struct commit *VAR_9;
  if (VAR_5 == VAR_2->num_columns) {
   if (VAR_4)
    break;
   VAR_9 = VAR_2->commit;
  } else {
   VAR_9 = VAR_8->commit;
  }

  if (VAR_9 == VAR_2->commit) {






   struct commit_list *VAR_10 = ((void*)0);
   struct column *VAR_11;
   VAR_4 = 1;
   VAR_10 = FUNC_2(VAR_2);
   FUNC_0(VAR_10);
   VAR_11 = FUNC_1(VAR_2, VAR_10->item);
   FUNC_0(VAR_11);

   FUNC_8(VAR_3, VAR_11, '|');
   VAR_7++;
   for (VAR_6 = 0; VAR_6 < VAR_2->num_parents - 1; VAR_6++) {
    VAR_10 = FUNC_6(VAR_2, VAR_10);
    FUNC_0(VAR_10);
    VAR_11 = FUNC_1(VAR_2, VAR_10->item);
    FUNC_0(VAR_11);
    FUNC_8(VAR_3, VAR_11, '\\');
    FUNC_7(VAR_3, ' ');
   }
   VAR_7 += VAR_6 * 2;
  } else if (VAR_4) {
   FUNC_8(VAR_3, VAR_8, '\\');
   FUNC_7(VAR_3, ' ');
   VAR_7 += 2;
  } else {
   FUNC_8(VAR_3, VAR_8, '|');
   FUNC_7(VAR_3, ' ');
   VAR_7 += 2;
  }
 }

 FUNC_4(VAR_2, VAR_3, VAR_7);




 if (FUNC_3(VAR_2))
  FUNC_5(VAR_2, VAR_1);
 else
  FUNC_5(VAR_2, VAR_0);
}
