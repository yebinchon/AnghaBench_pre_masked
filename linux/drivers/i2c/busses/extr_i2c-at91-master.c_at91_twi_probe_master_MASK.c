
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int * quirks; int * algo; } ;
struct at91_twi_dev {TYPE_1__ adapter; int fifo_size; TYPE_3__* dev; int irq; int cmd_complete; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_twi_dev*) ;
 int VAR_1 ;
 int FUNC_1 (struct at91_twi_dev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,char*,int ,int) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ,struct at91_twi_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int *) ;

int FUNC_8(struct platform_device *VAR_4,
     u32 VAR_5, struct at91_twi_dev *VAR_6)
{
 int VAR_7;

 FUNC_6(&VAR_6->cmd_complete);

 VAR_7 = FUNC_5(&VAR_4->dev, VAR_6->irq, VAR_3, 0,
         FUNC_4(VAR_6->dev), VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_6->dev, "Cannot get irq %d: %d\n", VAR_6->irq, VAR_7);
  return VAR_7;
 }

 if (VAR_6->dev->of_node) {
  VAR_7 = FUNC_1(VAR_6, VAR_5);
  if (VAR_7 == -VAR_0)
   return VAR_7;
 }

 if (!FUNC_7(VAR_4->dev.of_node, "atmel,fifo-size",
      &VAR_6->fifo_size)) {
  FUNC_3(VAR_6->dev, "Using FIFO (%u data)\n", VAR_6->fifo_size);
 }

 FUNC_0(VAR_6);

 VAR_6->adapter.algo = &VAR_1;
 VAR_6->adapter.quirks = &VAR_2;

 return 0;
}
