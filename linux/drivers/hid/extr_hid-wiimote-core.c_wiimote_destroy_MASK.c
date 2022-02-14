
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int worker; } ;
struct TYPE_5__ {int lock; int flags; } ;
struct wiimote_data {TYPE_3__* hdev; TYPE_2__ queue; int timer; int init_worker; TYPE_1__ state; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct wiimote_data*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct wiimote_data*) ;
 int FUNC_9 (struct wiimote_data*) ;
 int FUNC_10 (struct wiimote_data*) ;
 int FUNC_11 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_12(struct wiimote_data *VAR_3)
{
 unsigned long VAR_4;

 FUNC_8(VAR_3);


 FUNC_6(&VAR_3->state.lock, VAR_4);
 VAR_3->state.flags |= VAR_0;
 FUNC_7(&VAR_3->state.lock, VAR_4);

 FUNC_0(&VAR_3->init_worker);
 FUNC_1(&VAR_3->timer);

 FUNC_2(&VAR_3->hdev->dev, &VAR_1);
 FUNC_2(&VAR_3->hdev->dev, &VAR_2);

 FUNC_11(VAR_3);
 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_0(&VAR_3->queue.worker);
 FUNC_3(VAR_3->hdev);
 FUNC_4(VAR_3->hdev);

 FUNC_5(VAR_3);
}
