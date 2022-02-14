
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm4000_dev {scalar_t__ monitor_running; int timer; int flags; int devq; } ;


 int FUNC_0 (int,struct cm4000_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ,void*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct cm4000_dev *VAR_1)
{




 FUNC_0(3, VAR_1, "-> terminate_monitor\n");
 FUNC_5(VAR_1->devq,
     FUNC_3(VAR_0,
        (void *)&VAR_1->flags));






 FUNC_0(5, VAR_1, "Now allow last cycle of monitor!\n");
 while (FUNC_4(VAR_0, (void *)&VAR_1->flags))
  FUNC_2(25);

 FUNC_0(5, VAR_1, "Delete timer\n");
 FUNC_1(&VAR_1->timer);




 FUNC_0(3, VAR_1, "<- terminate_monitor\n");
}
