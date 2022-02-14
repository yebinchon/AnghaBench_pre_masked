
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int if_label; } ;


 int FUNC_0 (int ,struct ifnet*,int ,struct mbuf*,struct label*) ;
 struct label* FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_2(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct label *VAR_4;

 if (VAR_0 == 0)
  return;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_1, VAR_2, VAR_2->if_label, VAR_3,
     VAR_4);
}
