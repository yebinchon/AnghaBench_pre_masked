
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct nuport_mac_priv {int lock; } ;
struct net_device {scalar_t__ dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = VAR_5;
 struct nuport_mac_priv *VAR_7 = FUNC_1(VAR_4);
 unsigned long *VAR_8 = (unsigned long *)VAR_4->dev_addr;
 u32 VAR_9, VAR_10;

 if (FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_0(VAR_4->dev_addr, VAR_6->sa_data, VAR_1);

 FUNC_5(&VAR_7->lock);

 FUNC_4(*VAR_8, VAR_3);
 VAR_8 = (unsigned long *)(VAR_4->dev_addr + 4);
 FUNC_4(*VAR_8, VAR_2);

 VAR_10 = FUNC_3(VAR_3);
 VAR_9 = FUNC_3(VAR_2);

 FUNC_6(&VAR_7->lock);

 return 0;
}
