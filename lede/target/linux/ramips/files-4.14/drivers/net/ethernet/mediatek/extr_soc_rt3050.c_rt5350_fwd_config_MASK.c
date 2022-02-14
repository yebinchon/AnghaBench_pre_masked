
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct fe_priv {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct fe_priv *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1((VAR_2->features & VAR_0));

 return 0;
}
