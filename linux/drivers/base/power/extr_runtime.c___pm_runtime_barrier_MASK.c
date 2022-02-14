
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int request_pending; scalar_t__ runtime_status; int wait_queue; int lock; scalar_t__ idle_notification; int work; int request; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct device *VAR_5)
{
 FUNC_3(VAR_5);

 if (VAR_5->power.request_pending) {
  VAR_5->power.request = VAR_0;
  FUNC_7(&VAR_5->power.lock);

  FUNC_1(&VAR_5->power.work);

  FUNC_6(&VAR_5->power.lock);
  VAR_5->power.request_pending = 0;
 }

 if (VAR_5->power.runtime_status == VAR_2
     || VAR_5->power.runtime_status == VAR_1
     || VAR_5->power.idle_notification) {
  FUNC_0(VAR_4);


  for (;;) {
   FUNC_4(&VAR_5->power.wait_queue, &VAR_4,
     VAR_3);
   if (VAR_5->power.runtime_status != VAR_2
       && VAR_5->power.runtime_status != VAR_1
       && !VAR_5->power.idle_notification)
    break;
   FUNC_7(&VAR_5->power.lock);

   FUNC_5();

   FUNC_6(&VAR_5->power.lock);
  }
  FUNC_2(&VAR_5->power.wait_queue, &VAR_4);
 }
}
