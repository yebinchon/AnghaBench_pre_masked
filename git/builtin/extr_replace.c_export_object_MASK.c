
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct child_process {int git_cmd; int out; int args; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 char* FUNC_4 (struct object_id const*) ;
 int FUNC_5 (char const*,int,int) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_4, enum object_type VAR_5,
     int VAR_6, const char *VAR_7)
{
 struct child_process VAR_8 = VAR_0;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_7, VAR_3 | VAR_1 | VAR_2, 0666);
 if (VAR_9 < 0)
  return FUNC_3(FUNC_0("unable to open %s for writing"), VAR_7);

 FUNC_1(&VAR_8.args, "--no-replace-objects");
 FUNC_1(&VAR_8.args, "cat-file");
 if (VAR_6)
  FUNC_1(&VAR_8.args, FUNC_7(VAR_5));
 else
  FUNC_1(&VAR_8.args, "-p");
 FUNC_1(&VAR_8.args, FUNC_4(VAR_4));
 VAR_8.git_cmd = 1;
 VAR_8.out = VAR_9;

 if (FUNC_6(&VAR_8))
  return FUNC_2(FUNC_0("cat-file reported failure"));
 return 0;
}
