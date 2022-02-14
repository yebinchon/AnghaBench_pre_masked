
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct string_list_item {TYPE_4__* util; } ;
struct string_list {int dummy; } ;
struct rename {char dir_rename_original_type; char* dir_rename_original_dest; TYPE_4__* dst_entry; } ;
struct merge_options {int repo; } ;
struct diff_filepair {char status; TYPE_3__* two; } ;
struct TYPE_8__ {int processed; TYPE_2__* stages; } ;
struct TYPE_7__ {char* path; } ;
struct TYPE_6__ {int mode; int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char*,int *,int *) ;
 TYPE_4__* FUNC_2 (int ,char*,struct tree*,struct tree*,struct tree*,struct string_list*) ;
 int FUNC_3 (struct merge_options*,int,int ,char*) ;
 int FUNC_4 (struct merge_options*,int,char*,int) ;
 struct string_list_item* FUNC_5 (struct string_list*,char*) ;
 struct string_list_item* FUNC_6 (struct string_list*,char*) ;
 int FUNC_7 (struct merge_options*,char*) ;

__attribute__((used)) static void FUNC_8(struct merge_options *VAR_0,
       struct diff_filepair *VAR_1,
       char *VAR_2,
       struct rename *VAR_3,
       struct tree *VAR_4,
       struct tree *VAR_5,
       struct tree *VAR_6,
       struct tree *VAR_7,
       struct string_list *VAR_8)
{
 struct string_list_item *VAR_9;
 int VAR_10 = (VAR_4 == VAR_6 ? 2 : 3);
 int VAR_11;
 VAR_11 = !FUNC_7(VAR_0, VAR_1->two->path);
 if (!VAR_11)
  FUNC_3(VAR_0, 1, FUNC_0("Refusing to lose dirty file at %s"),
         VAR_1->two->path);
 FUNC_4(VAR_0, 1, VAR_1->two->path, !VAR_11);


 VAR_9 = FUNC_6(VAR_8, VAR_2);
 if (VAR_9) {
  VAR_3->dst_entry->processed = 1;




  VAR_3->dst_entry = VAR_9->util;
 } else {
  if (VAR_1->status == 'R')
   VAR_3->dst_entry->processed = 1;

  VAR_3->dst_entry = FUNC_2(VAR_0->repo, VAR_2,
        VAR_5, VAR_6, VAR_7,
        VAR_8);
  VAR_9 = FUNC_5(VAR_8, VAR_2);
  VAR_9->util = VAR_3->dst_entry;
 }
 FUNC_1(VAR_0->repo,
         &VAR_4->object.oid,
         VAR_1->two->path,
         &VAR_3->dst_entry->stages[VAR_10].oid,
         &VAR_3->dst_entry->stages[VAR_10].mode);
 VAR_3->dir_rename_original_type = VAR_1->status;
 VAR_3->dir_rename_original_dest = VAR_1->two->path;





 VAR_1->status = 'R';




 VAR_1->two->path = VAR_2;
}
