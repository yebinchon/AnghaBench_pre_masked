
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {int stopped; TYPE_1__* spi; int wait; int suspended; int disabled; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ads7846 *VAR_0)
{
 if (!VAR_0->disabled && !VAR_0->suspended) {

  VAR_0->stopped = 1;
  FUNC_1();
  FUNC_2(&VAR_0->wait);
  FUNC_0(VAR_0->spi->irq);
 }
}
