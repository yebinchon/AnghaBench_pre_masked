
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int name; } ;
struct strbuf {int buf; } ;
struct child_process {char const* dir; int git_cmd; int no_stdin; int env_array; int args; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 struct child_process VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,char*,char*,int *) ;
 int FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char*) ;
 char const* FUNC_6 () ;
 char const* FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,char const*,int *) ;
 char* FUNC_11 (char const*,int) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (int ,int*) ;
 scalar_t__ FUNC_14 (struct child_process*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (struct strbuf*,char) ;
 int FUNC_17 (struct strbuf*,char*,char const*) ;
 int FUNC_18 (struct strbuf*,char const*) ;
 int FUNC_19 (struct strbuf*) ;
 struct submodule* FUNC_20 (int ,int *,char const*) ;
 int VAR_6 ;

void FUNC_21(const char *VAR_7,
          unsigned VAR_8)
{
 int VAR_9;
 const char *VAR_10;
 struct strbuf VAR_11 = VAR_4;
 FUNC_17(&VAR_11, "%s/.git", VAR_7);
 VAR_10 = FUNC_13(VAR_11.buf, &VAR_9);


 if (!VAR_10) {
  const struct submodule *VAR_12;

  if (VAR_9 == VAR_3) {

   FUNC_19(&VAR_11);
   return;
  }

  if (VAR_9 != VAR_2)

   FUNC_10(VAR_9, VAR_7, ((void*)0));
  VAR_12 = FUNC_20(VAR_6, &VAR_5, VAR_7);
  if (!VAR_12)
   FUNC_4(FUNC_1("could not lookup name for submodule '%s'"), VAR_7);
  FUNC_3(VAR_7,
   FUNC_8("modules/%s", VAR_12->name), 0);
 } else {

  char *VAR_13 = FUNC_11(VAR_10, 1);
  char *VAR_14 = FUNC_11(FUNC_6(), 1);

  if (!FUNC_15(VAR_13, VAR_14))
   FUNC_12(VAR_7);

  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
 }
 FUNC_19(&VAR_11);

 if (VAR_8 & VAR_0) {
  struct child_process VAR_15 = VAR_1;
  struct strbuf VAR_16 = VAR_4;

  if (VAR_8 & ~VAR_0)
   FUNC_0("we don't know how to pass the flags down?");

  FUNC_18(&VAR_16, FUNC_7());
  FUNC_18(&VAR_16, VAR_7);
  FUNC_16(&VAR_16, '/');

  VAR_15.dir = VAR_7;
  VAR_15.git_cmd = 1;
  VAR_15.no_stdin = 1;
  FUNC_2(&VAR_15.args, "--super-prefix", VAR_16.buf,
        "submodule--helper",
        "absorb-git-dirs", ((void*)0));
  FUNC_9(&VAR_15.env_array);
  if (FUNC_14(&VAR_15))
   FUNC_4(FUNC_1("could not recurse into submodule '%s'"), VAR_7);

  FUNC_19(&VAR_16);
 }
}
