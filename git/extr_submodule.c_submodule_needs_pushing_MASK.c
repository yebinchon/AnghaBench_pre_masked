
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct oid_array {int dummy; } ;
struct child_process {int git_cmd; int no_stdin; int out; char const* dir; int env_array; int args; } ;
struct TYPE_2__ {scalar_t__ hexsz; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*,char*,char*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct child_process*) ;
 scalar_t__ FUNC_5 (char const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (struct oid_array*,int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct child_process*) ;
 scalar_t__ FUNC_9 (struct strbuf*,int,scalar_t__) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct repository*,char const*,struct oid_array*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_12(struct repository *VAR_5,
       const char *VAR_6,
       struct oid_array *VAR_7)
{
 if (!FUNC_11(VAR_5, VAR_6, VAR_7))
  return 0;

 if (FUNC_5(VAR_6, VAR_3, ((void*)0)) > 0) {
  struct child_process VAR_8 = VAR_0;
  struct strbuf VAR_9 = VAR_1;
  int VAR_10 = 0;

  FUNC_0(&VAR_8.args, "rev-list");
  FUNC_6(VAR_7, VAR_2, &VAR_8.args);
  FUNC_1(&VAR_8.args, "--not", "--remotes", "-n", "1" , ((void*)0));

  FUNC_7(&VAR_8.env_array);
  VAR_8.git_cmd = 1;
  VAR_8.no_stdin = 1;
  VAR_8.out = -1;
  VAR_8.dir = VAR_6;
  if (FUNC_8(&VAR_8))
   FUNC_3("Could not run 'git rev-list <commits> --not --remotes -n 1' command in submodule %s",
     VAR_6);
  if (FUNC_9(&VAR_9, VAR_8.out, VAR_4->hexsz + 1))
   VAR_10 = 1;
  FUNC_4(&VAR_8);
  FUNC_2(VAR_8.out);
  FUNC_10(&VAR_9);
  return VAR_10;
 }

 return 0;
}
