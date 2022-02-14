
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_extra_header {int len; int value; } ;
struct commit {int dummy; } ;
struct check_mergetag_data {char** argv; int argc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 scalar_t__ FUNC_2 (char*,struct object_id*) ;
 int FUNC_3 (struct tag*) ;
 int FUNC_4 (int ,int ,int ,struct object_id*) ;
 struct tag* FUNC_5 (int ,struct object_id*) ;
 char* FUNC_6 (struct object_id*) ;
 scalar_t__ FUNC_7 (int ,struct object_id*) ;
 scalar_t__ FUNC_8 (int ,struct tag*,int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct commit *VAR_2,
          struct commit_extra_header *VAR_3,
          void *VAR_4)
{
 struct check_mergetag_data *VAR_5 = (struct check_mergetag_data *)VAR_4;
 const char *VAR_6 = VAR_5->argv[0];
 struct object_id VAR_7;
 struct tag *VAR_8;
 int VAR_9;

 FUNC_4(VAR_3->value, VAR_3->len, FUNC_9(VAR_0), &VAR_7);
 VAR_8 = FUNC_5(VAR_1, &VAR_7);
 if (!VAR_8)
  return FUNC_1(FUNC_0("bad mergetag in commit '%s'"), VAR_6);
 if (FUNC_8(VAR_1, VAR_8, VAR_3->value, VAR_3->len))
  return FUNC_1(FUNC_0("malformed mergetag in commit '%s'"), VAR_6);


 for (VAR_9 = 1; VAR_9 < VAR_5->argc; VAR_9++) {
  struct object_id VAR_10;
  if (FUNC_2(VAR_5->argv[VAR_9], &VAR_10) < 0)
   return FUNC_1(FUNC_0("not a valid object name: '%s'"),
         VAR_5->argv[VAR_9]);
  if (FUNC_7(FUNC_3(VAR_8), &VAR_10))
   return 0;
 }

 return FUNC_1(FUNC_0("original commit '%s' contains mergetag '%s' that is "
         "discarded; use --edit instead of --graft"), VAR_6,
       FUNC_6(&VAR_7));
}
