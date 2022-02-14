
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int send_napi; int recv_napi; } ;


 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->recv_napi);
 FUNC_1(&VAR_1->send_napi);
}
