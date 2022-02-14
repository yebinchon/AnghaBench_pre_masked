
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submodule_parallel_fetch {int result; int oid_fetch_tasks_nr; struct fetch_task** oid_fetch_tasks; int oid_fetch_tasks_alloc; int changed_submodule_names; } ;
struct string_list_item {struct oid_array* util; } ;
struct strbuf {int dummy; } ;
struct oid_array {scalar_t__ nr; } ;
struct fetch_task {struct oid_array* commits; int repo; TYPE_1__* sub; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct fetch_task**,int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct fetch_task*) ;
 int FUNC_3 (struct oid_array*,int ,int ) ;
 struct string_list_item* FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct strbuf *VAR_2,
   void *VAR_3, void *VAR_4)
{
 struct submodule_parallel_fetch *VAR_5 = VAR_3;
 struct fetch_task *VAR_6 = VAR_4;

 struct string_list_item *VAR_7;
 struct oid_array *VAR_8;

 if (VAR_1)







  VAR_5->result = 1;

 if (!VAR_6 || !VAR_6->sub)
  FUNC_1("callback cookie bogus");


 if (VAR_6->commits)
  goto out;

 VAR_7 = FUNC_4(&VAR_5->changed_submodule_names, VAR_6->sub->name);
 if (!VAR_7)

  goto out;

 VAR_8 = VAR_7->util;
 FUNC_3(VAR_8,
    VAR_0,
    VAR_6->repo);


 if (VAR_8->nr) {
  VAR_6->commits = VAR_8;
  FUNC_0(VAR_5->oid_fetch_tasks,
      VAR_5->oid_fetch_tasks_nr + 1,
      VAR_5->oid_fetch_tasks_alloc);
  VAR_5->oid_fetch_tasks[VAR_5->oid_fetch_tasks_nr] = VAR_6;
  VAR_5->oid_fetch_tasks_nr++;
  return 0;
 }

out:
 FUNC_2(VAR_6);

 return 0;
}
