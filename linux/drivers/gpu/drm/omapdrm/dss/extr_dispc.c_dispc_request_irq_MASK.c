
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {int * user_data; int * user_handler; int irq; TYPE_1__* pdev; } ;
typedef int * irq_handler_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,char*,struct dispc_device*) ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct dispc_device *VAR_3, irq_handler_t VAR_4,
        void *VAR_5)
{
 int VAR_6;

 if (VAR_3->user_handler != ((void*)0))
  return -VAR_0;

 VAR_3->user_handler = VAR_4;
 VAR_3->user_data = VAR_5;


 FUNC_1();

 VAR_6 = FUNC_0(&VAR_3->pdev->dev, VAR_3->irq, VAR_2,
        VAR_1, "OMAP DISPC", VAR_3);
 if (VAR_6) {
  VAR_3->user_handler = ((void*)0);
  VAR_3->user_data = ((void*)0);
 }

 return VAR_6;
}
