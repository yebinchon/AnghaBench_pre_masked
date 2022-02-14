
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int dev_addr; } ;
struct ipoib_dev_priv {int port; int ca; } ;
struct ifla_vf_info {int vf; int mac; } ;


 int FUNC_0 (int ,int,int ,struct ifla_vf_info*) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1,
          struct ifla_vf_info *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->ca, VAR_1, VAR_3->port, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_2->vf = VAR_1;
 FUNC_2(VAR_2->mac, VAR_0->dev_addr, VAR_0->addr_len);

 return 0;
}
