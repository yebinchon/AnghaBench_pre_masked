
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ argv; } ;
struct TYPE_4__ {char** argv; } ;
struct child_process {char** argv; int in; int out; int err; int pid; scalar_t__ clean_on_exit; scalar_t__ silent_exec_failure; scalar_t__ dir; scalar_t__ env; scalar_t__ use_shell; scalar_t__ git_cmd; scalar_t__ stdout_to_stderr; scalar_t__ no_stdout; scalar_t__ no_stderr; scalar_t__ no_stdin; TYPE_1__ env_array; TYPE_2__ args; } ;
struct child_err {int dummy; } ;
struct atfork_state {int old; } ;
struct argv_array {int * argv; } ;
typedef int cerr ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct atfork_state*) ;
 int FUNC_3 (struct atfork_state*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct child_process*,struct child_err*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct child_process*) ;
 int VAR_17 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int VAR_18 ;
 int FUNC_15 (char*,char*,char*,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,char* const*,char* const*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (char**) ;
 int FUNC_21 (int,struct child_process*) ;
 int FUNC_22 (char*,char**,char**,scalar_t__,int,int,int) ;
 int FUNC_23 (char*,int) ;
 scalar_t__ FUNC_24 (int*) ;
 char** FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (struct argv_array*,struct child_process*) ;
 char** FUNC_27 (struct argv_array*,char**) ;
 char** FUNC_28 (struct argv_array*,char**) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (int,scalar_t__) ;
 scalar_t__ FUNC_34 (int ,int *,int *) ;
 int FUNC_35 (int) ;
 int FUNC_36 (struct child_process*,int) ;
 int FUNC_37 (struct child_process*) ;
 int FUNC_38 (struct child_process*) ;
 int FUNC_39 (int,char*,int ) ;
 int FUNC_40 (int,struct child_err*,int) ;

int FUNC_41(struct child_process *VAR_19)
{
 int VAR_20, VAR_21, VAR_22;
 int VAR_23[2], VAR_24[2], VAR_25[2];
 int VAR_26;
 char *VAR_27;

 if (!VAR_19->argv)
  VAR_19->argv = VAR_19->args.argv;
 if (!VAR_19->env)
  VAR_19->env = VAR_19->env_array.argv;






 VAR_20 = !VAR_19->no_stdin && VAR_19->in < 0;
 if (VAR_20) {
  if (FUNC_24(VAR_23) < 0) {
   VAR_26 = VAR_18;
   if (VAR_19->out > 0)
    FUNC_11(VAR_19->out);
   VAR_27 = "standard input";
   goto fail_pipe;
  }
  VAR_19->in = VAR_23[1];
 }

 VAR_21 = !VAR_19->no_stdout
  && !VAR_19->stdout_to_stderr
  && VAR_19->out < 0;
 if (VAR_21) {
  if (FUNC_24(VAR_24) < 0) {
   VAR_26 = VAR_18;
   if (VAR_20)
    FUNC_12(VAR_23);
   else if (VAR_19->in)
    FUNC_11(VAR_19->in);
   VAR_27 = "standard output";
   goto fail_pipe;
  }
  VAR_19->out = VAR_24[0];
 }

 VAR_22 = !VAR_19->no_stderr && VAR_19->err < 0;
 if (VAR_22) {
  if (FUNC_24(VAR_25) < 0) {
   VAR_26 = VAR_18;
   if (VAR_20)
    FUNC_12(VAR_23);
   else if (VAR_19->in)
    FUNC_11(VAR_19->in);
   if (VAR_21)
    FUNC_12(VAR_24);
   else if (VAR_19->out)
    FUNC_11(VAR_19->out);
   VAR_27 = "standard error";
fail_pipe:
   FUNC_15("cannot create %s pipe for %s: %s",
    VAR_27, VAR_19->argv[0], FUNC_35(VAR_26));
   FUNC_10(VAR_19);
   VAR_18 = VAR_26;
   return -1;
  }
  VAR_19->err = VAR_25[0];
 }

 FUNC_37(VAR_19);
 FUNC_38(VAR_19);

 FUNC_18(((void*)0));


{
 int VAR_28[2];
 int VAR_29 = -1;
 char **VAR_30;
 struct argv_array VAR_31 = VAR_0;
 struct child_err VAR_32;
 struct atfork_state VAR_33;

 if (FUNC_26(&VAR_31, VAR_19) < 0) {
  VAR_26 = VAR_18;
  VAR_19->pid = -1;
  if (!VAR_19->silent_exec_failure)
   FUNC_16("cannot run %s", VAR_19->argv[0]);
  goto end_of_spawn;
 }

 if (FUNC_24(VAR_28))
  VAR_28[0] = VAR_28[1] = -1;

 if (VAR_19->no_stdin || VAR_19->no_stdout || VAR_19->no_stderr) {
  VAR_29 = FUNC_23("/dev/null", VAR_10 | VAR_9);
  if (VAR_29 < 0)
   FUNC_13(FUNC_0("open /dev/null failed"));
  FUNC_29(VAR_29);
 }

 VAR_30 = FUNC_25(VAR_19->env);
 FUNC_3(&VAR_33);
 VAR_19->pid = FUNC_19();
 VAR_26 = VAR_18;
 if (!VAR_19->pid) {
  int VAR_34;




  FUNC_30(VAR_14);
  FUNC_31(VAR_15);
  FUNC_32(VAR_17);

  FUNC_11(VAR_28[0]);
  FUNC_29(VAR_28[1]);
  VAR_16 = VAR_28[1];

  if (VAR_19->no_stdin)
   FUNC_8(VAR_29, 0);
  else if (VAR_20) {
   FUNC_8(VAR_23[0], 0);
   FUNC_6(VAR_23);
  } else if (VAR_19->in) {
   FUNC_8(VAR_19->in, 0);
   FUNC_5(VAR_19->in);
  }

  if (VAR_19->no_stderr)
   FUNC_8(VAR_29, 2);
  else if (VAR_22) {
   FUNC_8(VAR_25[1], 2);
   FUNC_6(VAR_25);
  } else if (VAR_19->err > 1) {
   FUNC_8(VAR_19->err, 2);
   FUNC_5(VAR_19->err);
  }

  if (VAR_19->no_stdout)
   FUNC_8(VAR_29, 1);
  else if (VAR_19->stdout_to_stderr)
   FUNC_8(2, 1);
  else if (VAR_21) {
   FUNC_8(VAR_24[1], 1);
   FUNC_6(VAR_24);
  } else if (VAR_19->out > 1) {
   FUNC_8(VAR_19->out, 1);
   FUNC_5(VAR_19->out);
  }

  if (VAR_19->dir && FUNC_4(VAR_19->dir))
   FUNC_7(VAR_1);





  for (VAR_34 = 1; VAR_34 < VAR_8; VAR_34++) {

   if (FUNC_33(VAR_34, VAR_11) == VAR_12)
    FUNC_33(VAR_34, VAR_12);
  }

  if (FUNC_34(VAR_13, &VAR_33.old, ((void*)0)) != 0)
   FUNC_7(VAR_4);







  FUNC_17(VAR_31.argv[1], (char *const *) VAR_31.argv + 1,
         (char *const *) VAR_30);
  if (VAR_18 == VAR_7)
   FUNC_17(VAR_31.argv[0], (char *const *) VAR_31.argv,
          (char *const *) VAR_30);

  if (VAR_18 == VAR_6) {
   if (VAR_19->silent_exec_failure)
    FUNC_7(VAR_5);
   FUNC_7(VAR_2);
  } else {
   FUNC_7(VAR_3);
  }
 }
 FUNC_2(&VAR_33);
 if (VAR_19->pid < 0)
  FUNC_16("cannot fork() for %s", VAR_19->argv[0]);
 else if (VAR_19->clean_on_exit)
  FUNC_21(VAR_19->pid, VAR_19);
 FUNC_11(VAR_28[1]);
 if (FUNC_40(VAR_28[0], &VAR_32, sizeof(VAR_32)) == sizeof(VAR_32)) {




  FUNC_39(VAR_19->pid, VAR_19->argv[0], 0);
  FUNC_9(VAR_19, &VAR_32);
  VAR_26 = VAR_18;
  VAR_19->pid = -1;
 }
 FUNC_11(VAR_28[0]);

 if (VAR_29 >= 0)
  FUNC_11(VAR_29);
 FUNC_1(&VAR_31);
 FUNC_20(VAR_30);
}
end_of_spawn:
 if (VAR_19->pid < 0) {
  FUNC_36(VAR_19, -1);

  if (VAR_20)
   FUNC_12(VAR_23);
  else if (VAR_19->in)
   FUNC_11(VAR_19->in);
  if (VAR_21)
   FUNC_12(VAR_24);
  else if (VAR_19->out)
   FUNC_11(VAR_19->out);
  if (VAR_22)
   FUNC_12(VAR_25);
  else if (VAR_19->err)
   FUNC_11(VAR_19->err);
  FUNC_10(VAR_19);
  VAR_18 = VAR_26;
  return -1;
 }

 if (VAR_20)
  FUNC_11(VAR_23[0]);
 else if (VAR_19->in)
  FUNC_11(VAR_19->in);

 if (VAR_21)
  FUNC_11(VAR_24[1]);
 else if (VAR_19->out)
  FUNC_11(VAR_19->out);

 if (VAR_22)
  FUNC_11(VAR_25[1]);
 else if (VAR_19->err)
  FUNC_11(VAR_19->err);

 return 0;
}
