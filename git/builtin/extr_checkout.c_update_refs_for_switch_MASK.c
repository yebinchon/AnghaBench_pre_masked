
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct checkout_opts {char* new_branch; char* new_orphan_branch; scalar_t__ force_detach; int quiet; scalar_t__ branch_exists; scalar_t__ new_branch_force; int track; int new_branch_log; } ;
struct branch_info {char* name; char* path; TYPE_2__* commit; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,char*,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct branch_info*) ;
 int FUNC_16 (char*,int,struct strbuf*) ;
 int FUNC_17 (struct branch_info*) ;
 int FUNC_18 (char*) ;
 int VAR_4 ;
 int FUNC_19 (struct strbuf*,char*,char const*,char*) ;
 int FUNC_20 (struct strbuf*,int ,char const*,int ) ;
 int FUNC_21 (struct strbuf*) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char const*) ;
 int VAR_5 ;
 int FUNC_24 (char*,char*,int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_25(const struct checkout_opts *VAR_6,
       struct branch_info *VAR_7,
       struct branch_info *VAR_8)
{
 struct strbuf VAR_9 = VAR_1;
 const char *VAR_10, *VAR_11;
 if (VAR_6->new_branch) {
  if (VAR_6->new_orphan_branch) {
   char *VAR_12;

   VAR_12 = FUNC_10("refs/heads/%s", VAR_6->new_orphan_branch);
   if (VAR_6->new_branch_log &&
       !FUNC_18(VAR_12)) {
    int VAR_13;
    struct strbuf VAR_14 = VAR_1;

    VAR_13 = FUNC_16(VAR_12, 1, &VAR_14);
    if (VAR_13) {
     FUNC_7(VAR_4, FUNC_0("Can not do reflog for '%s': %s\n"),
      VAR_6->new_orphan_branch, VAR_14.buf);
     FUNC_21(&VAR_14);
     FUNC_8(VAR_12);
     return;
    }
    FUNC_21(&VAR_14);
   }
   FUNC_8(VAR_12);
  }
  else
   FUNC_1(VAR_5,
          VAR_6->new_branch, VAR_8->name,
          VAR_6->new_branch_force ? 1 : 0,
          VAR_6->new_branch_force ? 1 : 0,
          VAR_6->new_branch_log,
          VAR_6->quiet,
          VAR_6->track);
  VAR_8->name = VAR_6->new_branch;
  FUNC_17(VAR_8);
 }

 VAR_10 = VAR_7->name;
 if (!VAR_10 && VAR_7->commit)
  VAR_10 = FUNC_11(&VAR_7->commit->object.oid);

 VAR_11 = FUNC_9("GIT_REFLOG_ACTION");
 if (!VAR_11)
  FUNC_19(&VAR_9, "checkout: moving from %s to %s",
   VAR_10 ? VAR_10 : "(invalid)", VAR_8->name);
 else
  FUNC_20(&VAR_9, 0, VAR_11, FUNC_23(VAR_11));

 if (!FUNC_22(VAR_8->name, "HEAD") && !VAR_8->path && !VAR_6->force_detach) {

 } else if (VAR_6->force_detach || !VAR_8->path) {
  FUNC_24(VAR_9.buf, "HEAD", &VAR_8->commit->object.oid, ((void*)0),
      VAR_0, VAR_2);
  if (!VAR_6->quiet) {
   if (VAR_7->path &&
       VAR_3 && !VAR_6->force_detach)
    FUNC_5(VAR_8->name);
   FUNC_4(FUNC_0("HEAD is now at"), VAR_8->commit);
  }
 } else if (VAR_8->path) {
  if (FUNC_2("HEAD", VAR_8->path, VAR_9.buf) < 0)
   FUNC_6(FUNC_0("unable to update HEAD"));
  if (!VAR_6->quiet) {
   if (VAR_7->path && !FUNC_22(VAR_8->path, VAR_7->path)) {
    if (VAR_6->new_branch_force)
     FUNC_7(VAR_4, FUNC_0("Reset branch '%s'\n"),
      VAR_8->name);
    else
     FUNC_7(VAR_4, FUNC_0("Already on '%s'\n"),
      VAR_8->name);
   } else if (VAR_6->new_branch) {
    if (VAR_6->branch_exists)
     FUNC_7(VAR_4, FUNC_0("Switched to and reset branch '%s'\n"), VAR_8->name);
    else
     FUNC_7(VAR_4, FUNC_0("Switched to a new branch '%s'\n"), VAR_8->name);
   } else {
    FUNC_7(VAR_4, FUNC_0("Switched to branch '%s'\n"),
     VAR_8->name);
   }
  }
  if (VAR_7->path && VAR_7->name) {
   if (!FUNC_12(VAR_7->path) && FUNC_13(VAR_7->path))
    FUNC_3(VAR_7->path);
  }
 }
 FUNC_14(VAR_5, !VAR_6->quiet);
 FUNC_21(&VAR_9);
 if (!VAR_6->quiet &&
     (VAR_8->path || (!VAR_6->force_detach && !FUNC_22(VAR_8->name, "HEAD"))))
  FUNC_15(VAR_8);
}
