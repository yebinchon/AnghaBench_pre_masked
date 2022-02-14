
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct child_process {int git_cmd; int env_array; int args; } ;
struct TYPE_2__ {int buf; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (struct child_process*) ;
 char* FUNC_4 (struct object_id*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct child_process*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_7(struct object_id *VAR_2)
{
 int VAR_3;
 struct child_process VAR_4 = VAR_0;






 VAR_4.git_cmd = 1;
 FUNC_0(&VAR_4.args, "read-tree");
 FUNC_0(&VAR_4.args, FUNC_4(VAR_2));
 FUNC_1(&VAR_4.env_array, "GIT_INDEX_FILE=%s",
    VAR_1.buf);
 if (FUNC_6(&VAR_4)) {
  FUNC_5(VAR_1.buf);
  return -1;
 }

 FUNC_3(&VAR_4);
 VAR_4.git_cmd = 1;
 FUNC_2(&VAR_4.args, "checkout-index", "--all", ((void*)0));
 FUNC_1(&VAR_4.env_array, "GIT_INDEX_FILE=%s",
    VAR_1.buf);

 VAR_3 = FUNC_6(&VAR_4);
 FUNC_5(VAR_1.buf);
 return VAR_3;
}
