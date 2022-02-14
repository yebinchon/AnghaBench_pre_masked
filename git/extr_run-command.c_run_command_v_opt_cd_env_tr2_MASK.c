
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; int no_stdin; int git_cmd; int stdout_to_stderr; int silent_exec_failure; int use_shell; int clean_on_exit; char const* dir; char const* const* env; char const* trace2_child_class; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct child_process*) ;

int FUNC_1(const char **VAR_7, int VAR_8, const char *VAR_9,
     const char *const *VAR_10, const char *VAR_11)
{
 struct child_process VAR_12 = VAR_0;
 VAR_12.argv = VAR_7;
 VAR_12.no_stdin = VAR_8 & VAR_2 ? 1 : 0;
 VAR_12.git_cmd = VAR_8 & VAR_4 ? 1 : 0;
 VAR_12.stdout_to_stderr = VAR_8 & VAR_3 ? 1 : 0;
 VAR_12.silent_exec_failure = VAR_8 & VAR_5 ? 1 : 0;
 VAR_12.use_shell = VAR_8 & VAR_6 ? 1 : 0;
 VAR_12.clean_on_exit = VAR_8 & VAR_1 ? 1 : 0;
 VAR_12.dir = VAR_9;
 VAR_12.env = VAR_10;
 VAR_12.trace2_child_class = VAR_11;
 return FUNC_0(&VAR_12);
}
