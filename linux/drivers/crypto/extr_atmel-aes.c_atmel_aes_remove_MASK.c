
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct atmel_aes_dev {int iclk; int queue_task; int done_task; int list; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct atmel_aes_dev*) ;
 int FUNC_1 (struct atmel_aes_dev*) ;
 int FUNC_2 (struct atmel_aes_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct atmel_aes_dev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct atmel_aes_dev *VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_6(&VAR_1.lock);
 FUNC_4(&VAR_3->list);
 FUNC_7(&VAR_1.lock);

 FUNC_2(VAR_3);

 FUNC_8(&VAR_3->done_task);
 FUNC_8(&VAR_3->queue_task);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 FUNC_3(VAR_3->iclk);

 return 0;
}
