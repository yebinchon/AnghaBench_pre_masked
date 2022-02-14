
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int nr; int * list; } ;
struct write_commit_graph_context {int progress; TYPE_1__ oids; int r; scalar_t__ split; scalar_t__ report_progress; } ;
struct commit {scalar_t__ graph_pos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 struct commit* FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static uint32_t FUNC_7(struct write_commit_graph_context *VAR_2)
{
 uint32_t VAR_3, VAR_4 = 1;

 if (VAR_2->report_progress)
  VAR_2->progress = FUNC_5(
   FUNC_1("Counting distinct commits in commit graph"),
   VAR_2->oids.nr);
 FUNC_2(VAR_2->progress, 0);
 FUNC_0(VAR_2->oids.list, VAR_2->oids.nr, VAR_1);

 for (VAR_3 = 1; VAR_3 < VAR_2->oids.nr; VAR_3++) {
  FUNC_2(VAR_2->progress, VAR_3 + 1);
  if (!FUNC_4(&VAR_2->oids.list[VAR_3 - 1], &VAR_2->oids.list[VAR_3])) {
   if (VAR_2->split) {
    struct commit *VAR_5 = FUNC_3(VAR_2->r, &VAR_2->oids.list[VAR_3]);

    if (!VAR_5 || VAR_5->graph_pos != VAR_0)
     continue;
   }

   VAR_4++;
  }
 }
 FUNC_6(&VAR_2->progress);

 return VAR_4;
}
