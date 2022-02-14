
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssif_info {scalar_t__ ssif_state; int stopping; scalar_t__ thread; int wake_thread; int retry_timer; int watch_timer; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct ssif_info *VAR_3 = VAR_2;

 FUNC_3(&VAR_3->client->dev, &VAR_1);
 FUNC_2(&VAR_3->client->dev, ((void*)0));


 while (VAR_3->ssif_state != VAR_0)
  FUNC_5(1);

 VAR_3->stopping = 1;
 FUNC_1(&VAR_3->watch_timer);
 FUNC_1(&VAR_3->retry_timer);
 if (VAR_3->thread) {
  FUNC_0(&VAR_3->wake_thread);
  FUNC_4(VAR_3->thread);
 }
}
