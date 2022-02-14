
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int nr; struct commit** list; } ;
struct write_commit_graph_context {int progress; TYPE_1__ commits; scalar_t__ report_progress; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {scalar_t__ generation; struct commit_list* parents; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct commit_list**) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct write_commit_graph_context *VAR_3)
{
 int VAR_4;
 struct commit_list *VAR_5 = ((void*)0);

 if (VAR_3->report_progress)
  VAR_3->progress = FUNC_4(
     FUNC_0("Computing commit graph generation numbers"),
     VAR_3->commits.nr);
 for (VAR_4 = 0; VAR_4 < VAR_3->commits.nr; VAR_4++) {
  FUNC_2(VAR_3->progress, VAR_4 + 1);
  if (VAR_3->commits.list[VAR_4]->generation != VAR_0 &&
      VAR_3->commits.list[VAR_4]->generation != VAR_2)
   continue;

  FUNC_1(VAR_3->commits.list[VAR_4], &VAR_5);
  while (VAR_5) {
   struct commit *VAR_6 = VAR_5->item;
   struct commit_list *VAR_7;
   int VAR_8 = 1;
   uint32_t VAR_9 = 0;

   for (VAR_7 = VAR_6->parents; VAR_7; VAR_7 = VAR_7->next) {
    if (VAR_7->item->generation == VAR_0 ||
        VAR_7->item->generation == VAR_2) {
     VAR_8 = 0;
     FUNC_1(VAR_7->item, &VAR_5);
     break;
    } else if (VAR_7->item->generation > VAR_9) {
     VAR_9 = VAR_7->item->generation;
    }
   }

   if (VAR_8) {
    VAR_6->generation = VAR_9 + 1;
    FUNC_3(&VAR_5);

    if (VAR_6->generation > VAR_1)
     VAR_6->generation = VAR_1;
   }
  }
 }
 FUNC_5(&VAR_3->progress);
}
