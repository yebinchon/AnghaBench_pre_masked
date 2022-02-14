
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_port {int port_num; int refcount; int comp; int table; int lock; struct mcast_device* dev; } ;
struct mcast_device {int start_port; int end_port; int event_handler; struct ib_device* device; struct mcast_port* port; } ;
struct ib_device {int phys_port_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_device*,int *,struct mcast_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mcast_device*) ;
 struct mcast_device* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct ib_device*,int) ;
 int FUNC_8 (struct ib_device*) ;
 int FUNC_9 (struct ib_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ib_device *VAR_4)
{
 struct mcast_device *VAR_5;
 struct mcast_port *VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_6(sizeof *VAR_5 + VAR_4->phys_port_cnt * sizeof *VAR_6,
        VAR_0);
 if (!VAR_5)
  return;

 VAR_5->start_port = FUNC_9(VAR_4);
 VAR_5->end_port = FUNC_8(VAR_4);

 for (VAR_7 = 0; VAR_7 <= VAR_5->end_port - VAR_5->start_port; VAR_7++) {
  if (!FUNC_7(VAR_4, VAR_5->start_port + VAR_7))
   continue;
  VAR_6 = &VAR_5->port[VAR_7];
  VAR_6->dev = VAR_5;
  VAR_6->port_num = VAR_5->start_port + VAR_7;
  FUNC_10(&VAR_6->lock);
  VAR_6->table = VAR_1;
  FUNC_4(&VAR_6->comp);
  FUNC_1(&VAR_6->refcount, 1);
  ++VAR_8;
 }

 if (!VAR_8) {
  FUNC_5(VAR_5);
  return;
 }

 VAR_5->device = VAR_4;
 FUNC_3(VAR_4, &VAR_2, VAR_5);

 FUNC_0(&VAR_5->event_handler, VAR_4, VAR_3);
 FUNC_2(&VAR_5->event_handler);
}
