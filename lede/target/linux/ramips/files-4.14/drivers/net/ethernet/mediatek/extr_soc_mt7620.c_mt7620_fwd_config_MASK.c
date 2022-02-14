
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct fe_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct net_device* FUNC_4 (struct fe_priv*) ;

__attribute__((used)) static int FUNC_5(struct fe_priv *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(FUNC_0(VAR_0) & ~7, VAR_0);

 FUNC_3((VAR_4->features & VAR_1));
 FUNC_2((VAR_4->features & VAR_2));

 return 0;
}
