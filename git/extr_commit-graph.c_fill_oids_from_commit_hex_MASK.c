
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int nr; int * list; int alloc; } ;
struct write_commit_graph_context {int progress; scalar_t__ check_oids; TYPE_2__ oids; int r; scalar_t__ report_progress; } ;
struct string_list {int nr; TYPE_3__* items; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_6__ {int string; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct strbuf VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 struct commit* FUNC_5 (int ,struct object_id*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,struct object_id*,char const**) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct strbuf*,int ,int) ;
 int FUNC_11 (struct strbuf*) ;

__attribute__((used)) static int FUNC_12(struct write_commit_graph_context *VAR_1,
         struct string_list *VAR_2)
{
 uint32_t VAR_3;
 struct strbuf VAR_4 = VAR_0;

 if (VAR_1->report_progress) {
  FUNC_10(&VAR_4,
       FUNC_1("Finding commits for commit graph from %d ref",
          "Finding commits for commit graph from %d refs",
          VAR_2->nr),
       VAR_2->nr);
  VAR_1->progress = FUNC_8(
     VAR_4.buf,
     VAR_2->nr);
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  const char *VAR_5;
  struct object_id VAR_6;
  struct commit *VAR_7;

  FUNC_3(VAR_1->progress, VAR_3 + 1);
  if (!FUNC_7(VAR_2->items[VAR_3].string, &VAR_6, &VAR_5) &&
      (VAR_7 = FUNC_5(VAR_1->r, &VAR_6, 1))) {
   FUNC_0(VAR_1->oids.list, VAR_1->oids.nr + 1, VAR_1->oids.alloc);
   FUNC_6(&VAR_1->oids.list[VAR_1->oids.nr], &(VAR_7->object.oid));
   VAR_1->oids.nr++;
  } else if (VAR_1->check_oids) {
   FUNC_4(FUNC_2("invalid commit object id: %s"),
       VAR_2->items[VAR_3].string);
   return -1;
  }
 }
 FUNC_9(&VAR_1->progress);
 FUNC_11(&VAR_4);

 return 0;
}
