
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ auth_context; int auth_challenges; scalar_t__ authenticated; } ;
typedef TYPE_1__ http_server ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(http_server *VAR_0)
{






 if (VAR_0->auth_context && FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);

  VAR_0->authenticated = 0;
 }





 if (FUNC_2(&VAR_0->auth_challenges) == 0)
  return 0;
 else if (VAR_0->auth_context)
  return FUNC_3(VAR_0);
 else
  return FUNC_4(VAR_0);
}
