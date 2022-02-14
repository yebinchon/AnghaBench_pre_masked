
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,char*,char*,char*,int *) ;
 char* FUNC_2 (struct object_id*) ;
 int FUNC_3 (struct child_process*,int *,int ,struct strbuf*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_1, struct object_id *VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 const char *VAR_4 = FUNC_2(VAR_2);





 VAR_3.git_cmd = 1;
 FUNC_1(&VAR_3.args, "diff-index", "--cached", "--name-only",
    "--diff-filter=A", ((void*)0));
 FUNC_0(&VAR_3.args, VAR_4);
 return FUNC_3(&VAR_3, ((void*)0), 0, VAR_1, 0, ((void*)0), 0);
}
