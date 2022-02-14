
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;
struct child_process {char const* trace2_hook_name; char* trace2_child_class; scalar_t__* argv; scalar_t__ git_cmd; int dir; int trace2_child_id; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,int *,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,scalar_t__*) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,int ,char const*) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, int VAR_2,
         uint64_t VAR_3,
         const struct child_process *VAR_4)
{
 const char *VAR_5 = "child_start";
 struct strbuf VAR_6 = VAR_0;

 if (VAR_4->trace2_hook_name) {
  FUNC_4(&VAR_6, "[ch%d] class:hook hook:%s",
       VAR_4->trace2_child_id, VAR_4->trace2_hook_name);
 } else {
  const char *VAR_7 =
   VAR_4->trace2_child_class ? VAR_4->trace2_child_class : "?";
  FUNC_4(&VAR_6, "[ch%d] class:%s",
       VAR_4->trace2_child_id, VAR_7);
 }

 if (VAR_4->dir) {
  FUNC_5(&VAR_6, " cd:");
  FUNC_2(&VAR_6, VAR_4->dir);
 }

 FUNC_5(&VAR_6, " argv:[");
 if (VAR_4->git_cmd) {
  FUNC_5(&VAR_6, "git");
  if (VAR_4->argv[0])
   FUNC_3(&VAR_6, ' ');
 }
 FUNC_1(&VAR_6, VAR_4->argv);
 FUNC_3(&VAR_6, ']');

 FUNC_0(VAR_1, VAR_2, VAR_5, ((void*)0), &VAR_3,
    ((void*)0), ((void*)0), &VAR_6);
 FUNC_6(&VAR_6);
}
