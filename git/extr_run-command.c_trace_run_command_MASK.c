
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {int argv; scalar_t__ git_cmd; int env; int dir; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(const struct child_process *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 if (!FUNC_7(&VAR_1))
  return;

 FUNC_3(&VAR_3, "trace: run_command:");
 if (VAR_2->dir) {
  FUNC_3(&VAR_3, " cd ");
  FUNC_1(&VAR_3, VAR_2->dir);
  FUNC_2(&VAR_3, ';');
 }




 if (VAR_2->env)
  FUNC_5(&VAR_3, VAR_2->env);
 if (VAR_2->git_cmd)
  FUNC_3(&VAR_3, " git");
 FUNC_0(&VAR_3, VAR_2->argv);

 FUNC_6("%s", VAR_3.buf);
 FUNC_4(&VAR_3);
}
