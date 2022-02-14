
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 char* VAR_1 ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (unsigned char*,struct argv_array*,char const*) ;
 int VAR_2 ;
 char* FUNC_7 (unsigned char*,struct argv_array*,char const*) ;

__attribute__((used)) static const char *FUNC_8(unsigned char *VAR_3)
{
 const char *VAR_4;
 const char *VAR_5 = VAR_1 ? VAR_1 : "..";
 struct argv_array VAR_6 = VAR_0;

 if (FUNC_5())
  return "denyCurrentBranch = updateInstead needs a worktree";

 FUNC_2(&VAR_6, "GIT_DIR=%s", FUNC_0(FUNC_4()));

 if (!FUNC_3(VAR_2))
  VAR_4 = FUNC_7(VAR_3, &VAR_6, VAR_5);
 else
  VAR_4 = FUNC_6(VAR_3, &VAR_6, VAR_5);

 FUNC_1(&VAR_6);
 return VAR_4;
}
