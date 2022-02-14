
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp {int link; } ;
struct ipcp {struct mqueue* Queue; } ;
struct ipv6cp {struct mqueue* Queue; } ;
struct ncp {struct mp mp; struct ipcp ipcp; struct ipv6cp ipv6cp; } ;
struct mqueue {scalar_t__ top; } ;


 int FUNC_0 (struct ipcp*) ;
 int FUNC_1 (struct ipv6cp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mqueue*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct ncp *VAR_0)
{

  struct ipv6cp *VAR_1 = &VAR_0->ipv6cp;

  struct ipcp *VAR_2 = &VAR_0->ipcp;
  struct mp *VAR_3 = &VAR_0->mp;
  struct mqueue *VAR_4;

  for (VAR_4 = VAR_2->Queue; VAR_4 < VAR_2->Queue + FUNC_0(VAR_2); VAR_4++)
    while (VAR_4->top)
      FUNC_4(FUNC_3(VAR_4));


  for (VAR_4 = VAR_1->Queue; VAR_4 < VAR_1->Queue + FUNC_1(VAR_1); VAR_4++)
    while (VAR_4->top)
      FUNC_4(FUNC_3(VAR_4));


  FUNC_2(&VAR_3->link);
}
