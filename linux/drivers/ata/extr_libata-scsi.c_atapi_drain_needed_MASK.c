
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {int * cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct request*) ;
 TYPE_1__* FUNC_6 (struct request*) ;

__attribute__((used)) static int FUNC_7(struct request *VAR_1)
{
 if (FUNC_3(!FUNC_2(VAR_1)))
  return 0;

 if (!FUNC_1(VAR_1) || FUNC_4(FUNC_5(VAR_1)))
  return 0;

 return FUNC_0(FUNC_6(VAR_1)->cmd[0]) == VAR_0;
}
