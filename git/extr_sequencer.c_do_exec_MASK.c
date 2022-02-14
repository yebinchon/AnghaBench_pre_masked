
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct argv_array*) ;
 int FUNC_4 (struct argv_array*,char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct repository*) ;
 int FUNC_11 (struct repository*,char*,int *,int,int) ;
 int FUNC_12 (char const**,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_13 (int ,char const*,...) ;

__attribute__((used)) static int FUNC_14(struct repository *VAR_3, const char *VAR_4)
{
 struct argv_array VAR_5 = VAR_0;
 const char *VAR_6[] = { ((void*)0), ((void*)0) };
 int VAR_7, VAR_8;

 FUNC_7(VAR_2, "Executing: %s\n", VAR_4);
 VAR_6[0] = VAR_4;
 FUNC_4(&VAR_5, "GIT_DIR=%s", FUNC_2(FUNC_8()));
 FUNC_4(&VAR_5, "GIT_WORK_TREE=%s",
    FUNC_2(FUNC_9()));
 VAR_8 = FUNC_12(VAR_6, VAR_1, ((void*)0),
       VAR_5.argv);


 if (FUNC_5(VAR_3->index) < 0 || FUNC_10(VAR_3) < 0)
  return FUNC_6(FUNC_1("could not read index"));

 VAR_7 = FUNC_11(VAR_3, "rebase", ((void*)0), 1, 1);

 if (VAR_8) {
  FUNC_13(FUNC_1("execution failed: %s\n%s"
     "You can fix the problem, and then run\n"
     "\n"
     "  git rebase --continue\n"
     "\n"),
   VAR_4,
   VAR_7 ? FUNC_0("and made changes to the index and/or the "
    "working tree\n") : "");
  if (VAR_8 == 127)

   VAR_8 = 1;
 } else if (VAR_7) {
  FUNC_13(FUNC_1("execution succeeded: %s\nbut "
     "left changes to the index and/or the working tree\n"
     "Commit or stash your changes, and then run\n"
     "\n"
     "  git rebase --continue\n"
     "\n"), VAR_4);
  VAR_8 = 1;
 }

 FUNC_3(&VAR_5);

 return VAR_8;
}
