
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ timestamp_t ;
struct write_commit_graph_context {char* obj_dir; size_t num_commit_graphs_after; char** commit_graph_filenames_after; int split; TYPE_1__* split_opts; } ;
struct strbuf {char* buf; size_t len; } ;
struct stat {scalar_t__ st_mtime; } ;
struct dirent {char* d_name; } ;
struct TYPE_2__ {scalar_t__ expire_time; } ;
typedef int DIR ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,size_t) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(struct write_commit_graph_context *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 DIR *VAR_3;
 struct dirent *VAR_4;
 size_t VAR_5;
 timestamp_t VAR_6 = FUNC_10(((void*)0));

 if (VAR_1->split_opts && VAR_1->split_opts->expire_time)
  VAR_6 -= VAR_1->split_opts->expire_time;
 if (!VAR_1->split) {
  char *VAR_7 = FUNC_1(VAR_1->obj_dir);
  FUNC_11(VAR_7);
  FUNC_0(VAR_7);
  VAR_1->num_commit_graphs_after = 0;
 }

 FUNC_6(&VAR_2, VAR_1->obj_dir);
 FUNC_6(&VAR_2, "/info/commit-graphs");
 VAR_3 = FUNC_2(VAR_2.buf);

 if (!VAR_3)
  goto out;

 FUNC_5(&VAR_2, '/');
 VAR_5 = VAR_2.len;
 while ((VAR_4 = FUNC_3(VAR_3)) != ((void*)0)) {
  struct stat VAR_8;
  uint32_t VAR_9, VAR_10 = 0;

  FUNC_8(&VAR_2, VAR_5);
  FUNC_6(&VAR_2, VAR_4->d_name);

  FUNC_4(VAR_2.buf, &VAR_8);

  if (VAR_8.st_mtime > VAR_6)
   continue;
  if (VAR_2.len < 6 || FUNC_9(VAR_2.buf + VAR_2.len - 6, ".graph"))
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_1->num_commit_graphs_after; VAR_9++) {
   if (!FUNC_9(VAR_1->commit_graph_filenames_after[VAR_9],
        VAR_2.buf)) {
    VAR_10 = 1;
    break;
   }
  }

  if (!VAR_10)
   FUNC_11(VAR_2.buf);
 }

out:
 FUNC_7(&VAR_2);
}
