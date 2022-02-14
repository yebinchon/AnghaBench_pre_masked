
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct fe_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct fe_priv*) ;

void FUNC_3(struct fe_priv *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_2);

 FUNC_1((VAR_3->features & VAR_0));
 FUNC_0((VAR_3->features & VAR_1));
}
