
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char const* FUNC_2 (int *,int ) ;
 struct commit* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(int VAR_2,
       const char *VAR_3,
       const char *VAR_4,
       int VAR_5)
{
 if (VAR_5) {
  struct commit *VAR_6 = FUNC_3(VAR_4);
  if (!VAR_6)
   FUNC_4(FUNC_0("Preparing worktree (new branch '%s')"), VAR_4);
  else
   FUNC_4(FUNC_0("Preparing worktree (resetting branch '%s'; was at %s)"),
      VAR_4,
      FUNC_2(&VAR_6->object.oid, VAR_0));
 } else if (VAR_4) {
  FUNC_4(FUNC_0("Preparing worktree (new branch '%s')"), VAR_4);
 } else {
  struct strbuf VAR_7 = VAR_1;
  if (!VAR_2 && !FUNC_6(&VAR_7, VAR_3) &&
      FUNC_5(VAR_7.buf))
   FUNC_4(FUNC_0("Preparing worktree (checking out '%s')"),
      VAR_3);
  else {
   struct commit *VAR_8 = FUNC_3(VAR_3);
   if (!VAR_8)
    FUNC_1(FUNC_0("invalid reference: %s"), VAR_3);
   FUNC_4(FUNC_0("Preparing worktree (detached HEAD %s)"),
      FUNC_2(&VAR_8->object.oid, VAR_0));
  }
  FUNC_7(&VAR_7);
 }
}
