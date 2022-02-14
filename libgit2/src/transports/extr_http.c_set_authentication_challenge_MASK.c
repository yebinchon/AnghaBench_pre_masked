
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* auth_context; int auth_challenges; } ;
typedef TYPE_1__ http_server ;
struct TYPE_5__ {int (* set_challenge ) (TYPE_2__*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_4(http_server *VAR_1)
{
 const char *VAR_2;

 if (FUNC_2(&VAR_1->auth_challenges) > 1) {
  FUNC_0(VAR_0, "received multiple authentication challenges");
  return -1;
 }

 VAR_2 = FUNC_1(&VAR_1->auth_challenges, 0);

 if (VAR_1->auth_context->set_challenge)
  return VAR_1->auth_context->set_challenge(VAR_1->auth_context, VAR_2);
 else
  return 0;
}
