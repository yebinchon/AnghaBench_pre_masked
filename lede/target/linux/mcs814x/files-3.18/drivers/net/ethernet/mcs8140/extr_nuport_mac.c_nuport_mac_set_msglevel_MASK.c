
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nuport_mac_priv {int msg_level; } ;
struct net_device {int dummy; } ;


 struct nuport_mac_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct nuport_mac_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->msg_level = VAR_1;
}
