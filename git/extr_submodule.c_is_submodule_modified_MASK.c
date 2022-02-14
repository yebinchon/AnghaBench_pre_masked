
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; scalar_t__ len; } ;
struct child_process {int git_cmd; int no_stdin; int out; char const* dir; int env_array; int args; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 struct child_process VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct strbuf VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*,int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct child_process*) ;
 int FUNC_13 (struct strbuf*,char*,char const*) ;
 scalar_t__ FUNC_14 (struct strbuf*,int *,char) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (struct strbuf*) ;
 scalar_t__ FUNC_17 (char*) ;
 int * FUNC_18 (int,char*) ;

unsigned FUNC_19(const char *VAR_5, int VAR_6)
{
 struct child_process VAR_7 = VAR_0;
 struct strbuf VAR_8 = VAR_4;
 FILE *VAR_9;
 unsigned VAR_10 = 0;
 const char *VAR_11;
 int VAR_12 = 0;

 FUNC_13(&VAR_8, "%s/.git", VAR_5);
 VAR_11 = FUNC_11(VAR_8.buf);
 if (!VAR_11)
  VAR_11 = VAR_8.buf;
 if (!FUNC_8(VAR_11)) {
  if (FUNC_7(VAR_11))
   FUNC_4(FUNC_1("'%s' not recognized as a git repository"), VAR_11);
  FUNC_15(&VAR_8);

  return 0;
 }
 FUNC_16(&VAR_8);

 FUNC_3(&VAR_7.args, "status", "--porcelain=2", ((void*)0));
 if (VAR_6)
  FUNC_2(&VAR_7.args, "-uno");

 FUNC_10(&VAR_7.env_array);
 VAR_7.git_cmd = 1;
 VAR_7.no_stdin = 1;
 VAR_7.out = -1;
 VAR_7.dir = VAR_5;
 if (FUNC_12(&VAR_7))
  FUNC_4("Could not run 'git status --porcelain=2' in submodule %s", VAR_5);

 VAR_9 = FUNC_18(VAR_7.out, "r");
 while (FUNC_14(&VAR_8, VAR_9, '\n') != VAR_3) {

  if (VAR_8.buf[0] == '?')
   VAR_10 |= VAR_2;

  if (VAR_8.buf[0] == 'u' ||
      VAR_8.buf[0] == '1' ||
      VAR_8.buf[0] == '2') {

   if (VAR_8.len < FUNC_17("T XY SSSS"))
    FUNC_0("invalid status --porcelain=2 line %s",
        VAR_8.buf);

   if (VAR_8.buf[5] == 'S' && VAR_8.buf[8] == 'U')

    VAR_10 |= VAR_2;

   if (VAR_8.buf[0] == 'u' ||
       VAR_8.buf[0] == '2' ||
       FUNC_9(VAR_8.buf + 5, "S..U", 4))

    VAR_10 |= VAR_1;
  }

  if ((VAR_10 & VAR_1) &&
      ((VAR_10 & VAR_2) ||
       VAR_6)) {




   VAR_12 = 1;
   break;
  }
 }
 FUNC_5(VAR_9);

 if (FUNC_6(&VAR_7) && !VAR_12)
  FUNC_4("'git status --porcelain=2' failed in submodule %s", VAR_5);

 FUNC_15(&VAR_8);
 return VAR_10;
}
