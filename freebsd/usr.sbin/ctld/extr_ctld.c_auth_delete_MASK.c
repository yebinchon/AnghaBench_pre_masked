
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth {struct auth* a_mutual_secret; struct auth* a_mutual_user; struct auth* a_secret; struct auth* a_user; TYPE_1__* a_auth_group; } ;
struct TYPE_2__ {int ag_auths; } ;


 int FUNC_0 (int *,struct auth*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct auth*) ;

__attribute__((used)) static void
FUNC_2(struct auth *VAR_1)
{
 FUNC_0(&VAR_1->a_auth_group->ag_auths, VAR_1, VAR_0);

 FUNC_1(VAR_1->a_user);
 FUNC_1(VAR_1->a_secret);
 FUNC_1(VAR_1->a_mutual_user);
 FUNC_1(VAR_1->a_mutual_secret);
 FUNC_1(VAR_1);
}
