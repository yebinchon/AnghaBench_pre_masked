
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4_connection {struct net_device* reply_dev; struct net_device* original_dev; struct sfe_ipv4_connection* all_connections_next; } ;
struct sfe_ipv4 {int lock; struct sfe_ipv4_connection* all_connections_head; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sfe_ipv4 VAR_1 ;
 int FUNC_0 (struct sfe_ipv4*,struct sfe_ipv4_connection*,int ) ;
 int FUNC_1 (struct sfe_ipv4*,struct sfe_ipv4_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_2)
{
 struct sfe_ipv4 *VAR_3 = &VAR_1;
 struct sfe_ipv4_connection *VAR_4;

another_round:
 FUNC_2(&VAR_3->lock);

 for (VAR_4 = VAR_3->all_connections_head; VAR_4; VAR_4 = VAR_4->all_connections_next) {



  if (!VAR_2
      || (VAR_2 == VAR_4->original_dev)
      || (VAR_2 == VAR_4->reply_dev)) {
   break;
  }
 }

 if (VAR_4) {
  FUNC_1(VAR_3, VAR_4);
 }

 FUNC_3(&VAR_3->lock);

 if (VAR_4) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  goto another_round;
 }
}
