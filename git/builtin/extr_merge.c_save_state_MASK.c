
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct child_process {char const** argv; int out; int git_cmd; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 scalar_t__ FUNC_4 (int ,struct object_id*) ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 int FUNC_6 (struct strbuf*,int,int) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_9(struct object_id *VAR_2)
{
 int VAR_3;
 struct child_process VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_1;
 const char *VAR_6[] = {"stash", "create", ((void*)0)};
 int VAR_7 = -1;

 VAR_4.argv = VAR_6;
 VAR_4.out = -1;
 VAR_4.git_cmd = 1;

 if (FUNC_5(&VAR_4))
  FUNC_2(FUNC_0("could not run stash."));
 VAR_3 = FUNC_6(&VAR_5, VAR_4.out, 1024);
 FUNC_1(VAR_4.out);

 if (FUNC_3(&VAR_4) || VAR_3 < 0)
  FUNC_2(FUNC_0("stash failed"));
 else if (!VAR_3)
  goto out;
 FUNC_8(&VAR_5, VAR_5.len-1);
 if (FUNC_4(VAR_5.buf, VAR_2))
  FUNC_2(FUNC_0("not a valid object: %s"), VAR_5.buf);
 VAR_7 = 0;
out:
 FUNC_7(&VAR_5);
 return VAR_7;
}
