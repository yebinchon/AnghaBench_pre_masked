
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stash_info {scalar_t__ is_stash_ref; int b_commit; } ;
struct option {int dummy; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 struct option FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char*,char*,int *) ;
 int FUNC_4 (char const*,struct stash_info*,int,int ) ;
 int FUNC_5 (struct stash_info*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct stash_info*) ;
 scalar_t__ FUNC_8 (struct stash_info*,int,char const**) ;
 int VAR_1 ;
 char const* FUNC_9 (int *) ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (struct child_process*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6;
 const char *VAR_7 = ((void*)0);
 struct stash_info VAR_8;
 struct child_process VAR_9 = VAR_0;
 struct option VAR_10[] = {
  FUNC_0()
 };

 VAR_3 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_10,
        VAR_1, 0);

 if (!VAR_3) {
  FUNC_6(VAR_2, FUNC_1("No branch name specified"));
  return -1;
 }

 VAR_7 = VAR_4[0];

 if (FUNC_8(&VAR_8, VAR_3 - 1, VAR_4 + 1))
  return -1;

 VAR_9.git_cmd = 1;
 FUNC_3(&VAR_9.args, "checkout", "-b", ((void*)0));
 FUNC_2(&VAR_9.args, VAR_7);
 FUNC_2(&VAR_9.args, FUNC_9(&VAR_8.b_commit));
 VAR_6 = FUNC_11(&VAR_9);
 if (!VAR_6)
  VAR_6 = FUNC_4(VAR_5, &VAR_8, 1, 0);
 if (!VAR_6 && VAR_8.is_stash_ref)
  VAR_6 = FUNC_5(&VAR_8, 0);

 FUNC_7(&VAR_8);

 return VAR_6;
}
