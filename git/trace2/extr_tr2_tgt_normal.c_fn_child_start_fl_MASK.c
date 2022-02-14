
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;
struct child_process {int argv; scalar_t__ git_cmd; int dir; int trace2_child_id; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, int VAR_2,
         uint64_t VAR_3,
         const struct child_process *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 FUNC_4(&VAR_5, "child_start[%d]", VAR_4->trace2_child_id);

 if (VAR_4->dir) {
  FUNC_5(&VAR_5, " cd ");
  FUNC_2(&VAR_5, VAR_4->dir);
  FUNC_5(&VAR_5, ";");
 }






 FUNC_3(&VAR_5, ' ');
 if (VAR_4->git_cmd)
  FUNC_5(&VAR_5, "git ");
 FUNC_1(&VAR_5, VAR_4->argv);

 FUNC_0(VAR_1, VAR_2, &VAR_5);
 FUNC_6(&VAR_5);
}
