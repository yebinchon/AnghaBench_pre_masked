
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char* id; } ;
struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 struct ref_store* FUNC_2 (int ) ;
 struct ref_store* FUNC_3 (char const*) ;
 struct ref_store* FUNC_4 (struct worktree*) ;
 struct worktree** FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (struct strbuf*,char const*,char*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static const char **FUNC_10(const char **VAR_2, struct ref_store **VAR_3)
{
 const char *VAR_4;

 if (!VAR_2[0]) {
  FUNC_1("ref store required");
 } else if (!FUNC_9(VAR_2[0], "main")) {
  *VAR_3 = FUNC_2(VAR_1);
 } else if (FUNC_6(VAR_2[0], "submodule:", &VAR_4)) {
  struct strbuf VAR_5 = VAR_0;
  int VAR_6;

  VAR_6 = FUNC_7(&VAR_5, VAR_4, "objects/");
  if (VAR_6)
   FUNC_1("strbuf_git_path_submodule failed: %d", VAR_6);
  FUNC_0(VAR_5.buf);
  FUNC_8(&VAR_5);

  *VAR_3 = FUNC_3(VAR_4);
 } else if (FUNC_6(VAR_2[0], "worktree:", &VAR_4)) {
  struct worktree **VAR_7, **VAR_8 = FUNC_5(0);

  for (VAR_7 = VAR_8; *VAR_7; VAR_7++) {
   struct worktree *VAR_9 = *VAR_7;

   if (!VAR_9->id) {

    if (!FUNC_9(VAR_4, "main"))
     break;
   } else if (!FUNC_9(VAR_4, VAR_9->id))
    break;
  }
  if (!*VAR_7)
   FUNC_1("no such worktree: %s", VAR_4);

  *VAR_3 = FUNC_4(*VAR_7);
 } else
  FUNC_1("unknown backend %s", VAR_2[0]);

 if (!*VAR_3)
  FUNC_1("no ref store");



 return VAR_2 + 1;
}
