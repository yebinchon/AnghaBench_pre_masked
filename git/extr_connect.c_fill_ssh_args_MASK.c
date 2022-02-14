
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int no_stdin; int no_stdout; int no_stderr; int args; int env_array; scalar_t__ use_shell; } ;
typedef enum ssh_variant { ____Placeholder_ssh_variant } ssh_variant ;
typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,char const*) ;
 char* FUNC_4 () ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *,int *,int,char const*,int,int) ;
 scalar_t__ FUNC_8 (struct child_process*) ;

__attribute__((used)) static void FUNC_9(struct child_process *VAR_4, const char *VAR_5,
     const char *VAR_6, enum protocol_version VAR_7,
     int VAR_8)
{
 const char *VAR_9;
 enum ssh_variant VAR_10;

 if (FUNC_6(VAR_5))
  FUNC_3(FUNC_0("strange hostname '%s' blocked"), VAR_5);

 VAR_9 = FUNC_4();
 if (VAR_9) {
  VAR_10 = FUNC_2(VAR_9, 1);
 } else {





  VAR_4->use_shell = 0;

  VAR_9 = FUNC_5("GIT_SSH");
  if (!VAR_9)
   VAR_9 = "ssh";
  VAR_10 = FUNC_2(VAR_9, 0);
 }

 if (VAR_10 == VAR_1) {
  struct child_process VAR_11 = VAR_0;

  VAR_11.use_shell = VAR_4->use_shell;
  VAR_11.no_stdin = VAR_11.no_stdout = VAR_11.no_stderr = 1;

  FUNC_1(&VAR_11.args, VAR_9);
  FUNC_1(&VAR_11.args, "-G");
  FUNC_7(&VAR_11.args, &VAR_11.env_array,
     VAR_3, VAR_6, VAR_7, VAR_8);
  FUNC_1(&VAR_11.args, VAR_5);

  VAR_10 = FUNC_8(&VAR_11) ? VAR_2 : VAR_3;
 }

 FUNC_1(&VAR_4->args, VAR_9);
 FUNC_7(&VAR_4->args, &VAR_4->env_array, VAR_10, VAR_6, VAR_7, VAR_8);
 FUNC_1(&VAR_4->args, VAR_5);
}
