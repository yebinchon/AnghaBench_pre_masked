
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ has_dma; } ;
struct atmel_tdes_dev {TYPE_1__ caps; int queue_task; int done_task; int list; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct atmel_tdes_dev*) ;
 int FUNC_1 (struct atmel_tdes_dev*) ;
 int FUNC_2 (struct atmel_tdes_dev*) ;
 int FUNC_3 (int *) ;
 struct atmel_tdes_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct atmel_tdes_dev *VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_5(&VAR_1.lock);
 FUNC_3(&VAR_3->list);
 FUNC_6(&VAR_1.lock);

 FUNC_2(VAR_3);

 FUNC_7(&VAR_3->done_task);
 FUNC_7(&VAR_3->queue_task);

 if (VAR_3->caps.has_dma)
  FUNC_1(VAR_3);

 FUNC_0(VAR_3);

 return 0;
}
