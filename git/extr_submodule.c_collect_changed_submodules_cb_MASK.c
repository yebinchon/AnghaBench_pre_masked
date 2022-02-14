
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submodule {char* name; } ;
struct string_list {int dummy; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {TYPE_1__* two; } ;
struct collect_changed_submodules_cb_data {int repo; struct object_id* commit_oid; struct string_list* changed; } ;
struct TYPE_2__ {int oid; int path; int mode; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct oid_array*,int *) ;
 int FUNC_3 (struct object_id const*) ;
 struct oid_array* FUNC_4 (struct string_list*,char const*) ;
 struct submodule* FUNC_5 (int ,struct object_id const*,char const*) ;
 struct submodule* FUNC_6 (int ,struct object_id const*,int ) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct diff_queue_struct *VAR_0,
       struct diff_options *VAR_1,
       void *VAR_2)
{
 struct collect_changed_submodules_cb_data *VAR_3 = VAR_2;
 struct string_list *VAR_4 = VAR_3->changed;
 const struct object_id *VAR_5 = VAR_3->commit_oid;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->nr; VAR_6++) {
  struct diff_filepair *VAR_7 = VAR_0->queue[VAR_6];
  struct oid_array *VAR_8;
  const struct submodule *VAR_9;
  const char *VAR_10;

  if (!FUNC_0(VAR_7->two->mode))
   continue;

  VAR_9 = FUNC_6(VAR_3->repo,
      VAR_5, VAR_7->two->path);
  if (VAR_9)
   VAR_10 = VAR_9->name;
  else {
   VAR_10 = FUNC_1(VAR_7->two->path);

   if (VAR_10)
    VAR_9 = FUNC_5(VAR_3->repo,
        VAR_5, VAR_10);
   if (VAR_9) {
    FUNC_7("Submodule in commit %s at path: "
     "'%s' collides with a submodule named "
     "the same. Skipping it.",
     FUNC_3(VAR_5), VAR_7->two->path);
    VAR_10 = ((void*)0);
   }
  }

  if (!VAR_10)
   continue;

  VAR_8 = FUNC_4(VAR_4, VAR_10);
  FUNC_2(VAR_8, &VAR_7->two->oid);
 }
}
