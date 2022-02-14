
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct fe_priv*,int ,struct net_device*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct fe_priv *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 FUNC_4();
 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_1, VAR_0, VAR_2,
       "Driver up/down cycle failed, closing device.\n");
  FUNC_0(VAR_2);
 }
 FUNC_5();
}
