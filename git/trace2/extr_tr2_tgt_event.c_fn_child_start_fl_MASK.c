
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct json_writer {int json; } ;
struct child_process {char const* trace2_hook_name; char* trace2_child_class; char const* dir; int argv; scalar_t__ git_cmd; int use_shell; int trace2_child_id; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int *,struct json_writer*) ;
 int FUNC_1 (struct json_writer*,int ) ;
 int FUNC_2 (struct json_writer*,char*) ;
 int FUNC_3 (struct json_writer*) ;
 int FUNC_4 (struct json_writer*,int ) ;
 int FUNC_5 (struct json_writer*,char*,int ) ;
 int FUNC_6 (struct json_writer*,char*) ;
 int FUNC_7 (struct json_writer*,char*,int ) ;
 int FUNC_8 (struct json_writer*,char*,char const*) ;
 int FUNC_9 (struct json_writer*) ;
 int FUNC_10 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(const char *VAR_2, int VAR_3,
         uint64_t VAR_4,
         const struct child_process *VAR_5)
{
 const char *VAR_6 = "child_start";
 struct json_writer VAR_7 = VAR_0;

 FUNC_4(&VAR_7, 0);
 FUNC_0(VAR_6, VAR_2, VAR_3, ((void*)0), &VAR_7);
 FUNC_7(&VAR_7, "child_id", VAR_5->trace2_child_id);
 if (VAR_5->trace2_hook_name) {
  FUNC_8(&VAR_7, "child_class", "hook");
  FUNC_8(&VAR_7, "hook_name", VAR_5->trace2_hook_name);
 } else {
  const char *VAR_8 =
   VAR_5->trace2_child_class ? VAR_5->trace2_child_class : "?";
  FUNC_8(&VAR_7, "child_class", VAR_8);
 }
 if (VAR_5->dir)
  FUNC_8(&VAR_7, "cd", VAR_5->dir);
 FUNC_5(&VAR_7, "use_shell", VAR_5->use_shell);
 FUNC_6(&VAR_7, "argv");
 if (VAR_5->git_cmd)
  FUNC_2(&VAR_7, "git");
 FUNC_1(&VAR_7, VAR_5->argv);
 FUNC_3(&VAR_7);
 FUNC_3(&VAR_7);

 FUNC_10(&VAR_1, &VAR_7.json);
 FUNC_9(&VAR_7);
}
