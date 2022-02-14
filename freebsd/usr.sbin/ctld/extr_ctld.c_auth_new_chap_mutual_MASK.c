
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_group {scalar_t__ ag_type; TYPE_1__* ag_target; int * ag_name; } ;
typedef struct auth {void* a_mutual_secret; void* a_mutual_user; void* a_secret; void* a_user; } const auth ;
struct TYPE_2__ {int * t_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct auth const*) ;
 struct auth const* FUNC_1 (struct auth_group*) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char*,int *) ;

const struct auth *
FUNC_4(struct auth_group *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 struct auth *VAR_7;

 if (VAR_2->ag_type == VAR_1)
  VAR_2->ag_type = VAR_0;
 if (VAR_2->ag_type != VAR_0) {
  if (VAR_2->ag_name != ((void*)0))
   FUNC_3("cannot mix \"chap-mutual\" authentication "
       "with other types for auth-group \"%s\"",
       VAR_2->ag_name);
  else
   FUNC_3("cannot mix \"chap-mutual\" authentication "
       "with other types for target \"%s\"",
       VAR_2->ag_target->t_name);
  return (((void*)0));
 }

 VAR_7 = FUNC_1(VAR_2);
 VAR_7->a_user = FUNC_2(VAR_3);
 VAR_7->a_secret = FUNC_2(VAR_4);
 VAR_7->a_mutual_user = FUNC_2(VAR_5);
 VAR_7->a_mutual_secret = FUNC_2(VAR_6);

 FUNC_0(VAR_7);

 return (VAR_7);
}
