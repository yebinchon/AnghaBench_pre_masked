
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct commit_graft {int dummy; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 struct commit_graft* FUNC_5 (struct strbuf*) ;
 scalar_t__ FUNC_6 (struct repository*,struct commit_graft*,int) ;
 int FUNC_7 (struct strbuf*,int *,char) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static int FUNC_9(struct repository *VAR_2, const char *VAR_3)
{
 FILE *VAR_4 = FUNC_4(VAR_3, "r");
 struct strbuf VAR_5 = VAR_0;
 if (!VAR_4)
  return -1;
 if (VAR_1)
  FUNC_1(FUNC_0("Support for <GIT_DIR>/info/grafts is deprecated\n"
    "and will be removed in a future Git version.\n"
    "\n"
    "Please use \"git replace --convert-graft-file\"\n"
    "to convert the grafts into replace refs.\n"
    "\n"
    "Turn this message off by running\n"
    "\"git config advice.graftFileDeprecated false\""));
 while (!FUNC_7(&VAR_5, VAR_4, '\n')) {

  struct commit_graft *VAR_6 = FUNC_5(&VAR_5);
  if (!VAR_6)
   continue;
  if (FUNC_6(VAR_2, VAR_6, 1))
   FUNC_2("duplicate graft data: %s", VAR_5.buf);
 }
 FUNC_3(VAR_4);
 FUNC_8(&VAR_5);
 return 0;
}
