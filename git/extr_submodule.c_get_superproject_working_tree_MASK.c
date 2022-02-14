
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {int no_stdin; int no_stderr; int out; int git_cmd; int args; int env_array; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*) ;
 struct child_process VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*,char*,char*,char*,char const*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 (struct child_process*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char const*,char const*,struct strbuf*) ;
 scalar_t__ FUNC_13 (struct child_process*) ;
 scalar_t__ FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (struct strbuf*,int,int ) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (struct strbuf*) ;
 char* FUNC_18 (int ,char) ;
 scalar_t__ FUNC_19 (char const*,char*) ;
 int FUNC_20 (char const*) ;
 char* FUNC_21 () ;
 char* FUNC_22 (char const*) ;

const char *FUNC_23(void)
{
 struct child_process VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_2;
 const char *VAR_5 = FUNC_11("../");
 const char *VAR_6 = FUNC_21();
 const char *VAR_7 = ((void*)0);
 const char *VAR_8;
 int VAR_9;
 ssize_t VAR_10;

 if (!FUNC_8())





  return ((void*)0);

 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_12(VAR_6, VAR_5, &VAR_4);

 FUNC_9(&VAR_3.env_array);
 FUNC_2(&VAR_3.env_array);

 FUNC_3(&VAR_3.args, "--literal-pathspecs", "-C", "..",
   "ls-files", "-z", "--stage", "--full-name", "--",
   VAR_8, ((void*)0));
 FUNC_17(&VAR_4);

 VAR_3.no_stdin = 1;
 VAR_3.no_stderr = 1;
 VAR_3.out = -1;
 VAR_3.git_cmd = 1;

 if (FUNC_13(&VAR_3))
  FUNC_5(FUNC_1("could not start ls-files in .."));

 VAR_10 = FUNC_15(&VAR_4, VAR_3.out, VAR_1);
 FUNC_4(VAR_3.out);

 if (FUNC_14(VAR_4.buf, "160000")) {
  int VAR_11;
  int VAR_12 = FUNC_20(VAR_6);
  char *VAR_13, *VAR_14;






  VAR_13 = FUNC_18(VAR_4.buf, '\t') + 1;
  VAR_11 = FUNC_20(VAR_13);

  if (VAR_11 > VAR_12 ||
      FUNC_19(&VAR_6[VAR_12 - VAR_11], VAR_13))
   FUNC_0("returned path string doesn't match cwd?");

  VAR_14 = FUNC_22(VAR_6);
  VAR_14[VAR_12 - VAR_11] = '\0';

  VAR_7 = FUNC_10(VAR_14);
  FUNC_7(VAR_14);
 }
 FUNC_16(&VAR_4);

 VAR_9 = FUNC_6(&VAR_3);

 if (VAR_9 == 128)

  return ((void*)0);
 if (VAR_9 == 0 && VAR_10 == 0)

  return ((void*)0);
 if (VAR_9)
  FUNC_5(FUNC_1("ls-tree returned unexpected return code %d"), VAR_9);

 return VAR_7;
}
