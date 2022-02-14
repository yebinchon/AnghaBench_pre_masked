
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char* url; char* name; } ;
struct strbuf {int buf; } ;
struct child_process {int git_cmd; char const* dir; int args; int env_array; } ;


 struct child_process VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*,char*,...) ;
 scalar_t__ FUNC_4 (struct child_process*,struct strbuf*,int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 () ;
 char* FUNC_8 (char const*,char const*) ;
 char* FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int ,char**) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (char const*,int *) ;
 int VAR_4 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*) ;
 char* FUNC_17 (char*,char*,char*) ;
 scalar_t__ FUNC_18 (struct child_process*) ;
 scalar_t__ FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 (struct strbuf*,char*,char*) ;
 int FUNC_22 (struct strbuf*,char*) ;
 int FUNC_23 (struct strbuf*) ;
 int FUNC_24 (struct strbuf*) ;
 int FUNC_25 (struct strbuf*,char*) ;
 struct submodule* FUNC_26 (int ,int *,char const*) ;
 int FUNC_27 (struct strbuf*,char const*) ;
 int VAR_5 ;
 char* FUNC_28 () ;
 char* FUNC_29 (char*) ;
 char* FUNC_30 (char*,int ) ;

__attribute__((used)) static void FUNC_31(const char *VAR_6, const char *VAR_7,
      unsigned int VAR_8)
{
 const struct submodule *VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11, *VAR_12, *VAR_13;
 struct strbuf VAR_14 = VAR_3;
 struct child_process VAR_15 = VAR_0;
 char *VAR_16 = ((void*)0);

 if (!FUNC_13(VAR_5, VAR_6))
  return;

 VAR_9 = FUNC_26(VAR_5, &VAR_4, VAR_6);

 if (VAR_9 && VAR_9->url) {
  if (FUNC_19(VAR_9->url) ||
      FUNC_20(VAR_9->url)) {
   char *VAR_17, *VAR_18;
   char *VAR_19 = FUNC_7();
   FUNC_21(&VAR_14, "remote.%s.url", VAR_19);

   if (FUNC_10(VAR_14.buf, &VAR_17))
    VAR_17 = FUNC_28();

   VAR_18 = FUNC_9(VAR_6);
   VAR_11 = FUNC_17(VAR_17, VAR_9->url, VAR_18);
   VAR_12 = FUNC_17(VAR_17, VAR_9->url, ((void*)0));

   FUNC_6(VAR_19);
   FUNC_6(VAR_18);
   FUNC_6(VAR_17);
  } else {
   VAR_11 = FUNC_29(VAR_9->url);
   VAR_12 = FUNC_29(VAR_9->url);
  }
 } else {
  VAR_11 = FUNC_29("");
  VAR_12 = FUNC_29("");
 }

 VAR_13 = FUNC_8(VAR_6, VAR_7);

 if (!(VAR_8 & VAR_1))
  FUNC_16(FUNC_0("Synchronizing submodule url for '%s'\n"),
    VAR_13);

 FUNC_24(&VAR_14);
 FUNC_21(&VAR_14, "submodule.%s.url", VAR_9->name);
 if (FUNC_11(VAR_14.buf, VAR_12))
  FUNC_5(FUNC_0("failed to register url for submodule path '%s'"),
        VAR_13);

 if (!FUNC_14(VAR_6, ((void*)0)))
  goto cleanup;

 FUNC_15(&VAR_15.env_array);
 VAR_15.git_cmd = 1;
 VAR_15.dir = VAR_6;
 FUNC_3(&VAR_15.args, "submodule--helper",
    "print-default-remote", ((void*)0));

 FUNC_24(&VAR_14);
 if (FUNC_4(&VAR_15, &VAR_14, 0))
  FUNC_5(FUNC_0("failed to get the default remote for submodule '%s'"),
        VAR_6);

 FUNC_25(&VAR_14, "\n");
 VAR_10 = FUNC_30("remote.%s.url", VAR_14.buf);

 FUNC_24(&VAR_14);
 FUNC_27(&VAR_14, VAR_6);
 FUNC_22(&VAR_14, "/config");

 if (FUNC_12(VAR_14.buf, VAR_10, VAR_11))
  FUNC_5(FUNC_0("failed to update remote for submodule '%s'"),
        VAR_6);

 if (VAR_8 & VAR_2) {
  struct child_process VAR_20 = VAR_0;

  VAR_20.git_cmd = 1;
  VAR_20.dir = VAR_6;
  FUNC_15(&VAR_20.env_array);

  FUNC_1(&VAR_20.args, "--super-prefix");
  FUNC_2(&VAR_20.args, "%s/", VAR_13);
  FUNC_3(&VAR_20.args, "submodule--helper", "sync",
     "--recursive", ((void*)0));

  if (VAR_8 & VAR_1)
   FUNC_1(&VAR_20.args, "--quiet");

  if (FUNC_18(&VAR_20))
   FUNC_5(FUNC_0("failed to recurse into submodule '%s'"),
         VAR_6);
 }

cleanup:
 FUNC_6(VAR_12);
 FUNC_6(VAR_11);
 FUNC_23(&VAR_14);
 FUNC_6(VAR_10);
 FUNC_6(VAR_13);
 FUNC_6(VAR_16);
}
