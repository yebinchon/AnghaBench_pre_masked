
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iplist {int nItems; } ;
struct in_addr {int dummy; } ;


 struct in_addr FUNC_0 (struct iplist*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct in_addr
FUNC_3(struct iplist *VAR_0)
{
  FUNC_1();
  return FUNC_0(VAR_0, FUNC_2() % VAR_0->nItems);
}
