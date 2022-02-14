
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {int stopped; TYPE_1__* spi; int suspended; int disabled; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ads7846 *VAR_0)
{
 if (!VAR_0->disabled && !VAR_0->suspended) {

  VAR_0->stopped = 0;
  FUNC_1();
  FUNC_0(VAR_0->spi->irq);
 }
}
