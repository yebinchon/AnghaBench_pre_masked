
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {scalar_t__ argc; scalar_t__ argn; } ;


 int FUNC_0 (struct cmdargs const*,int) ;

__attribute__((used)) static int
FUNC_1(struct cmdargs const *VAR_0)
{
  if (VAR_0->argc == VAR_0->argn)
    return -1;
  return FUNC_0(VAR_0, 1);
}
