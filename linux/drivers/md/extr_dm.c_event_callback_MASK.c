
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int eventq; int event_nr; int disk; int uevent_lock; int uevent_list; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(VAR_0);
 struct mapped_device *VAR_3 = (struct mapped_device *) VAR_1;

 FUNC_6(&VAR_3->uevent_lock, VAR_2);
 FUNC_5(&VAR_3->uevent_list, &VAR_0);
 FUNC_7(&VAR_3->uevent_lock, VAR_2);

 FUNC_4(&VAR_0, &FUNC_2(VAR_3->disk)->kobj);

 FUNC_1(&VAR_3->event_nr);
 FUNC_8(&VAR_3->eventq);
 FUNC_3();
}
