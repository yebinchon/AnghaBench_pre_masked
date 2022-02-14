
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_commit_graph_context {scalar_t__ approx_nr_objects; scalar_t__ progress_done; int progress; scalar_t__ report_progress; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,struct write_commit_graph_context*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct write_commit_graph_context *VAR_2)
{
 if (VAR_2->report_progress)
  VAR_2->progress = FUNC_3(
   FUNC_0("Finding commits for commit graph among packed objects"),
   VAR_2->approx_nr_objects);
 FUNC_2(VAR_1, VAR_2,
          VAR_0);
 if (VAR_2->progress_done < VAR_2->approx_nr_objects)
  FUNC_1(VAR_2->progress, VAR_2->approx_nr_objects);
 FUNC_4(&VAR_2->progress);
}
