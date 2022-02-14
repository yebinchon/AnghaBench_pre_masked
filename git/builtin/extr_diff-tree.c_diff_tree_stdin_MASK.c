
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct object_id*) ;
 struct object* FUNC_2 (int ,struct object_id*) ;
 scalar_t__ FUNC_3 (char*,struct object_id*,char const**) ;
 int FUNC_4 (struct commit*,char const*) ;
 int FUNC_5 (struct tree*,char const*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(char *VAR_3)
{
 int VAR_4 = FUNC_6(VAR_3);
 struct object_id VAR_5;
 struct object *VAR_6;
 const char *VAR_7;

 if (!VAR_4 || VAR_3[VAR_4-1] != '\n')
  return -1;
 VAR_3[VAR_4-1] = 0;
 if (FUNC_3(VAR_3, &VAR_5, &VAR_7))
  return -1;
 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (!VAR_6)
  return -1;
 if (VAR_6->type == VAR_0)
  return FUNC_4((struct commit *)VAR_6, VAR_7);
 if (VAR_6->type == VAR_1)
  return FUNC_5((struct tree *)VAR_6, VAR_7);
 FUNC_0("Object %s is a %s, not a commit or tree",
       FUNC_1(&VAR_5), FUNC_7(VAR_6->type));
 return -1;
}
