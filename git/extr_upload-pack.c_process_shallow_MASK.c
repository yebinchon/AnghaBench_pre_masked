
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 char const* FUNC_3 (struct object_id*) ;
 struct object* FUNC_4 (int ,struct object_id*) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, struct object_array *VAR_4)
{
 const char *VAR_5;
 if (FUNC_5(VAR_3, "shallow ", &VAR_5)) {
  struct object_id VAR_6;
  struct object *VAR_7;
  if (FUNC_2(VAR_5, &VAR_6))
   FUNC_1("invalid shallow line: %s", VAR_3);
  VAR_7 = FUNC_4(VAR_2, &VAR_6);
  if (!VAR_7)
   return 1;
  if (VAR_7->type != VAR_1)
   FUNC_1("invalid shallow object %s", FUNC_3(&VAR_6));
  if (!(VAR_7->flags & VAR_0)) {
   VAR_7->flags |= VAR_0;
   FUNC_0(VAR_7, ((void*)0), VAR_4);
  }
  return 1;
 }

 return 0;
}
