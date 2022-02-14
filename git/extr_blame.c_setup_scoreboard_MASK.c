
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct commit_list {struct commit* item; } ;
struct TYPE_20__ {int oid; } ;
struct commit {TYPE_16__ object; TYPE_2__* parents; } ;
struct TYPE_21__ {int compare; } ;
struct blame_scoreboard {int num_read_blob; scalar_t__ final_buf; int final_buf_size; int repo; TYPE_5__* revs; TYPE_6__* final; scalar_t__ reverse; scalar_t__ contents_from; TYPE_1__ commits; } ;
struct TYPE_23__ {int size; int ptr; } ;
struct blame_origin {int blob_oid; int mode; TYPE_3__ file; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_18__ {int oid; } ;
struct TYPE_26__ {TYPE_14__ object; } ;
struct TYPE_24__ {scalar_t__ allow_textconv; } ;
struct TYPE_17__ {TYPE_4__ flags; } ;
struct TYPE_19__ {char* name; } ;
struct TYPE_25__ {TYPE_12__ diffopt; TYPE_15__ children; scalar_t__ first_parent_only; } ;
struct TYPE_22__ {struct commit* item; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_15__*,TYPE_16__*,struct commit_list*) ;
 int FUNC_3 (TYPE_5__*,TYPE_14__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,...) ;
 TYPE_6__* FUNC_5 (int ,TYPE_12__*,char const*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,struct blame_origin*) ;
 void* FUNC_7 (TYPE_5__*,char const**) ;
 TYPE_6__* FUNC_8 (TYPE_5__*,char const**) ;
 int FUNC_9 (char*) ;
 struct blame_origin* FUNC_10 (TYPE_6__*) ;
 struct blame_origin* FUNC_11 (TYPE_6__*,char const*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 char const* FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct blame_scoreboard*) ;
 scalar_t__ FUNC_17 (TYPE_5__*) ;
 scalar_t__ FUNC_18 (int *,int*,int *) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int ,char const*,int ,int *,int,char**,int *) ;
 struct commit_list* FUNC_21 (int,int) ;
 scalar_t__ FUNC_22 (int ,int ) ;

void FUNC_23(struct blame_scoreboard *VAR_3,
        const char *VAR_4,
        struct blame_origin **VAR_5)
{
 const char *VAR_6 = ((void*)0);
 struct blame_origin *VAR_7;
 struct commit *VAR_8 = ((void*)0);
 enum object_type VAR_9;

 FUNC_12(&VAR_0);

 if (VAR_3->reverse && VAR_3->contents_from)
  FUNC_4(FUNC_1("--contents and --reverse do not blend well."));

 if (!VAR_3->repo)
  FUNC_0("repo is NULL");

 if (!VAR_3->reverse) {
  VAR_3->final = FUNC_7(VAR_3->revs, &VAR_6);
  VAR_3->commits.compare = VAR_1;
 } else {
  VAR_3->final = FUNC_8(VAR_3->revs, &VAR_6);
  VAR_3->commits.compare = VAR_2;
 }

 if (VAR_3->final && VAR_3->contents_from)
  FUNC_4(FUNC_1("cannot use --contents with final commit object name"));

 if (VAR_3->reverse && VAR_3->revs->first_parent_only)
  VAR_3->revs->children.name = ((void*)0);

 if (!VAR_3->final) {





  FUNC_19();
  VAR_3->final = FUNC_5(VAR_3->repo,
           &VAR_3->revs->diffopt,
           VAR_4, VAR_3->contents_from);
  FUNC_3(VAR_3->revs, &(VAR_3->final->object), ":");
 }

 if (VAR_3->reverse && VAR_3->revs->first_parent_only) {
  VAR_8 = FUNC_7(VAR_3->revs, ((void*)0));
  if (!VAR_8)
   FUNC_4(FUNC_1("--reverse and --first-parent together require specified latest commit"));
 }






 if (FUNC_17(VAR_3->revs))
  FUNC_4(FUNC_1("revision walk setup failed"));

 if (VAR_3->reverse && VAR_3->revs->first_parent_only) {
  struct commit *VAR_10 = VAR_8;

  VAR_3->revs->children.name = "children";
  while (VAR_10->parents &&
         !FUNC_15(&VAR_10->object.oid, &VAR_3->final->object.oid)) {
   struct commit_list *VAR_11 = FUNC_21(1, sizeof(*VAR_11));

   VAR_11->item = VAR_10;
   if (FUNC_2(&VAR_3->revs->children,
        &VAR_10->parents->item->object, VAR_11))
    FUNC_0("not unique item in first-parent chain");
   VAR_10 = VAR_10->parents->item;
  }

  if (!FUNC_15(&VAR_10->object.oid, &VAR_3->final->object.oid))
   FUNC_4(FUNC_1("--reverse --first-parent together require range along first-parent chain"));
 }

 if (FUNC_13(&VAR_3->final->object.oid)) {
  VAR_7 = FUNC_10(VAR_3->final);
  VAR_3->final_buf = FUNC_22(VAR_7->file.ptr, VAR_7->file.size);
  VAR_3->final_buf_size = VAR_7->file.size;
 }
 else {
  VAR_7 = FUNC_11(VAR_3->final, VAR_4);
  if (FUNC_6(VAR_3->repo, VAR_7))
   FUNC_4(FUNC_1("no such path %s in %s"), VAR_4, VAR_6);

  if (VAR_3->revs->diffopt.flags.allow_textconv &&
      FUNC_20(VAR_3->repo, VAR_4, VAR_7->mode, &VAR_7->blob_oid, 1, (char **) &VAR_3->final_buf,
        &VAR_3->final_buf_size))
   ;
  else
   VAR_3->final_buf = FUNC_18(&VAR_7->blob_oid, &VAR_9,
        &VAR_3->final_buf_size);

  if (!VAR_3->final_buf)
   FUNC_4(FUNC_1("cannot read blob %s for path %s"),
       FUNC_14(&VAR_7->blob_oid),
       VAR_4);
 }
 VAR_3->num_read_blob++;
 FUNC_16(VAR_3);

 if (VAR_5)
  *VAR_5 = VAR_7;

 FUNC_9((char *)VAR_6);
}
