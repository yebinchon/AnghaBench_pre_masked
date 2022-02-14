
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; char* buf; } ;
struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;
struct child_process {int out; int git_cmd; int args; } ;
typedef int FILE ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,struct object*,char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char*,char*,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int FUNC_7 (char*,struct object_id*) ;
 struct object* FUNC_8 (struct object_id*,char*) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 scalar_t__ FUNC_10 (struct strbuf*,int *,char) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int * FUNC_13 (int,char*) ;

__attribute__((used)) static int FUNC_14(int VAR_5,
        struct rev_info *VAR_6,
        int VAR_7, const char **VAR_8)
{
 struct child_process VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_3;
 FILE *VAR_11;
 int VAR_12;

 FUNC_3(&VAR_9.args,
    "rev-list", "--boundary", "--pretty=oneline",
    ((void*)0));
 for (VAR_12 = 1; VAR_12 < VAR_7; VAR_12++)
  FUNC_2(&VAR_9.args, VAR_8[VAR_12]);
 VAR_9.out = -1;
 VAR_9.git_cmd = 1;
 if (FUNC_9(&VAR_9))
  return -1;
 VAR_11 = FUNC_13(VAR_9.out, "r");
 while (FUNC_10(&VAR_10, VAR_11, '\n') != VAR_1) {
  struct object_id VAR_13;
  if (VAR_10.len > 0 && VAR_10.buf[0] == '-') {
   FUNC_12(VAR_5, VAR_10.buf, VAR_10.len);
   if (!FUNC_7(VAR_10.buf + 1, &VAR_13)) {
    struct object *VAR_14 = FUNC_8(&VAR_13,
             VAR_10.buf);
    VAR_14->flags |= VAR_4;
    FUNC_1(VAR_6, VAR_14, VAR_10.buf);
   }
  } else if (!FUNC_7(VAR_10.buf, &VAR_13)) {
   struct object *VAR_15 = FUNC_8(&VAR_13,
            VAR_10.buf);
   VAR_15->flags |= VAR_2;
  }
 }
 FUNC_11(&VAR_10);
 FUNC_5(VAR_11);
 if (FUNC_6(&VAR_9))
  return FUNC_4(FUNC_0("rev-list died"));
 return 0;
}
