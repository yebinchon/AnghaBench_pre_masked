
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nuport_mac_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nuport_mac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nuport_mac_priv*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_6, int VAR_7,
    int VAR_8, u16 VAR_9)
{
 struct net_device *VAR_10 = VAR_6->priv;
 struct nuport_mac_priv *VAR_11 = FUNC_0(VAR_10);
 int VAR_12;
 u32 VAR_13 = 0;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_13 |= (VAR_7 << VAR_1) | (VAR_8 << VAR_4);
 VAR_13 |= VAR_2 | VAR_5;
 FUNC_2(VAR_9, VAR_3);
 FUNC_2(VAR_13, VAR_0);

 return FUNC_1(VAR_11);
}
