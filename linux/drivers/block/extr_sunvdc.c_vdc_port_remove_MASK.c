
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct TYPE_4__ {int timer; } ;
struct vdc_port {TYPE_1__ vio; TYPE_2__* disk; int ldc_reset_timer_work; int ldc_reset_work; } ;
struct TYPE_5__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 struct vdc_port* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vdc_port*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct vdc_port*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct vio_dev *VAR_0)
{
 struct vdc_port *VAR_1 = FUNC_5(&VAR_0->dev);

 if (VAR_1) {
  FUNC_0(VAR_1->disk->queue);

  FUNC_7(&VAR_1->ldc_reset_work);
  FUNC_1(&VAR_1->ldc_reset_timer_work);
  FUNC_4(&VAR_1->vio.timer);

  FUNC_3(VAR_1->disk);
  FUNC_2(VAR_1->disk->queue);
  FUNC_9(VAR_1->disk);
  VAR_1->disk = ((void*)0);

  FUNC_10(VAR_1);
  FUNC_11(&VAR_1->vio);

  FUNC_6(&VAR_0->dev, ((void*)0));

  FUNC_8(VAR_1);
 }
 return 0;
}
