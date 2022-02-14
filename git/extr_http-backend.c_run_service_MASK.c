
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; int in; int git_cmd; int clean_on_exit; int wait_after_clean; int env_array; } ;
typedef scalar_t__ ssize_t ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct child_process*) ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char const*,int,int,scalar_t__) ;
 int FUNC_8 (char const*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 int FUNC_10 (char const*,char*) ;

__attribute__((used)) static void FUNC_11(const char **VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_6("HTTP_CONTENT_ENCODING");
 const char *VAR_4 = FUNC_6("REMOTE_USER");
 const char *VAR_5 = FUNC_6("REMOTE_ADDR");
 int VAR_6 = 0;
 struct child_process VAR_7 = VAR_0;
 ssize_t VAR_8 = FUNC_5();

 if (VAR_3 && !FUNC_10(VAR_3, "gzip"))
  VAR_6 = 1;
 else if (VAR_3 && !FUNC_10(VAR_3, "x-gzip"))
  VAR_6 = 1;

 if (!VAR_4 || !*VAR_4)
  VAR_4 = "anonymous";
 if (!VAR_5 || !*VAR_5)
  VAR_5 = "(none)";

 if (!FUNC_6("GIT_COMMITTER_NAME"))
  FUNC_0(&VAR_7.env_array, "GIT_COMMITTER_NAME=%s", VAR_4);
 if (!FUNC_6("GIT_COMMITTER_EMAIL"))
  FUNC_0(&VAR_7.env_array,
     "GIT_COMMITTER_EMAIL=%s@http.%s", VAR_4, VAR_5);

 VAR_7.argv = VAR_1;
 if (VAR_2 || VAR_6 || VAR_8 >= 0)
  VAR_7.in = -1;
 VAR_7.git_cmd = 1;
 VAR_7.clean_on_exit = 1;
 VAR_7.wait_after_clean = 1;
 if (FUNC_9(&VAR_7))
  FUNC_3(1);

 FUNC_1(1);
 if (VAR_6)
  FUNC_7(VAR_1[0], VAR_7.in, VAR_2, VAR_8);
 else if (VAR_2)
  FUNC_2(VAR_1[0], VAR_7.in, VAR_8);
 else if (VAR_8 >= 0)
  FUNC_8(VAR_1[0], VAR_7.in, VAR_8);
 else
  FUNC_1(0);

 if (FUNC_4(&VAR_7))
  FUNC_3(1);
}
