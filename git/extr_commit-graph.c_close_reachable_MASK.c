
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; int * list; } ;
struct write_commit_graph_context {void* progress; TYPE_1__ oids; int r; scalar_t__ report_progress; scalar_t__ split; } ;
struct TYPE_4__ {int flags; } ;
struct commit {scalar_t__ graph_pos; TYPE_2__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct write_commit_graph_context*,struct commit*) ;
 int FUNC_2 (void*,int) ;
 struct commit* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct commit*) ;
 int FUNC_5 (struct commit*) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (void**) ;

__attribute__((used)) static void FUNC_8(struct write_commit_graph_context *VAR_2)
{
 int VAR_3;
 struct commit *VAR_4;

 if (VAR_2->report_progress)
  VAR_2->progress = FUNC_6(
     FUNC_0("Loading known commits in commit graph"),
     VAR_2->oids.nr);
 for (VAR_3 = 0; VAR_3 < VAR_2->oids.nr; VAR_3++) {
  FUNC_2(VAR_2->progress, VAR_3 + 1);
  VAR_4 = FUNC_3(VAR_2->r, &VAR_2->oids.list[VAR_3]);
  if (VAR_4)
   VAR_4->object.flags |= VAR_1;
 }
 FUNC_7(&VAR_2->progress);






 if (VAR_2->report_progress)
  VAR_2->progress = FUNC_6(
     FUNC_0("Expanding reachable commits in commit graph"),
     0);
 for (VAR_3 = 0; VAR_3 < VAR_2->oids.nr; VAR_3++) {
  FUNC_2(VAR_2->progress, VAR_3 + 1);
  VAR_4 = FUNC_3(VAR_2->r, &VAR_2->oids.list[VAR_3]);

  if (!VAR_4)
   continue;
  if (VAR_2->split) {
   if (!FUNC_4(VAR_4) &&
       VAR_4->graph_pos == VAR_0)
    FUNC_1(VAR_2, VAR_4);
  } else if (!FUNC_5(VAR_4))
   FUNC_1(VAR_2, VAR_4);
 }
 FUNC_7(&VAR_2->progress);

 if (VAR_2->report_progress)
  VAR_2->progress = FUNC_6(
     FUNC_0("Clearing commit marks in commit graph"),
     VAR_2->oids.nr);
 for (VAR_3 = 0; VAR_3 < VAR_2->oids.nr; VAR_3++) {
  FUNC_2(VAR_2->progress, VAR_3 + 1);
  VAR_4 = FUNC_3(VAR_2->r, &VAR_2->oids.list[VAR_3]);

  if (VAR_4)
   VAR_4->object.flags &= ~VAR_1;
 }
 FUNC_7(&VAR_2->progress);
}
