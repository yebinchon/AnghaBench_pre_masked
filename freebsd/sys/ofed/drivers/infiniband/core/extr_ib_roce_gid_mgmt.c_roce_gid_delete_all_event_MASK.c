
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_netdev_event_work {int work; struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct roce_netdev_event_work* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_3)
{
 struct roce_netdev_event_work *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_4("roce_gid_mgmt: Couldn't allocate work for addr_event\n");
  return;
 }

 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_1(VAR_3);
 VAR_4->ndev = VAR_3;
 FUNC_5(VAR_2, &VAR_4->work);


 FUNC_2(VAR_2);
}
