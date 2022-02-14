
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {scalar_t__ irq; int dev; int irq_cleanup; int irq_handler_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (struct si_sm_io*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_3 ;

int FUNC_4(struct si_sm_io *VAR_4)
{
 int VAR_5;

 if (!VAR_4->irq)
  return 0;

 VAR_5 = FUNC_3(VAR_4->irq,
    VAR_2,
    VAR_0,
    VAR_1,
    VAR_4->irq_handler_data);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "%s unable to claim interrupt %d,"
    " running polled\n",
    VAR_1, VAR_4->irq);
  VAR_4->irq = 0;
 } else {
  VAR_4->irq_cleanup = VAR_3;
  FUNC_2(VAR_4);
  FUNC_0(VAR_4->dev, "Using irq %d\n", VAR_4->irq);
 }

 return VAR_5;
}
