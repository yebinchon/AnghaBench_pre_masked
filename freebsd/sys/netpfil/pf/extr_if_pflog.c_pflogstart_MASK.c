
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0)
{
 struct mbuf *VAR_1;

 for (;;) {
  FUNC_0(&VAR_0->if_snd);
  FUNC_2(&VAR_0->if_snd, VAR_1);
  FUNC_1(&VAR_0->if_snd);

  if (VAR_1 == ((void*)0))
   return;
  else
   FUNC_3(VAR_1);
 }
}
