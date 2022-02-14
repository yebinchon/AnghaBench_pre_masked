
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_port {int comp; } ;
struct mcast_device {int end_port; int start_port; struct mcast_port* port; int event_handler; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct mcast_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mcast_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct ib_device*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_1, void *VAR_2)
{
 struct mcast_device *VAR_3 = VAR_2;
 struct mcast_port *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 FUNC_2(&VAR_3->event_handler);
 FUNC_1(VAR_0);

 for (VAR_5 = 0; VAR_5 <= VAR_3->end_port - VAR_3->start_port; VAR_5++) {
  if (FUNC_4(VAR_1, VAR_3->start_port + VAR_5)) {
   VAR_4 = &VAR_3->port[VAR_5];
   FUNC_0(VAR_4);
   FUNC_5(&VAR_4->comp);
  }
 }

 FUNC_3(VAR_3);
}
