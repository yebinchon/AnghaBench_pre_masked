
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int nr; TYPE_3__** list; } ;
struct write_commit_graph_context {int progress; scalar_t__ num_extra_edges; TYPE_2__ commits; scalar_t__ report_progress; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_6__ {int parents; TYPE_1__ object; } ;


 int FUNC_0 (TYPE_3__**,int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct write_commit_graph_context *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->report_progress)
  VAR_1->progress = FUNC_7(
     FUNC_1("Scanning merged commits"),
     VAR_1->commits.nr);

 FUNC_0(VAR_1->commits.list, VAR_1->commits.nr, VAR_0);

 VAR_1->num_extra_edges = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->commits.nr; VAR_2++) {
  FUNC_4(VAR_1->progress, VAR_2);

  if (VAR_2 && FUNC_6(&VAR_1->commits.list[VAR_2 - 1]->object.oid,
     &VAR_1->commits.list[VAR_2]->object.oid)) {
   FUNC_3(FUNC_1("unexpected duplicate commit id %s"),
       FUNC_5(&VAR_1->commits.list[VAR_2]->object.oid));
  } else {
   unsigned int VAR_3;

   VAR_3 = FUNC_2(VAR_1->commits.list[VAR_2]->parents);
   if (VAR_3 > 2)
    VAR_1->num_extra_edges += VAR_3 - 1;
  }
 }

 FUNC_8(&VAR_1->progress);
}
