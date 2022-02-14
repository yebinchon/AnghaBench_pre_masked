
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int irq; int esd_work; int penup_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tsc200x*) ;

__attribute__((used)) static void FUNC_5(struct tsc200x *VAR_0)
{
 FUNC_4(VAR_0);

 FUNC_2(VAR_0->irq);
 FUNC_1(&VAR_0->penup_timer);

 FUNC_0(&VAR_0->esd_work);

 FUNC_3(VAR_0->irq);
}
