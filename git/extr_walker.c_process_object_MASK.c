
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int dummy; } ;
struct tree {int dummy; } ;
struct tag {int dummy; } ;
struct object {scalar_t__ type; int oid; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct walker*,struct commit*) ;
 scalar_t__ FUNC_3 (struct walker*,struct tag*) ;
 scalar_t__ FUNC_4 (struct walker*,struct tree*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct walker *VAR_4, struct object *VAR_5)
{
 if (VAR_5->type == VAR_1) {
  if (FUNC_2(VAR_4, (struct commit *)VAR_5))
   return -1;
  return 0;
 }
 if (VAR_5->type == VAR_3) {
  if (FUNC_4(VAR_4, (struct tree *)VAR_5))
   return -1;
  return 0;
 }
 if (VAR_5->type == VAR_0) {
  return 0;
 }
 if (VAR_5->type == VAR_2) {
  if (FUNC_3(VAR_4, (struct tag *)VAR_5))
   return -1;
  return 0;
 }
 return FUNC_0("Unable to determine requirements "
       "of type %s for %s",
       FUNC_5(VAR_5->type), FUNC_1(&VAR_5->oid));
}
