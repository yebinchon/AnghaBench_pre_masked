
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int name; } ;
struct strbuf {int buf; } ;
struct child_process {int git_cmd; int no_stdin; char const* dir; int args; int env_array; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 struct child_process VAR_1 ;
 struct strbuf VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char*,int ,char const*) ;
 int FUNC_5 (int *,char*,char*,char*,...) ;
 int FUNC_6 (struct child_process*) ;
 int FUNC_7 (char const*,char*,int) ;
 char const* FUNC_8 () ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (int ,char const*) ;
 int FUNC_15 (char const*,int*) ;
 int VAR_5 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (struct child_process*) ;
 int FUNC_19 (struct strbuf*,char*,char const*) ;
 int FUNC_20 (struct strbuf*) ;
 struct submodule* FUNC_21 (int ,int *,char const*) ;
 scalar_t__ FUNC_22 (struct submodule const*) ;
 int FUNC_23 (char const*) ;
 int FUNC_24 (struct submodule const*) ;
 int FUNC_25 (char const*) ;
 int VAR_6 ;
 int FUNC_26 (int ) ;
 char* FUNC_27 (char*,int ,int ) ;

int FUNC_28(const char *VAR_7,
    const char *VAR_8,
    const char *VAR_9,
    unsigned VAR_10)
{
 int VAR_11 = 0;
 struct child_process VAR_12 = VAR_1;
 const struct submodule *VAR_13;
 int *VAR_14, VAR_15;

 if (!FUNC_14(VAR_6, VAR_7))
  return 0;

 if (VAR_10 & VAR_4)





  VAR_14 = &VAR_15;
 else
  VAR_14 = ((void*)0);

 if (VAR_8 && !FUNC_15(VAR_7, VAR_14))
  return 0;

 VAR_13 = FUNC_21(VAR_6, &VAR_5, VAR_7);

 if (!VAR_13)
  FUNC_0("could not get submodule information for '%s'", VAR_7);

 if (VAR_8 && !(VAR_10 & VAR_4)) {

  if (FUNC_22(VAR_13))
   return FUNC_9(FUNC_1("submodule '%s' has dirty index"), VAR_7);
 }

 if (!(VAR_10 & VAR_3)) {
  if (VAR_8) {
   if (!FUNC_25(VAR_7))
    FUNC_2(VAR_7,
     VAR_0);
  } else {
   char *VAR_16 = FUNC_27("%s/modules/%s",
        FUNC_11(), VAR_13->name);
   FUNC_7(VAR_7, VAR_16, 0);
   FUNC_10(VAR_16);


   FUNC_23(VAR_7);
  }

  if (VAR_8 && (VAR_10 & VAR_4)) {
   char *VAR_17 = FUNC_27("%s/modules/%s",
        FUNC_11(), VAR_13->name);
   FUNC_7(VAR_7, VAR_17, 1);
   FUNC_10(VAR_17);
  }
 }

 FUNC_16(&VAR_12.env_array);

 VAR_12.git_cmd = 1;
 VAR_12.no_stdin = 1;
 VAR_12.dir = VAR_7;

 FUNC_4(&VAR_12.args, "--super-prefix=%s%s/",
   FUNC_12(), VAR_7);
 FUNC_5(&VAR_12.args, "read-tree", "--recurse-submodules", ((void*)0));

 if (VAR_10 & VAR_3)
  FUNC_3(&VAR_12.args, "-n");
 else
  FUNC_3(&VAR_12.args, "-u");

 if (VAR_10 & VAR_4)
  FUNC_3(&VAR_12.args, "--reset");
 else
  FUNC_3(&VAR_12.args, "-m");

 if (!(VAR_10 & VAR_4))
  FUNC_3(&VAR_12.args, VAR_8 ? VAR_8 : FUNC_8());

 FUNC_3(&VAR_12.args, VAR_9 ? VAR_9 : FUNC_8());

 if (FUNC_18(&VAR_12)) {
  VAR_11 = FUNC_9(FUNC_1("Submodule '%s' could not be updated."), VAR_7);
  goto out;
 }

 if (!(VAR_10 & VAR_3)) {
  if (VAR_9) {
   FUNC_6(&VAR_12);

   VAR_12.git_cmd = 1;
   VAR_12.no_stdin = 1;
   VAR_12.dir = VAR_7;

   FUNC_16(&VAR_12.env_array);
   FUNC_5(&VAR_12.args, "update-ref", "HEAD",
      "--no-deref", VAR_9, ((void*)0));

   if (FUNC_18(&VAR_12)) {
    VAR_11 = -1;
    goto out;
   }
  } else {
   struct strbuf VAR_18 = VAR_2;

   FUNC_19(&VAR_18, "%s/.git", VAR_7);
   FUNC_26(VAR_18.buf);
   FUNC_20(&VAR_18);

   if (FUNC_13(VAR_7))
    FUNC_17(VAR_7);

   FUNC_24(VAR_13);
  }
 }
out:
 return VAR_11;
}
