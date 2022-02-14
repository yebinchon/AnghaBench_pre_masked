
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; int no_stdin; int out; } ;
typedef int buf ;


 struct child_process VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (struct child_process*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1)
{
 struct child_process VAR_2 = VAR_0;
 const char *VAR_3[] = { ((void*)0), ((void*)0), ((void*)0) };
 char VAR_4[128];
 int VAR_5;

 VAR_3[0] = "git-credential-cache--daemon";
 VAR_3[1] = VAR_1;
 VAR_2.argv = VAR_3;
 VAR_2.no_stdin = 1;
 VAR_2.out = -1;

 if (FUNC_5(&VAR_2))
  FUNC_2("unable to start cache daemon");
 VAR_5 = FUNC_4(VAR_2.out, VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  FUNC_2("unable to read result code from cache daemon");
 if (VAR_5 != 3 || FUNC_3(VAR_4, "ok\n", 3))
  FUNC_1("cache daemon did not start: %.*s", VAR_5, VAR_4);
 FUNC_0(VAR_2.out);
}
