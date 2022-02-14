
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_mcast {int backoff; int pkt_queue; int neigh_list; int list; void* delay_until; void* created; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 struct ipoib_mcast* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ipoib_mcast *FUNC_3(struct net_device *VAR_3,
          int VAR_4)
{
 struct ipoib_mcast *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_4 ? VAR_1 : VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->dev = VAR_3;
 VAR_5->created = VAR_2;
 VAR_5->delay_until = VAR_2;
 VAR_5->backoff = 1;

 FUNC_0(&VAR_5->list);
 FUNC_0(&VAR_5->neigh_list);
 FUNC_2(&VAR_5->pkt_queue);

 return VAR_5;
}
