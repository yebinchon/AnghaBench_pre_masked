
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct dvb_net_priv {int restart_net_feed_wq; int set_multicast_list_wq; scalar_t__ in_use; } ;
struct dvb_net {struct net_device** device; scalar_t__* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 struct dvb_net_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct dvb_net *VAR_2, unsigned long VAR_3)
{
 struct net_device *VAR_4 = VAR_2->device[VAR_3];
 struct dvb_net_priv *VAR_5;

 if (!VAR_2->state[VAR_3])
  return -VAR_1;
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5->in_use)
  return -VAR_0;

 FUNC_0(VAR_4);
 FUNC_1(&VAR_5->set_multicast_list_wq);
 FUNC_1(&VAR_5->restart_net_feed_wq);
 FUNC_4("removed network interface %s\n", VAR_4->name);
 FUNC_5(VAR_4);
 VAR_2->state[VAR_3]=0;
 VAR_2->device[VAR_3] = ((void*)0);
 FUNC_2(VAR_4);

 return 0;
}
