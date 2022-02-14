
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6cp {scalar_t__ my_reject; scalar_t__ his_reject; int hisaddr; int myaddr; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ipv6cp *VAR_0)
{
  FUNC_0(&VAR_0->myaddr);
  FUNC_0(&VAR_0->hisaddr);

  VAR_0->his_reject = 0;
  VAR_0->my_reject = 0;
}
