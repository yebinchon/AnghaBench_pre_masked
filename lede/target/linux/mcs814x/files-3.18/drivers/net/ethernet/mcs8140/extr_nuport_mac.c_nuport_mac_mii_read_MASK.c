
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nuport_mac_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nuport_mac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nuport_mac_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_5,
    int VAR_6, int VAR_7)
{
 struct net_device *VAR_8 = VAR_5->priv;
 struct nuport_mac_priv *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_11 |= (VAR_6 << VAR_1) | (VAR_7 << VAR_4) | VAR_2;
 FUNC_3(VAR_11, VAR_0);
 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_2(VAR_3);
}
