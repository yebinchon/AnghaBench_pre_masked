
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_graph {int num_columns; int num_new_columns; int num_parents; int mapping_size; int* mapping; int commit_index; struct commit* commit; TYPE_1__* columns; int new_columns; } ;
struct commit_list {struct commit* item; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {struct commit* commit; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 struct commit_list* FUNC_1 (struct git_graph*) ;
 int FUNC_2 (struct git_graph*,int) ;
 int FUNC_3 (struct git_graph*) ;
 int FUNC_4 (struct git_graph*,struct commit*,int*) ;
 int FUNC_5 (struct git_graph*,int) ;
 struct commit_list* FUNC_6 (struct git_graph*,struct commit_list*) ;

__attribute__((used)) static void FUNC_7(struct git_graph *VAR_0)
{
 struct commit_list *VAR_1;
 int VAR_2;
 int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 FUNC_0(VAR_0->columns, VAR_0->new_columns);
 VAR_0->num_columns = VAR_0->num_new_columns;
 VAR_0->num_new_columns = 0;
 VAR_2 = VAR_0->num_columns + VAR_0->num_parents;
 FUNC_2(VAR_0, VAR_2);




 VAR_0->mapping_size = 2 * VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_0->mapping_size; VAR_4++)
  VAR_0->mapping[VAR_4] = -1;
 VAR_5 = 0;
 VAR_3 = 0;
 VAR_6 = 1;
 for (VAR_4 = 0; VAR_4 <= VAR_0->num_columns; VAR_4++) {
  struct commit *VAR_7;
  if (VAR_4 == VAR_0->num_columns) {
   if (VAR_5)
    break;
   VAR_6 = 0;
   VAR_7 = VAR_0->commit;
  } else {
   VAR_7 = VAR_0->columns[VAR_4].commit;
  }

  if (VAR_7 == VAR_0->commit) {
   int VAR_8 = VAR_3;
   VAR_5 = 1;
   VAR_0->commit_index = VAR_4;
   for (VAR_1 = FUNC_1(VAR_0);
        VAR_1;
        VAR_1 = FUNC_6(VAR_0, VAR_1)) {





    if (VAR_0->num_parents > 1 ||
        !VAR_6) {
     FUNC_3(VAR_0);
    }
    FUNC_4(VAR_0,
             VAR_1->item,
             &VAR_3);
   }






   if (VAR_3 == VAR_8)
    VAR_3 += 2;
  } else {
   FUNC_4(VAR_0, VAR_7,
            &VAR_3);
  }
 }




 while (VAR_0->mapping_size > 1 &&
        VAR_0->mapping[VAR_0->mapping_size - 1] < 0)
  VAR_0->mapping_size--;




 FUNC_5(VAR_0, VAR_6);
}
