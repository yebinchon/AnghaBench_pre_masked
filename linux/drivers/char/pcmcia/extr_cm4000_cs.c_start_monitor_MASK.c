
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm4000_dev {int monitor_running; int timer; } ;


 int FUNC_0 (int,struct cm4000_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cm4000_dev *VAR_2)
{
 FUNC_0(3, VAR_2, "-> start_monitor\n");
 if (!VAR_2->monitor_running) {
  FUNC_0(5, VAR_2, "create, init and add timer\n");
  FUNC_2(&VAR_2->timer, VAR_1, 0);
  VAR_2->monitor_running = 1;
  FUNC_1(&VAR_2->timer, VAR_0);
 } else
  FUNC_0(5, VAR_2, "monitor already running\n");
 FUNC_0(3, VAR_2, "<- start_monitor\n");
}
