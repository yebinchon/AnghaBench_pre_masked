
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 struct object* FUNC_2 (int ,struct object_id*) ;
 int FUNC_3 (struct commit*,unsigned int) ;
 int VAR_1 ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, unsigned VAR_3)
{
 struct object_id VAR_4;
 struct object *VAR_5;

 if (FUNC_1(VAR_2, &VAR_4))
  return FUNC_0("commit '%s' not found.", VAR_2);

 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (!VAR_5)
  return FUNC_0("%s: unable to read file.", VAR_2);
 if (VAR_5->type != VAR_0)
  return FUNC_0("%s: cannot verify a non-commit object of type %s.",
    VAR_2, FUNC_4(VAR_5->type));

 return FUNC_3((struct commit *)VAR_5, VAR_3);
}
