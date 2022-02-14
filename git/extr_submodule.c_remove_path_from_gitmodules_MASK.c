
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct submodule {char* name; } ;
struct strbuf {int buf; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 struct submodule* FUNC_7 (TYPE_1__*,int *,char const*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (int ,char const*) ;

int FUNC_9(const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 const struct submodule *VAR_6;

 if (!FUNC_2(VAR_0))
  return -1;

 if (FUNC_4(VAR_3->index))
  FUNC_1(FUNC_0("Cannot change unmerged .gitmodules, resolve merge conflicts first"));

 VAR_6 = FUNC_7(VAR_3, &VAR_2, VAR_4);
 if (!VAR_6 || !VAR_6->name) {
  FUNC_8(FUNC_0("Could not find section in .gitmodules where path=%s"), VAR_4);
  return -1;
 }
 FUNC_5(&VAR_5, "submodule.");
 FUNC_5(&VAR_5, VAR_6->name);
 if (FUNC_3(VAR_0, VAR_5.buf, ((void*)0)) < 0) {

  FUNC_8(FUNC_0("Could not remove .gitmodules entry for %s"), VAR_4);
  FUNC_6(&VAR_5);
  return -1;
 }
 FUNC_6(&VAR_5);
 return 0;
}
