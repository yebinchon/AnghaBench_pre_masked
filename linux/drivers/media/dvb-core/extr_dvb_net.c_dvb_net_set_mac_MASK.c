
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct dvb_net_priv {int restart_net_feed_wq; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct dvb_net_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (struct net_device *VAR_0, void *VAR_1)
{
 struct dvb_net_priv *VAR_2 = FUNC_1(VAR_0);
 struct sockaddr *VAR_3=VAR_1;

 FUNC_0(VAR_0->dev_addr, VAR_3->sa_data, VAR_0->addr_len);

 if (FUNC_2(VAR_0))
  FUNC_3(&VAR_2->restart_net_feed_wq);

 return 0;
}
