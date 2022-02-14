
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_port {int lock; int table; } ;
struct mcast_group {int node; int refcount; struct mcast_port* port; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mcast_port*) ;
 int FUNC_2 (struct mcast_group*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mcast_group *VAR_0)
{
 struct mcast_port *VAR_1 = VAR_0->port;
 unsigned long VAR_2;

 FUNC_4(&VAR_1->lock, VAR_2);
 if (FUNC_0(&VAR_0->refcount)) {
  FUNC_3(&VAR_0->node, &VAR_1->table);
  FUNC_5(&VAR_1->lock, VAR_2);
  FUNC_2(VAR_0);
  FUNC_1(VAR_1);
 } else
  FUNC_5(&VAR_1->lock, VAR_2);
}
