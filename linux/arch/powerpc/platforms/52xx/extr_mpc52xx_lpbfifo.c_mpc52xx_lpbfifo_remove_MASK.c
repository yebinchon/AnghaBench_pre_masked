
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * dev; int * regs; int irq; int bcom_rx_task; int bcom_tx_task; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 if (VAR_1.dev != &VAR_2->dev)
  return 0;


 FUNC_5(VAR_1.regs + VAR_0, 0x01010000);


 FUNC_3(FUNC_2(VAR_1.bcom_tx_task), &VAR_1);
 FUNC_1(VAR_1.bcom_tx_task);


 FUNC_3(FUNC_2(VAR_1.bcom_rx_task), &VAR_1);
 FUNC_0(VAR_1.bcom_rx_task);

 FUNC_3(VAR_1.irq, &VAR_1);
 FUNC_4(VAR_1.regs);
 VAR_1.regs = ((void*)0);
 VAR_1.dev = ((void*)0);

 return 0;
}
