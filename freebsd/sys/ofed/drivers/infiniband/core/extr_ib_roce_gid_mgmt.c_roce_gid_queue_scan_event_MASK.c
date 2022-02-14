
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_netdev_event_work {int work; struct net_device* ndev; } ;
struct net_device {int if_type; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct roce_netdev_event_work* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 struct net_device* FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_3)
{
 struct roce_netdev_event_work *VAR_4;

retry:
 switch (VAR_3->if_type) {
 case 129:
  break;
 case 128:
  VAR_3 = FUNC_5(VAR_3);
  if (VAR_3 != ((void*)0))
   goto retry;

 default:
  return;
 }

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_3("roce_gid_mgmt: Couldn't allocate work for addr_event\n");
  return;
 }

 FUNC_0(&VAR_4->work, VAR_2);
 FUNC_1(VAR_3);

 VAR_4->ndev = VAR_3;

 FUNC_4(VAR_1, &VAR_4->work);
}
