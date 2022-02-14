
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct remote {int name; } ;
struct branch {int merge_nr; TYPE_1__** merge; int refname; int name; int remote_name; } ;
struct TYPE_2__ {int src; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (struct branch*,struct remote*) ;
 char* VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct strbuf*,char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct remote *VAR_3, struct branch *VAR_4,
    int VAR_5, int VAR_6)
{
 struct strbuf VAR_7 = VAR_0;

 if (!VAR_4)
  FUNC_1(FUNC_0(VAR_1), VAR_3->name);
 if (!VAR_4->merge_nr || !VAR_4->merge || !VAR_4->remote_name)
  FUNC_1(FUNC_0("The current branch %s has no upstream branch.\n"
      "To push the current branch and set the remote as upstream, use\n"
      "\n"
      "    git push --set-upstream %s %s\n"),
      VAR_4->name,
      VAR_3->name,
      VAR_4->name);
 if (VAR_4->merge_nr != 1)
  FUNC_1(FUNC_0("The current branch %s has multiple upstream branches, "
      "refusing to push."), VAR_4->name);
 if (VAR_5)
  FUNC_1(FUNC_0("You are pushing to remote '%s', which is not the upstream of\n"
        "your current branch '%s', without telling me what to push\n"
        "to update which remote branch."),
      VAR_3->name, VAR_4->name);

 if (VAR_6) {

  if (FUNC_5(VAR_4->refname, VAR_4->merge[0]->src))
   FUNC_2(VAR_4, VAR_3);
 }

 FUNC_4(&VAR_7, "%s:%s", VAR_4->refname, VAR_4->merge[0]->src);
 FUNC_3(&VAR_2, VAR_7.buf);
}
