
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {int argn; int bundle; int * argv; TYPE_1__* cmd; } ;
struct TYPE_4__ {int ipv6_available; } ;
struct TYPE_3__ {scalar_t__ args; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct cmdargs const *VAR_6)
{
  int VAR_7 = (int)(long)VAR_6->cmd->args;
  unsigned VAR_8;
  unsigned VAR_9;

  if (FUNC_1(VAR_6->argv[VAR_6->argn - 2], &VAR_8, &VAR_9) == ((void*)0))
    return 1;


  if (VAR_9 == VAR_1 && VAR_7 == VAR_2 && !VAR_5.ipv6_available) {
    FUNC_2(VAR_0, "IPv6 is not available on this machine\n");
    return 1;
  }

  if (!VAR_9 && ((VAR_7 == VAR_4 &&
                !FUNC_0(VAR_6->bundle, VAR_3)) ||
               (VAR_7 == VAR_3 &&
                !FUNC_0(VAR_6->bundle, VAR_4)))) {
    FUNC_2(VAR_0,
               "Cannot disable both NAS-IP-Address and NAS-Identifier\n");
    return 1;
  }

  if (VAR_9)
    FUNC_4(VAR_6->bundle, VAR_7);
  else
    FUNC_3(VAR_6->bundle, VAR_7);

  return 0;
}
