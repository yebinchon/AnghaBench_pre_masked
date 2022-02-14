
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct files_ref_store {int gitcommondir; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const**,int*,char const**) ;
 int FUNC_2 (struct strbuf*,char*,int ,...) ;

__attribute__((used)) static void FUNC_3(struct files_ref_store *VAR_0,
           struct strbuf *VAR_1,
           const char *VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2, &VAR_4, &VAR_5, &VAR_3))
  FUNC_0("refname %s is not a other-worktree ref", VAR_2);

 if (VAR_4)
  FUNC_2(VAR_1, "%s/worktrees/%.*s/logs/%s", VAR_0->gitcommondir,
       VAR_5, VAR_4, VAR_3);
 else
  FUNC_2(VAR_1, "%s/logs/%s", VAR_0->gitcommondir,
       VAR_3);
}
