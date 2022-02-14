
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int if_label; } ;


 int FUNC_0 (int ,int,struct ifnet*,struct mbuf*) ;
 int FUNC_1 (struct ifnet*,int) ;
 int FUNC_2 (struct ifnet*,int) ;
 int FUNC_3 (int ,struct ifnet*,int ,struct mbuf*,struct label*) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_0 ;
 struct label* FUNC_5 (struct mbuf*) ;
 scalar_t__ VAR_1 ;

int
FUNC_6(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct label *VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(VAR_3);

 if (VAR_1 == 0)
  return (0);

 VAR_4 = FUNC_5(VAR_3);

 FUNC_1(VAR_2, VAR_6);
 FUNC_3(VAR_0, VAR_2, VAR_2->if_label, VAR_3,
     VAR_4);
 FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_6);

 return (VAR_5);
}
