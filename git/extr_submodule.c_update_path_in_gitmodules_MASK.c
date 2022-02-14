
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
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 struct submodule* FUNC_7 (TYPE_1__*,int *,char const*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (int ,char const*) ;

int FUNC_9(const char *VAR_4, const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 const struct submodule *VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_0))
  return -1;

 if (FUNC_4(VAR_3->index))
  FUNC_2(FUNC_0("Cannot change unmerged .gitmodules, resolve merge conflicts first"));

 VAR_7 = FUNC_7(VAR_3, &VAR_2, VAR_4);
 if (!VAR_7 || !VAR_7->name) {
  FUNC_8(FUNC_0("Could not find section in .gitmodules where path=%s"), VAR_4);
  return -1;
 }
 FUNC_5(&VAR_6, "submodule.");
 FUNC_5(&VAR_6, VAR_7->name);
 FUNC_5(&VAR_6, ".path");
 VAR_8 = FUNC_1(VAR_6.buf, VAR_5);
 FUNC_6(&VAR_6);
 return VAR_8;
}
