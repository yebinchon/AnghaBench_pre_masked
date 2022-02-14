
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct child_process {char const* dir; int git_cmd; int no_stderr; int args; int env_array; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const**) ;
 int FUNC_2 (struct child_process*,struct strbuf*,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_2, const char* VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 const char ***VAR_5;

 static const char *VAR_6[] = { ((void*)0) };

 static const char *VAR_7[] = { "--tags", ((void*)0) };

 static const char *VAR_8[] = { "--contains", ((void*)0) };

 static const char *VAR_9[] = { "--all", "--always", ((void*)0) };

 static const char **VAR_10[] = { VAR_6, VAR_7,
      VAR_8,
      VAR_9, ((void*)0) };

 for (VAR_5 = VAR_10; *VAR_5; VAR_5++) {
  struct child_process VAR_11 = VAR_0;
  FUNC_3(&VAR_11.env_array);
  VAR_11.dir = VAR_2;
  VAR_11.git_cmd = 1;
  VAR_11.no_stderr = 1;

  FUNC_0(&VAR_11.args, "describe");
  FUNC_1(&VAR_11.args, *VAR_5);
  FUNC_0(&VAR_11.args, VAR_3);

  if (!FUNC_2(&VAR_11, &VAR_4, 0)) {
   FUNC_6(&VAR_4, "\n");
   return FUNC_4(&VAR_4, ((void*)0));
  }
 }

 FUNC_5(&VAR_4);
 return ((void*)0);
}
