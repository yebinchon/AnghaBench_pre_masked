
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct child_process {char const** argv; int in; int stdout_to_stderr; char* trace2_hook_name; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct child_process*) ;
 int FUNC_7 (struct strbuf*,char*,int ,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int,int ,int ) ;

__attribute__((used)) static int FUNC_10(const struct object_id *VAR_4,
       const struct object_id *VAR_5)
{
 struct child_process VAR_6 = VAR_0;
 const char *VAR_7[3];
 int VAR_8;
 struct strbuf VAR_9 = VAR_3;

 VAR_7[0] = FUNC_1("post-rewrite");
 if (!VAR_7[0])
  return 0;

 VAR_7[1] = "amend";
 VAR_7[2] = ((void*)0);

 VAR_6.argv = VAR_7;
 VAR_6.in = -1;
 VAR_6.stdout_to_stderr = 1;
 VAR_6.trace2_hook_name = "post-rewrite";

 VAR_8 = FUNC_6(&VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_7(&VAR_9, "%s %s\n", FUNC_3(VAR_4), FUNC_3(VAR_5));
 FUNC_5(VAR_1, VAR_2);
 FUNC_9(VAR_6.in, VAR_9.buf, VAR_9.len);
 FUNC_0(VAR_6.in);
 FUNC_8(&VAR_9);
 FUNC_4(VAR_1);
 return FUNC_2(&VAR_6);
}
