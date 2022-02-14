
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct argv_array {char const** argv; } ;
struct child_process {int git_cmd; char const** env; int no_stdin; int stdout_to_stderr; char const* dir; char* trace2_hook_name; struct argv_array args; int * argv; } ;
struct add_opts {scalar_t__ checkout; int keep_locked; scalar_t__ quiet; int force; int detach; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*,char*) ;
 struct child_process VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct argv_array*) ;
 int FUNC_5 (struct argv_array*,char*) ;
 int FUNC_6 (struct argv_array*,char*,int ,char const*) ;
 int FUNC_7 (struct argv_array*,char*,char*,char const*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_12 (char*) ;
 char const* FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct strbuf*,char*,char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct commit* FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (char*,int) ;
 int VAR_11 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char const*) ;
 scalar_t__ FUNC_20 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (struct child_process*) ;
 scalar_t__ FUNC_22 (char*) ;
 int FUNC_23 (char*,struct strbuf*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct strbuf*,char const*,int) ;
 int FUNC_26 (struct strbuf*,char*,...) ;
 int FUNC_27 (struct strbuf*,char const*) ;
 int FUNC_28 (struct strbuf*) ;
 int FUNC_29 (struct strbuf*) ;
 int FUNC_30 (struct strbuf*,int) ;
 char* FUNC_31 (char*,char) ;
 int FUNC_32 (char const*) ;
 int FUNC_33 (char const*,struct add_opts const*) ;
 char* FUNC_34 (char const*,int*) ;
 int FUNC_35 (char const*,char*,...) ;
 int FUNC_36 (char const*) ;

__attribute__((used)) static int FUNC_37(const char *VAR_14, const char *VAR_15,
   const struct add_opts *VAR_16)
{
 struct strbuf VAR_17 = VAR_5, VAR_18 = VAR_5;
 struct strbuf VAR_19 = VAR_5;
 const char *VAR_20;
 struct child_process VAR_21 = VAR_1;
 struct argv_array VAR_22 = VAR_0;
 unsigned int VAR_23 = 0;
 int VAR_24, VAR_25;
 struct strbuf VAR_26 = VAR_5;
 struct commit *VAR_27 = ((void*)0);
 int VAR_28 = 0;
 struct strbuf VAR_29 = VAR_5;

 FUNC_33(VAR_14, VAR_16);


 if (!VAR_16->detach && !FUNC_27(&VAR_26, VAR_15) &&
     FUNC_20(VAR_26.buf)) {
  VAR_28 = 1;
  if (!VAR_16->force)
   FUNC_11(VAR_26.buf, 0);
 }
 VAR_27 = FUNC_16(VAR_15);
 if (!VAR_27)
  FUNC_9(FUNC_2("invalid reference: %s"), VAR_15);

 VAR_20 = FUNC_34(VAR_14, &VAR_24);
 FUNC_25(&VAR_19, VAR_20, VAR_14 + VAR_24 - VAR_20);
 FUNC_23(VAR_19.buf, &VAR_29);
 if (!VAR_29.len)
  FUNC_0("How come '%s' becomes empty after sanitization?", VAR_19.buf);
 FUNC_29(&VAR_19);
 VAR_20 = VAR_29.buf;
 FUNC_15(&VAR_18, "worktrees/%s", VAR_20);
 VAR_24 = VAR_18.len;
 if (FUNC_22(VAR_18.buf))
  FUNC_10(FUNC_2("could not create leading directories of '%s'"),
     VAR_18.buf);

 while (FUNC_17(VAR_18.buf, 0777)) {
  VAR_23++;
  if ((VAR_6 != VAR_2) || !VAR_23 )
   FUNC_10(FUNC_2("could not create directory of '%s'"),
      VAR_18.buf);
  FUNC_30(&VAR_18, VAR_24);
  FUNC_26(&VAR_18, "%d", VAR_23);
 }
 VAR_20 = FUNC_31(VAR_18.buf, '/') + 1;

 VAR_9 = FUNC_14();
 FUNC_8(VAR_12);
 FUNC_24(VAR_13);

 VAR_8 = FUNC_36(VAR_18.buf);
 VAR_7 = 1;





 FUNC_26(&VAR_19, "%s/locked", VAR_18.buf);
 if (!VAR_16->keep_locked)
  FUNC_35(VAR_19.buf, "initializing");
 else
  FUNC_35(VAR_19.buf, "added with --lock");

 FUNC_26(&VAR_17, "%s/.git", VAR_14);
 if (FUNC_22(VAR_17.buf))
  FUNC_10(FUNC_2("could not create leading directories of '%s'"),
     VAR_17.buf);
 VAR_10 = FUNC_36(VAR_14);

 FUNC_29(&VAR_19);
 FUNC_26(&VAR_19, "%s/gitdir", VAR_18.buf);
 FUNC_35(VAR_19.buf, "%s", FUNC_19(VAR_17.buf));
 FUNC_35(VAR_17.buf, "gitdir: %s/worktrees/%s",
     FUNC_19(FUNC_13()), VAR_20);







 FUNC_29(&VAR_19);
 FUNC_26(&VAR_19, "%s/HEAD", VAR_18.buf);
 FUNC_35(VAR_19.buf, "%s", FUNC_18(&VAR_11));
 FUNC_29(&VAR_19);
 FUNC_26(&VAR_19, "%s/commondir", VAR_18.buf);
 FUNC_35(VAR_19.buf, "../..");

 FUNC_6(&VAR_22, "%s=%s", VAR_3, VAR_17.buf);
 FUNC_6(&VAR_22, "%s=%s", VAR_4, VAR_14);
 VAR_21.git_cmd = 1;

 if (!VAR_28)
  FUNC_7(&VAR_21.args, "update-ref", "HEAD",
     FUNC_18(&VAR_27->object.oid), ((void*)0));
 else {
  FUNC_7(&VAR_21.args, "symbolic-ref", "HEAD",
     VAR_26.buf, ((void*)0));
  if (VAR_16->quiet)
   FUNC_5(&VAR_21.args, "--quiet");
 }

 VAR_21.env = VAR_22.argv;
 VAR_25 = FUNC_21(&VAR_21);
 if (VAR_25)
  goto done;

 if (VAR_16->checkout) {
  VAR_21.argv = ((void*)0);
  FUNC_4(&VAR_21.args);
  FUNC_7(&VAR_21.args, "reset", "--hard", ((void*)0));
  if (VAR_16->quiet)
   FUNC_5(&VAR_21.args, "--quiet");
  VAR_21.env = VAR_22.argv;
  VAR_25 = FUNC_21(&VAR_21);
  if (VAR_25)
   goto done;
 }

 VAR_7 = 0;
 FUNC_1(VAR_10);
 FUNC_1(VAR_8);

done:
 if (VAR_25 || !VAR_16->keep_locked) {
  FUNC_29(&VAR_19);
  FUNC_26(&VAR_19, "%s/locked", VAR_18.buf);
  FUNC_32(VAR_19.buf);
 }





 if (!VAR_25 && VAR_16->checkout) {
  const char *VAR_30 = FUNC_12("post-checkout");
  if (VAR_30) {
   const char *VAR_31[] = { "GIT_DIR", "GIT_WORK_TREE", ((void*)0) };
   VAR_21.git_cmd = 0;
   VAR_21.no_stdin = 1;
   VAR_21.stdout_to_stderr = 1;
   VAR_21.dir = VAR_14;
   VAR_21.env = VAR_31;
   VAR_21.argv = ((void*)0);
   VAR_21.trace2_hook_name = "post-checkout";
   FUNC_7(&VAR_21.args, FUNC_3(VAR_30),
      FUNC_18(&VAR_11),
      FUNC_18(&VAR_27->object.oid),
      "1", ((void*)0));
   VAR_25 = FUNC_21(&VAR_21);
  }
 }

 FUNC_4(&VAR_22);
 FUNC_28(&VAR_19);
 FUNC_28(&VAR_26);
 FUNC_28(&VAR_18);
 FUNC_28(&VAR_17);
 FUNC_28(&VAR_29);
 return VAR_25;
}
