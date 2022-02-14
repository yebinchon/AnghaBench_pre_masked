
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {int git_cmd; int args; } ;
struct am_state {int cur; int last; int dir; int prec; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char const**) ;
 int FUNC_3 (struct child_process*,struct strbuf*,int) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct am_state *VAR_2, const char **VAR_3,
    int VAR_4, int VAR_5)
{
 struct child_process VAR_6 = VAR_0;
 struct strbuf VAR_7 = VAR_1;
 int VAR_8;

 VAR_6.git_cmd = 1;
 FUNC_0(&VAR_6.args, "mailsplit");
 FUNC_1(&VAR_6.args, "-d%d", VAR_2->prec);
 FUNC_1(&VAR_6.args, "-o%s", VAR_2->dir);
 FUNC_0(&VAR_6.args, "-b");
 if (VAR_4)
  FUNC_0(&VAR_6.args, "--keep-cr");
 if (VAR_5)
  FUNC_0(&VAR_6.args, "--mboxrd");
 FUNC_0(&VAR_6.args, "--");
 FUNC_2(&VAR_6.args, VAR_3);

 VAR_8 = FUNC_3(&VAR_6, &VAR_7, 8);
 if (VAR_8)
  goto exit;

 VAR_2->cur = 1;
 VAR_2->last = FUNC_5(VAR_7.buf, ((void*)0), 10);

exit:
 FUNC_4(&VAR_7);
 return VAR_8 ? -1 : 0;
}
