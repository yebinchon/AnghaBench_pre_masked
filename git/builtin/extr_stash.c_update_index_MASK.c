
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*,int *) ;
 int FUNC_1 (struct child_process*,int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_1)
{
 struct child_process VAR_2 = VAR_0;





 VAR_2.git_cmd = 1;
 FUNC_0(&VAR_2.args, "update-index", "--add", "--stdin", ((void*)0));
 return FUNC_1(&VAR_2, VAR_1->buf, VAR_1->len, ((void*)0), 0, ((void*)0), 0);
}
