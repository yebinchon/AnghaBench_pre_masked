
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int port; int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, int VAR_4, u64 VAR_5, int VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_1(VAR_3);

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_7->ca, VAR_4, VAR_7->port, VAR_5, VAR_6);
}
