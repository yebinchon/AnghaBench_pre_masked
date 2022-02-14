
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7877 {int disabled; int mutex; int timer; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct ad7877*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct ad7877 *VAR_1 = VAR_0;

 FUNC_3(&VAR_1->mutex);

 if (!VAR_1->disabled) {
  VAR_1->disabled = 1;
  FUNC_2(VAR_1->spi->irq);

  if (FUNC_1(&VAR_1->timer))
   FUNC_0(VAR_1);
 }






 FUNC_4(&VAR_1->mutex);
}
