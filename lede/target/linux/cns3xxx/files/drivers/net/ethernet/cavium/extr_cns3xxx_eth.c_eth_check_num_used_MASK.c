
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct _tx_ring {scalar_t__ num_used; int stopped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct port** VAR_2 ;

__attribute__((used)) static void FUNC_2(struct _tx_ring *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;

 if (VAR_3->num_used >= VAR_0 - VAR_1)
  VAR_4 = 1;

 if (VAR_3->stopped == VAR_4)
  return;

 VAR_3->stopped = VAR_4;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  struct port *VAR_6 = VAR_2[VAR_5];
  struct net_device *VAR_7;

  if (!VAR_6)
   continue;

  VAR_7 = VAR_6->netdev;

  if (VAR_4)
   FUNC_0(VAR_7);
  else
   FUNC_1(VAR_7);
 }
}
