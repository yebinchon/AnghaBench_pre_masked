
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_5__ {int dma_irqs_enabled; int * regs; int bcom_rx_task; TYPE_4__* dev; int bcom_tx_task; int irq; int lock; scalar_t__ regs_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,scalar_t__,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,int ,struct resource*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 struct resource VAR_11;
 int VAR_12 = -VAR_3;

 if (VAR_7.dev != ((void*)0))
  return -VAR_4;

 VAR_7.irq = FUNC_7(VAR_10->dev.of_node, 0);
 if (!VAR_7.irq)
  return -VAR_2;

 if (FUNC_8(VAR_10->dev.of_node, 0, &VAR_11))
  return -VAR_2;
 VAR_7.regs_phys = VAR_11.start;
 VAR_7.regs = FUNC_9(VAR_10->dev.of_node, 0);
 if (!VAR_7.regs)
  return -VAR_3;

 FUNC_12(&VAR_7.lock);


 FUNC_10(VAR_7.regs + VAR_5, 0x01010000);


 VAR_12 = FUNC_11(VAR_7.irq, VAR_9, 0,
    "mpc52xx-lpbfifo", &VAR_7);
 if (VAR_12)
  goto err_irq;


 VAR_7.bcom_rx_task =
  FUNC_0(2, VAR_11.start + VAR_6,
        VAR_0, VAR_1,
        16*1024*1024);
 if (!VAR_7.bcom_rx_task)
  goto err_bcom_rx;

 VAR_12 = FUNC_11(FUNC_3(VAR_7.bcom_rx_task),
    VAR_8, 0,
    "mpc52xx-lpbfifo-rx", &VAR_7);
 if (VAR_12)
  goto err_bcom_rx_irq;

 VAR_7.dma_irqs_enabled = 1;


 VAR_7.bcom_tx_task =
  FUNC_2(2, VAR_11.start + VAR_6,
        VAR_0, VAR_1);
 if (!VAR_7.bcom_tx_task)
  goto err_bcom_tx;

 VAR_7.dev = &VAR_10->dev;
 return 0;

 err_bcom_tx:
 FUNC_5(FUNC_3(VAR_7.bcom_rx_task), &VAR_7);
 err_bcom_rx_irq:
 FUNC_1(VAR_7.bcom_rx_task);
 err_bcom_rx:
 err_irq:
 FUNC_6(VAR_7.regs);
 VAR_7.regs = ((void*)0);

 FUNC_4(&VAR_10->dev, "mpc52xx_lpbfifo_probe() failed\n");
 return -VAR_2;
}
