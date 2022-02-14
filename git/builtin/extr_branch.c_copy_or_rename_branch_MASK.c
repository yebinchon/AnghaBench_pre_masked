
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,...) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,char*,char const**) ;
 int FUNC_11 (struct strbuf*,char*,char const*,...) ;
 scalar_t__ FUNC_12 (struct strbuf*,char const*) ;
 int FUNC_13 (struct strbuf*) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char const*,struct strbuf*) ;
 int FUNC_16 (char const*,struct strbuf*,int) ;
 int FUNC_17 (int ,char const*) ;

__attribute__((used)) static void FUNC_18(const char *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 struct strbuf VAR_5 = VAR_0, VAR_6 = VAR_0, VAR_7 = VAR_0;
 struct strbuf VAR_8 = VAR_0, VAR_9 = VAR_0;
 const char *VAR_10 = ((void*)0);
 const char *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 if (!VAR_1) {
  if (VAR_3)
   FUNC_3(FUNC_1("cannot copy the current branch while not on any."));
  else
   FUNC_3(FUNC_1("cannot rename the current branch while not on any."));
 }

 if (FUNC_12(&VAR_5, VAR_1)) {




  if (FUNC_6(VAR_5.buf))
   VAR_12 = 1;
  else
   FUNC_3(FUNC_1("Invalid branch name: '%s'"), VAR_1);
 }





 if (!FUNC_14(VAR_1, VAR_2))
  FUNC_15(VAR_2, &VAR_6);
 else
  FUNC_16(VAR_2, &VAR_6, VAR_4);

 FUNC_7(VAR_5.buf);

 if (!FUNC_10(VAR_5.buf, "refs/heads/", &VAR_10) ||
     !FUNC_10(VAR_6.buf, "refs/heads/", &VAR_11)) {
  FUNC_0("expected prefix missing for refs");
 }

 if (VAR_3)
  FUNC_11(&VAR_7, "Branch: copied %s to %s",
       VAR_5.buf, VAR_6.buf);
 else
  FUNC_11(&VAR_7, "Branch: renamed %s to %s",
       VAR_5.buf, VAR_6.buf);

 if (!VAR_3 && FUNC_8(VAR_5.buf, VAR_6.buf, VAR_7.buf))
  FUNC_3(FUNC_1("Branch rename failed"));
 if (VAR_3 && FUNC_2(VAR_5.buf, VAR_6.buf, VAR_7.buf))
  FUNC_3(FUNC_1("Branch copy failed"));

 if (VAR_12) {
  if (VAR_3)
   FUNC_17(FUNC_1("Created a copy of a misnamed branch '%s'"),
    VAR_10);
  else
   FUNC_17(FUNC_1("Renamed a misnamed branch '%s' away"),
    VAR_10);
 }

 if (!VAR_3 &&
     FUNC_9(VAR_5.buf, VAR_6.buf, VAR_7.buf))
  FUNC_3(FUNC_1("Branch renamed to %s, but HEAD is not updated!"), VAR_2);

 FUNC_13(&VAR_7);

 FUNC_11(&VAR_8, "branch.%s", VAR_10);
 FUNC_13(&VAR_5);
 FUNC_11(&VAR_9, "branch.%s", VAR_11);
 FUNC_13(&VAR_6);
 if (!VAR_3 && FUNC_5(VAR_8.buf, VAR_9.buf) < 0)
  FUNC_3(FUNC_1("Branch is renamed, but update of config-file failed"));
 if (VAR_3 && FUNC_14(VAR_1, VAR_2) && FUNC_4(VAR_8.buf, VAR_9.buf) < 0)
  FUNC_3(FUNC_1("Branch is copied, but update of config-file failed"));
 FUNC_13(&VAR_8);
 FUNC_13(&VAR_9);
}
