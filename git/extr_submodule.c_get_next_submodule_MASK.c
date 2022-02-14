
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int argv; } ;
struct submodule_parallel_fetch {size_t count; int result; int oid_fetch_tasks_nr; TYPE_2__ args; int prefix; struct fetch_task** oid_fetch_tasks; int quiet; TYPE_4__* r; int changed_submodule_names; } ;
struct strbuf {char* buf; } ;
struct fetch_task {int commits; TYPE_3__* repo; TYPE_5__* sub; } ;
struct child_process {int git_cmd; int args; int dir; int env_array; } ;
struct cache_entry {int name; int ce_mode; } ;
struct TYPE_12__ {int path; int name; } ;
struct TYPE_11__ {TYPE_1__* index; } ;
struct TYPE_10__ {int gitdir; } ;
struct TYPE_8__ {size_t cache_nr; struct cache_entry** cache; } ;






 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct child_process*) ;
 struct fetch_task* FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct fetch_task*) ;
 int FUNC_8 (struct fetch_task*) ;
 int FUNC_9 (TYPE_5__*,struct submodule_parallel_fetch*) ;
 TYPE_3__* FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct strbuf*,char*,int ,...) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(struct child_process *VAR_2,
         struct strbuf *VAR_3, void *VAR_4, void **VAR_5)
{
 struct submodule_parallel_fetch *VAR_6 = VAR_4;

 for (; VAR_6->count < VAR_6->r->index->cache_nr; VAR_6->count++) {
  const struct cache_entry *VAR_7 = VAR_6->r->index->cache[VAR_6->count];
  const char *VAR_8;
  struct fetch_task *VAR_9;

  if (!FUNC_0(VAR_7->ce_mode))
   continue;

  VAR_9 = FUNC_6(VAR_6->r, VAR_7->name);
  if (!VAR_9)
   continue;

  switch (FUNC_9(VAR_9->sub, VAR_6))
  {
  default:
  case 131:
  case 128:
   if (!VAR_9->sub ||
       !FUNC_16(
     &VAR_6->changed_submodule_names,
     VAR_9->sub->name))
    continue;
   VAR_8 = "on-demand";
   break;
  case 129:
   VAR_8 = "yes";
   break;
  case 130:
   continue;
  }

  VAR_9->repo = FUNC_10(VAR_6->r, VAR_9->sub);
  if (VAR_9->repo) {
   struct strbuf VAR_10 = VAR_0;
   FUNC_5(VAR_2);
   VAR_2->dir = VAR_9->repo->gitdir;
   FUNC_13(&VAR_2->env_array);
   VAR_2->git_cmd = 1;
   if (!VAR_6->quiet)
    FUNC_14(VAR_3, "Fetching submodule %s%s\n",
         VAR_6->prefix, VAR_7->name);
   FUNC_2(&VAR_2->args);
   FUNC_4(&VAR_2->args, VAR_6->args.argv);
   FUNC_3(&VAR_2->args, VAR_8);
   FUNC_3(&VAR_2->args, "--submodule-prefix");

   FUNC_14(&VAR_10, "%s%s/",
             VAR_6->prefix,
             VAR_9->sub->path);
   FUNC_3(&VAR_2->args, VAR_10.buf);

   VAR_6->count++;
   *VAR_5 = VAR_9;

   FUNC_15(&VAR_10);
   return 1;
  } else {

   FUNC_7(VAR_9);
   FUNC_8(VAR_9);





   if (FUNC_0(VAR_7->ce_mode) &&
       !FUNC_11(VAR_7->name)) {
    VAR_6->result = 1;
    FUNC_14(VAR_3,
         FUNC_1("Could not access submodule '%s'"),
         VAR_7->name);
   }
  }
 }

 if (VAR_6->oid_fetch_tasks_nr) {
  struct fetch_task *VAR_11 =
   VAR_6->oid_fetch_tasks[VAR_6->oid_fetch_tasks_nr - 1];
  struct strbuf VAR_12 = VAR_0;
  VAR_6->oid_fetch_tasks_nr--;

  FUNC_14(&VAR_12, "%s%s/",
       VAR_6->prefix, VAR_11->sub->path);

  FUNC_5(VAR_2);
  FUNC_13(&VAR_2->env_array);
  VAR_2->git_cmd = 1;
  VAR_2->dir = VAR_11->repo->gitdir;

  FUNC_2(&VAR_2->args);
  FUNC_4(&VAR_2->args, VAR_6->args.argv);
  FUNC_3(&VAR_2->args, "on-demand");
  FUNC_3(&VAR_2->args, "--submodule-prefix");
  FUNC_3(&VAR_2->args, VAR_12.buf);


  FUNC_3(&VAR_2->args, "origin");
  FUNC_12(VAR_11->commits,
       VAR_1, &VAR_2->args);

  *VAR_5 = VAR_11;
  FUNC_15(&VAR_12);
  return 1;
 }

 return 0;
}
