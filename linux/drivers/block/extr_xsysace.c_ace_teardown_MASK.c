
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ace_device {int baseaddr; scalar_t__ irq; int fsm_tasklet; int tag_set; scalar_t__ queue; scalar_t__ gd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct ace_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ace_device *VAR_0)
{
 if (VAR_0->gd) {
  FUNC_2(VAR_0->gd);
  FUNC_5(VAR_0->gd);
 }

 if (VAR_0->queue) {
  FUNC_0(VAR_0->queue);
  FUNC_1(&VAR_0->tag_set);
 }

 FUNC_6(&VAR_0->fsm_tasklet);

 if (VAR_0->irq)
  FUNC_3(VAR_0->irq, VAR_0);

 FUNC_4(VAR_0->baseaddr);
}
