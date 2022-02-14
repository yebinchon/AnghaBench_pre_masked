
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;
struct ifnet {int if_snd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct ifnet*) ;
 void FUNC_3 (struct ifnet*,struct ipoib_dev_priv*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_1)
{
 struct ipoib_dev_priv *VAR_2;
 struct mbuf *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != ((void*)0))
  return FUNC_3(VAR_1, VAR_2);
 while (!FUNC_1(&VAR_1->if_snd)) {
  FUNC_0(&VAR_1->if_snd, VAR_3);
  if (VAR_3 == ((void*)0))
   break;
  FUNC_5(VAR_3);
  FUNC_4(VAR_1, VAR_0, 1);
 }
}
