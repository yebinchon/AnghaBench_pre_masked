
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct auth {TYPE_2__* a_auth_group; int a_user; int * a_mutual_secret; int * a_secret; } ;
struct TYPE_4__ {TYPE_1__* ag_target; int * ag_name; } ;
struct TYPE_3__ {int * t_name; } ;


 int FUNC_0 (char*,int ,int *) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct auth *VAR_0)
{
 size_t VAR_1;

 VAR_1 = FUNC_1(VAR_0->a_secret);
 if (VAR_1 > 16) {
  if (VAR_0->a_auth_group->ag_name != ((void*)0))
   FUNC_0("secret for user \"%s\", auth-group \"%s\", "
       "is too long; it should be at most 16 characters "
       "long", VAR_0->a_user, VAR_0->a_auth_group->ag_name);
  else
   FUNC_0("secret for user \"%s\", target \"%s\", "
       "is too long; it should be at most 16 characters "
       "long", VAR_0->a_user,
       VAR_0->a_auth_group->ag_target->t_name);
 }
 if (VAR_1 < 12) {
  if (VAR_0->a_auth_group->ag_name != ((void*)0))
   FUNC_0("secret for user \"%s\", auth-group \"%s\", "
       "is too short; it should be at least 12 characters "
       "long", VAR_0->a_user,
       VAR_0->a_auth_group->ag_name);
  else
   FUNC_0("secret for user \"%s\", target \"%s\", "
       "is too short; it should be at least 12 characters "
       "long", VAR_0->a_user,
       VAR_0->a_auth_group->ag_target->t_name);
 }

 if (VAR_0->a_mutual_secret != ((void*)0)) {
  VAR_1 = FUNC_1(VAR_0->a_mutual_secret);
  if (VAR_1 > 16) {
   if (VAR_0->a_auth_group->ag_name != ((void*)0))
    FUNC_0("mutual secret for user \"%s\", "
        "auth-group \"%s\", is too long; it should "
        "be at most 16 characters long",
        VAR_0->a_user, VAR_0->a_auth_group->ag_name);
   else
    FUNC_0("mutual secret for user \"%s\", "
        "target \"%s\", is too long; it should "
        "be at most 16 characters long",
        VAR_0->a_user,
        VAR_0->a_auth_group->ag_target->t_name);
  }
  if (VAR_1 < 12) {
   if (VAR_0->a_auth_group->ag_name != ((void*)0))
    FUNC_0("mutual secret for user \"%s\", "
        "auth-group \"%s\", is too short; it "
        "should be at least 12 characters long",
        VAR_0->a_user, VAR_0->a_auth_group->ag_name);
   else
    FUNC_0("mutual secret for user \"%s\", "
        "target \"%s\", is too short; it should be "
        "at least 12 characters long",
        VAR_0->a_user,
        VAR_0->a_auth_group->ag_target->t_name);
  }
 }
}
