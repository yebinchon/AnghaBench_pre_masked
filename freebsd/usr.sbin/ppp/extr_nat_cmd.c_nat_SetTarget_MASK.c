
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct cmdargs {int argc; int argn; int * argv; } ;


 struct in_addr FUNC_0 (int ) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct in_addr) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4(struct cmdargs const *VAR_4)
{
  struct in_addr VAR_5;

  if (VAR_4->argc == VAR_4->argn) {
    VAR_5.s_addr = VAR_0;
    FUNC_1(VAR_3, VAR_5);
    return 0;
  }

  if (VAR_4->argc != VAR_4->argn + 1)
    return -1;

  if (!FUNC_3(VAR_4->argv[VAR_4->argn], "MYADDR")) {
    VAR_5.s_addr = VAR_0;
    FUNC_1(VAR_3, VAR_5);
    return 0;
  }

  VAR_5 = FUNC_0(VAR_4->argv[VAR_4->argn]);
  if (VAR_5.s_addr == VAR_1) {
    FUNC_2(VAR_2, "%s: invalid address\n", VAR_4->argv[VAR_4->argn]);
    return 1;
  }

  FUNC_1(VAR_3, VAR_5);
  return 0;
}
