
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct child_process {char const** argv; int no_stdin; int out; int git_cmd; scalar_t__ err; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 char* FUNC_4 (struct object_id const*) ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 int FUNC_6 (struct strbuf*,int ,int ) ;
 scalar_t__ FUNC_7 (struct strbuf*,int,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int,int ,int ) ;

__attribute__((used)) static void FUNC_10(int VAR_2, const struct object_id *VAR_3)
{
 const char *VAR_4[5] =
  {"show", "--stat", "--no-notes", FUNC_4(VAR_3), ((void*)0)};
 struct child_process VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_1;


 VAR_5.argv = VAR_4;
 VAR_5.no_stdin = 1;
 VAR_5.out = -1;
 VAR_5.err = 0;
 VAR_5.git_cmd = 1;
 if (FUNC_5(&VAR_5))
  FUNC_1(FUNC_0("unable to start 'show' for object '%s'"),
      FUNC_4(VAR_3));

 if (FUNC_7(&VAR_6, VAR_5.out, 0) < 0)
  FUNC_2(FUNC_0("could not read 'show' output"));
 FUNC_6(&VAR_7, VAR_6.buf, VAR_6.len);
 FUNC_9(VAR_2, VAR_7.buf, VAR_7.len);

 FUNC_8(&VAR_7);
 FUNC_8(&VAR_6);

 if (FUNC_3(&VAR_5))
  FUNC_1(FUNC_0("failed to finish 'show' for object '%s'"),
      FUNC_4(VAR_3));
}
