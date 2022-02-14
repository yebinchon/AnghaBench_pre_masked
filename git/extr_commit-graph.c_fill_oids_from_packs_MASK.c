
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct write_commit_graph_context {size_t obj_dir; int progress; scalar_t__ progress_done; scalar_t__ report_progress; } ;
struct string_list {size_t nr; TYPE_1__* items; } ;
struct strbuf {int len; int buf; } ;
struct packed_git {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,size_t) ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 struct packed_git* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct packed_git*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct packed_git*,int ,struct write_commit_graph_context*,int ) ;
 int FUNC_6 (struct packed_git*) ;
 scalar_t__ FUNC_7 (struct packed_git*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct strbuf*,char*,size_t) ;
 int FUNC_11 (struct strbuf*,int ) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_14(struct write_commit_graph_context *VAR_3,
    struct string_list *VAR_4)
{
 uint32_t VAR_5;
 struct strbuf VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_1;
 int VAR_8;

 FUNC_10(&VAR_7, "%s/pack/", VAR_3->obj_dir);
 VAR_8 = VAR_7.len;
 if (VAR_3->report_progress) {
  FUNC_10(&VAR_6,
       FUNC_0("Finding commits for commit graph in %d pack",
          "Finding commits for commit graph in %d packs",
          VAR_4->nr),
       VAR_4->nr);
  VAR_3->progress = FUNC_8(VAR_6.buf, 0);
  VAR_3->progress_done = 0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->nr; VAR_5++) {
  struct packed_git *VAR_9;
  FUNC_13(&VAR_7, VAR_8);
  FUNC_11(&VAR_7, VAR_4->items[VAR_5].string);
  VAR_9 = FUNC_2(VAR_7.buf, VAR_7.len, 1);
  if (!VAR_9) {
   FUNC_4(FUNC_1("error adding pack %s"), VAR_7.buf);
   return -1;
  }
  if (FUNC_7(VAR_9)) {
   FUNC_4(FUNC_1("error opening index for %s"), VAR_7.buf);
   return -1;
  }
  FUNC_5(VAR_9, VAR_2, VAR_3,
     VAR_0);
  FUNC_3(VAR_9);
  FUNC_6(VAR_9);
 }

 FUNC_9(&VAR_3->progress);
 FUNC_12(&VAR_6);
 FUNC_12(&VAR_7);

 return 0;
}
