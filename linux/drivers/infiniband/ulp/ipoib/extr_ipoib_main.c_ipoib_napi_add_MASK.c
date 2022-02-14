
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int send_napi; int recv_napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, &VAR_5->recv_napi, VAR_2, VAR_0);
 FUNC_1(VAR_4, &VAR_5->send_napi, VAR_3, VAR_1);
}
