
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct repository {int dummy; } ;
struct oid_array {int dummy; } ;
struct has_commit_data {int member_1; char const* member_2; int result; struct repository* member_0; } ;
struct child_process {int git_cmd; int no_stdin; char const* dir; int env_array; struct has_commit_data args; } ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (struct has_commit_data*,char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (struct child_process*,struct strbuf*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct oid_array*,int ,struct has_commit_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_5,
     const char *VAR_6,
     struct oid_array *VAR_7)
{
 struct has_commit_data VAR_8 = { VAR_5, 1, VAR_6 };
 if (FUNC_0(VAR_6))
  return 0;

 FUNC_3(VAR_7, VAR_4, &VAR_8);

 if (VAR_8.result) {





  struct child_process VAR_9 = VAR_0;
  struct strbuf VAR_10 = VAR_2;

  FUNC_1(&VAR_9.args, "rev-list", "-n", "1", ((void*)0));
  FUNC_3(VAR_7, VAR_3, &VAR_9.args);
  FUNC_1(&VAR_9.args, "--not", "--all", ((void*)0));

  FUNC_4(&VAR_9.env_array);
  VAR_9.git_cmd = 1;
  VAR_9.no_stdin = 1;
  VAR_9.dir = VAR_6;

  if (FUNC_2(&VAR_9, &VAR_10, VAR_1 + 1) || VAR_10.len)
   VAR_8.result = 0;

  FUNC_5(&VAR_10);
 }

 return VAR_8.result;
}
