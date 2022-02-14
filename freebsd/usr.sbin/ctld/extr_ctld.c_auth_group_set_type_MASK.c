
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_group {int ag_type; TYPE_1__* ag_target; int * ag_name; } ;
struct TYPE_2__ {int * t_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(struct auth_group *VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_6, "none") == 0) {
  VAR_7 = VAR_3;
 } else if (FUNC_1(VAR_6, "deny") == 0) {
  VAR_7 = VAR_2;
 } else if (FUNC_1(VAR_6, "chap") == 0) {
  VAR_7 = VAR_0;
 } else if (FUNC_1(VAR_6, "chap-mutual") == 0) {
  VAR_7 = VAR_1;
 } else {
  if (VAR_5->ag_name != ((void*)0))
   FUNC_0("invalid auth-type \"%s\" for auth-group "
       "\"%s\"", VAR_6, VAR_5->ag_name);
  else
   FUNC_0("invalid auth-type \"%s\" for target "
       "\"%s\"", VAR_6, VAR_5->ag_target->t_name);
  return (1);
 }

 if (VAR_5->ag_type != VAR_4 && VAR_5->ag_type != VAR_7) {
  if (VAR_5->ag_name != ((void*)0)) {
   FUNC_0("cannot set auth-type to \"%s\" for "
       "auth-group \"%s\"; already has a different "
       "type", VAR_6, VAR_5->ag_name);
  } else {
   FUNC_0("cannot set auth-type to \"%s\" for target "
       "\"%s\"; already has a different type",
       VAR_6, VAR_5->ag_target->t_name);
  }
  return (1);
 }

 VAR_5->ag_type = VAR_7;

 return (0);
}
