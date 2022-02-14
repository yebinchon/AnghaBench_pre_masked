
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int time_t ;
struct write_commit_graph_context {size_t num_commit_graphs_after; size_t num_commit_graphs_before; int * commit_graph_filenames_before; } ;
struct utimbuf {int modtime; int actime; } ;
struct stat {int st_atime; } ;


 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct utimbuf*) ;

__attribute__((used)) static void FUNC_3(struct write_commit_graph_context *VAR_0)
{
 uint32_t VAR_1;
 time_t VAR_2 = FUNC_1(((void*)0));

 for (VAR_1 = VAR_0->num_commit_graphs_after - 1; VAR_1 < VAR_0->num_commit_graphs_before; VAR_1++) {
  struct stat VAR_3;
  struct utimbuf VAR_4;

  FUNC_0(VAR_0->commit_graph_filenames_before[VAR_1], &VAR_3);

  VAR_4.actime = VAR_3.st_atime;
  VAR_4.modtime = VAR_2;
  FUNC_2(VAR_0->commit_graph_filenames_before[VAR_1], &VAR_4);
 }
}
