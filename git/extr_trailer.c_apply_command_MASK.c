
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct child_process {char const** argv; int no_stdin; int use_shell; int env; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct child_process*,struct strbuf*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct strbuf*,char const*) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,int ,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_4, const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_1;
 struct child_process VAR_8 = VAR_0;
 const char *VAR_9[] = {((void*)0), ((void*)0)};
 char *VAR_10;

 FUNC_3(&VAR_6, VAR_4);
 if (VAR_5)
  FUNC_6(&VAR_6, VAR_2, VAR_5);

 VAR_9[0] = VAR_6.buf;
 VAR_8.argv = VAR_9;
 VAR_8.env = VAR_3;
 VAR_8.no_stdin = 1;
 VAR_8.use_shell = 1;

 if (FUNC_1(&VAR_8, &VAR_7, 1024)) {
  FUNC_2(FUNC_0("running trailer command '%s' failed"), VAR_6.buf);
  FUNC_5(&VAR_7);
  VAR_10 = FUNC_8("");
 } else {
  FUNC_7(&VAR_7);
  VAR_10 = FUNC_4(&VAR_7, ((void*)0));
 }

 FUNC_5(&VAR_6);
 return VAR_10;
}
