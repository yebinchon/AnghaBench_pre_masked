
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int features; } ;
struct fe_priv {int vlan_map; } ;
typedef int __be16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__* VAR_2 ;
 struct fe_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
          __be16 VAR_4, u16 VAR_5)
{
 struct fe_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = (VAR_5 & 0xf);

 if (!((VAR_2[VAR_0]) &&
       (VAR_3->features & VAR_1)))
  return 0;

 FUNC_0(VAR_7, &VAR_6->vlan_map);

 return 0;
}
