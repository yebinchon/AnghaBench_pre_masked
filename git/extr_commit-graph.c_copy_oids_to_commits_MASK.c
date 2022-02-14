
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int nr; TYPE_3__** list; int alloc; } ;
struct TYPE_6__ {int nr; int * list; } ;
struct write_commit_graph_context {int progress; TYPE_2__ commits; scalar_t__ num_extra_edges; scalar_t__ split; TYPE_1__ oids; int r; scalar_t__ report_progress; } ;
struct TYPE_8__ {scalar_t__ graph_pos; int parents; } ;


 int FUNC_0 (TYPE_3__**,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct write_commit_graph_context *VAR_1)
{
 uint32_t VAR_2;

 VAR_1->num_extra_edges = 0;
 if (VAR_1->report_progress)
  VAR_1->progress = FUNC_7(
   FUNC_1("Finding extra edges in commit graph"),
   VAR_1->oids.nr);
 for (VAR_2 = 0; VAR_2 < VAR_1->oids.nr; VAR_2++) {
  unsigned int VAR_3;

  FUNC_3(VAR_1->progress, VAR_2 + 1);
  if (VAR_2 > 0 && FUNC_5(&VAR_1->oids.list[VAR_2 - 1], &VAR_1->oids.list[VAR_2]))
   continue;

  FUNC_0(VAR_1->commits.list, VAR_1->commits.nr + 1, VAR_1->commits.alloc);
  VAR_1->commits.list[VAR_1->commits.nr] = FUNC_4(VAR_1->r, &VAR_1->oids.list[VAR_2]);

  if (VAR_1->split &&
      VAR_1->commits.list[VAR_1->commits.nr]->graph_pos != VAR_0)
   continue;

  FUNC_6(VAR_1->commits.list[VAR_1->commits.nr]);

  VAR_3 = FUNC_2(VAR_1->commits.list[VAR_1->commits.nr]->parents);
  if (VAR_3 > 2)
   VAR_1->num_extra_edges += VAR_3 - 1;

  VAR_1->commits.nr++;
 }
 FUNC_8(&VAR_1->progress);
}
